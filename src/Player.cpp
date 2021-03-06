#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

bool Player::openFile(std::string path)
{
    return music.openFromFile(path);
}

Status Player::getMusicStatus()
{
    if(music.getStatus() == sf::SoundSource::Playing){ return Status::PLAYING; }
    if(music.getStatus() == sf::SoundSource::Paused) { return Status::PAUSED;  }
    return Status::STOPPED;
}

std::string Player::getCurrentTime()
{
    int currentTime = static_cast<int>(music.getPlayingOffset().asSeconds());
    std::string cMin = ("00" + std::to_string(currentTime / 60));
    std::string cSec = ("00" + std::to_string(currentTime % 60));

    int totalTime = static_cast<int>(music.getDuration().asSeconds());
    std::string tMin = ("00" + std::to_string(totalTime / 60));
    std::string tSec = ("00" + std::to_string(totalTime % 60));

    std::stringstream ss;
    ss << cMin.substr(cMin.size()-2, cMin.size()-1) << ":" << cSec.substr(cSec.size()-2, cSec.size()-1)
       << " / "
       << tMin.substr(tMin.size()-2, tMin.size()-1) << ":" << tSec.substr(tSec.size()-2, tSec.size()-1);


    return ss.str();

}

int Player::getCurrentTimeInt()
{
    int currentTime = static_cast<int>(music.getPlayingOffset().asSeconds());
    return currentTime;
}

int Player::getTotalTime()
{
    int totalTime = static_cast<int>(music.getDuration().asSeconds());
    return totalTime;
}

void Player::playIntro()
{
    intro.openFromFile("resources/intro.ogg");
    intro.play();
}

void Player::play()
{
    music.play();
}


void Player::pause()
{
    music.pause();
}

void Player::stop()
{
    music.stop();
}
