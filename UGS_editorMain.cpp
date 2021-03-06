/***************************************************************
 * Name:      UGS_editorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Marco Aurélio Lima (marco_aurelio029@hotmail.com)
 * Created:   2022-03-21
 * Copyright: Marco Aurélio Lima (github.com/marcoaurelima)
 * License:
 **************************************************************/

#include "UGS_editorMain.h"
#include <wx/msgdlg.h>


//(*InternalHeaders(UGS_editorFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(UGS_editorFrame)
const long UGS_editorFrame::ID_STATICTEXT16 = wxNewId();
const long UGS_editorFrame::ID_BUTTON3 = wxNewId();
const long UGS_editorFrame::ID_GAUGE1 = wxNewId();
const long UGS_editorFrame::ID_PANEL10 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL1 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL2 = wxNewId();
const long UGS_editorFrame::ID_CHOICE1 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL3 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT2 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT3 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT4 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT6 = wxNewId();
const long UGS_editorFrame::ID_BUTTON1 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT9 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT5 = wxNewId();
const long UGS_editorFrame::ID_BUTTON2 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT7 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL8 = wxNewId();
const long UGS_editorFrame::ID_BUTTON7 = wxNewId();
const long UGS_editorFrame::ID_BUTTON10 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT17 = wxNewId();
const long UGS_editorFrame::ID_PANEL2 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT1 = wxNewId();
const long UGS_editorFrame::ID_STATICLINE1 = wxNewId();
const long UGS_editorFrame::ID_BUTTON4 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL4 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT10 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL5 = wxNewId();
const long UGS_editorFrame::ID_BUTTON5 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT11 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL6 = wxNewId();
const long UGS_editorFrame::ID_BUTTON6 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT12 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT14 = wxNewId();
const long UGS_editorFrame::ID_PANEL3 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL9 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT8 = wxNewId();
const long UGS_editorFrame::ID_BUTTON8 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT13 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL10 = wxNewId();
const long UGS_editorFrame::ID_STATICTEXT15 = wxNewId();
const long UGS_editorFrame::ID_BUTTON9 = wxNewId();
const long UGS_editorFrame::ID_CHOICE2 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL11 = wxNewId();
const long UGS_editorFrame::ID_CHOICE3 = wxNewId();
const long UGS_editorFrame::ID_CHOICE4 = wxNewId();
const long UGS_editorFrame::ID_TEXTCTRL12 = wxNewId();
const long UGS_editorFrame::ID_BUTTON11 = wxNewId();
const long UGS_editorFrame::ID_BUTTON12 = wxNewId();
const long UGS_editorFrame::ID_PANEL4 = wxNewId();
const long UGS_editorFrame::ID_PANEL1 = wxNewId();
const long UGS_editorFrame::idMenuQuit = wxNewId();
const long UGS_editorFrame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(UGS_editorFrame,wxFrame)
    //(*EventTable(UGS_editorFrame)
    //*)
END_EVENT_TABLE()

UGS_editorFrame::UGS_editorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(UGS_editorFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("Ultimate Guitar Show - Editor"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1053,554));
    Move(wxPoint(-1,-1));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(0,8), wxSize(542,592), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
    Panel10 = new wxPanel(Panel1, ID_PANEL10, wxPoint(536,408), wxSize(488,104), wxBORDER_DOUBLE|wxTAB_TRAVERSAL, _T("ID_PANEL10"));
    Panel10->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUBAR));
    StaticText16 = new wxStaticText(Panel10, ID_STATICTEXT16, _("Exportacao"), wxPoint(24,8), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    StaticText16->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
    Button3 = new wxButton(Panel10, ID_BUTTON3, _("Exportar tudo"), wxPoint(288,24), wxSize(170,30), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Gauge1 = new wxGauge(Panel10, ID_GAUGE1, 100, wxPoint(26,72), wxSize(432,10), 0, wxDefaultValidator, _T("ID_GAUGE1"));
    Panel2 = new wxPanel(Panel1, ID_PANEL2, wxPoint(32,72), wxSize(480,440), wxBORDER_DOUBLE|wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    Panel2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUBAR));
    TextCtrl1 = new wxTextCtrl(Panel2, ID_TEXTCTRL1, wxEmptyString, wxPoint(88,46), wxSize(352,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(Panel2, ID_TEXTCTRL2, wxEmptyString, wxPoint(88,84), wxSize(352,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Choice1 = new wxChoice(Panel2, ID_CHOICE1, wxPoint(112,124), wxSize(326,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->Append(_("Guitarra 1"));
    Choice1->Append(_("Guitarra 2"));
    Choice1->Append(_("Baixo"));
    Choice1->Append(_("Bateria"));
    Choice1->Append(_("Sanfona"));
    Choice1->Append(_("Zabumba"));
    Choice1->Append(_("Triangulo"));
    Choice1->Append(_("Sax"));
    Choice1->Append(_("Violao"));
    Choice1->Append(_("Cavaquinho"));
    Choice1->Append(_("Ukulele"));
    Choice1->Append(_("Trompete"));
    Choice1->Append(_("Sampler"));
    Choice1->Append(_("Piano"));
    Choice1->Append(_("Teclado"));
    TextCtrl3 = new wxTextCtrl(Panel2, ID_TEXTCTRL3, wxEmptyString, wxPoint(112,162), wxSize(284,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->Disable();
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Artista"), wxPoint(32,48), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Musica"), wxPoint(32,85), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Instrumento"), wxPoint(32,123), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("Audio .ogg"), wxPoint(32,163), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    Button1 = new wxButton(Panel2, ID_BUTTON1, _(". . ."), wxPoint(402,160), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _("Informacoes"), wxPoint(16,8), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    StaticText9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
    StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Arquivo de sequencia bruta"), wxPoint(32,216), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("Gerar"), wxPoint(304,208), wxSize(139,30), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("Path de saida"), wxPoint(32,296), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    TextCtrl8 = new wxTextCtrl(Panel2, ID_TEXTCTRL8, wxEmptyString, wxPoint(32,320), wxSize(362,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    TextCtrl8->Disable();
    Button7 = new wxButton(Panel2, ID_BUTTON7, _(". . ."), wxPoint(400,320), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button10 = new wxButton(Panel2, ID_BUTTON10, _("Criar ambiente de producao"), wxPoint(32,376), wxSize(406,40), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    StaticText17 = new wxStaticText(Panel2, ID_STATICTEXT17, _("  [    Ausente    ]  "), wxPoint(200,216), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    StaticText17->SetForegroundColour(wxColour(255,0,0));
    StaticText17->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("ULTIMATE GUITAR SHOW EDITOR"), wxPoint(64,24), wxSize(416,32), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(18,wxFONTFAMILY_TELETYPE,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Nimbus Mono PS"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxPoint(50,60), wxSize(400,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    Panel3 = new wxPanel(Panel1, ID_PANEL3, wxPoint(536,24), wxSize(488,144), wxBORDER_DOUBLE|wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    Panel3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUBAR));
    Button4 = new wxButton(Panel3, ID_BUTTON4, _(". . ."), wxPoint(424,37), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    TextCtrl4 = new wxTextCtrl(Panel3, ID_TEXTCTRL4, wxEmptyString, wxPoint(128,37), wxSize(286,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl4->Disable();
    StaticText10 = new wxStaticText(Panel3, ID_STATICTEXT10, _("Card (148x148)"), wxPoint(24,42), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    TextCtrl5 = new wxTextCtrl(Panel3, ID_TEXTCTRL5, wxEmptyString, wxPoint(128,69), wxSize(286,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl5->Disable();
    Button5 = new wxButton(Panel3, ID_BUTTON5, _(". . ."), wxPoint(424,69), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    StaticText11 = new wxStaticText(Panel3, ID_STATICTEXT11, _("Logo (246x246)"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    TextCtrl6 = new wxTextCtrl(Panel3, ID_TEXTCTRL6, wxEmptyString, wxPoint(128,102), wxSize(286,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl6->Disable();
    Button6 = new wxButton(Panel3, ID_BUTTON6, _(". . ."), wxPoint(424,102), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    StaticText12 = new wxStaticText(Panel3, ID_STATICTEXT12, _("Poster (1368x769)"), wxPoint(24,104), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    StaticText14 = new wxStaticText(Panel3, ID_STATICTEXT14, _("Imagem"), wxPoint(16,8), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    StaticText14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
    Panel4 = new wxPanel(Panel1, ID_PANEL4, wxPoint(536,176), wxSize(488,224), wxBORDER_DOUBLE|wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    Panel4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUBAR));
    TextCtrl9 = new wxTextCtrl(Panel4, ID_TEXTCTRL9, wxEmptyString, wxPoint(64,42), wxSize(352,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    TextCtrl9->Disable();
    StaticText8 = new wxStaticText(Panel4, ID_STATICTEXT8, _("Voz"), wxPoint(24,45), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    Button8 = new wxButton(Panel4, ID_BUTTON8, _(". . ."), wxPoint(424,42), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    StaticText13 = new wxStaticText(Panel4, ID_STATICTEXT13, _("Audio"), wxPoint(16,8), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    StaticText13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
    TextCtrl10 = new wxTextCtrl(Panel4, ID_TEXTCTRL10, wxEmptyString, wxPoint(152,114), wxSize(266,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    TextCtrl10->Disable();
    StaticText15 = new wxStaticText(Panel4, ID_STATICTEXT15, _("Instrumentos"), wxPoint(24,88), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    Button9 = new wxButton(Panel4, ID_BUTTON9, _(". . ."), wxPoint(424,114), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Choice2 = new wxChoice(Panel4, ID_CHOICE2, wxPoint(24,114), wxSize(118,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    Choice2->SetSelection( Choice2->Append(_("Guitarra 1")) );
    Choice2->Append(_("Guitarra 2"));
    Choice2->Append(_("Baixo"));
    Choice2->Append(_("Bateria"));
    Choice2->Append(_("Sanfona"));
    Choice2->Append(_("Zabumba"));
    Choice2->Append(_("Triangulo"));
    Choice2->Append(_("Sax"));
    Choice2->Append(_("Violao"));
    Choice2->Append(_("Cavaquinho"));
    Choice2->Append(_("Ukulele"));
    Choice2->Append(_("Trompete"));
    Choice2->Append(_("Sampler"));
    Choice2->Append(_("Piano"));
    Choice2->Append(_("Teclado"));
    TextCtrl11 = new wxTextCtrl(Panel4, ID_TEXTCTRL11, wxEmptyString, wxPoint(152,146), wxSize(266,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
    TextCtrl11->Disable();
    Choice3 = new wxChoice(Panel4, ID_CHOICE3, wxPoint(24,146), wxSize(118,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    Choice3->Append(_("Guitarra 1"));
    Choice3->Append(_("Guitarra 2"));
    Choice3->SetSelection( Choice3->Append(_("Baixo")) );
    Choice3->Append(_("Bateria"));
    Choice3->Append(_("Sanfona"));
    Choice3->Append(_("Zabumba"));
    Choice3->Append(_("Triangulo"));
    Choice3->Append(_("Sax"));
    Choice3->Append(_("Violao"));
    Choice3->Append(_("Cavaquinho"));
    Choice3->Append(_("Ukulele"));
    Choice3->Append(_("Trompete"));
    Choice3->Append(_("Sampler"));
    Choice3->Append(_("Piano"));
    Choice3->Append(_("Teclado"));
    Choice4 = new wxChoice(Panel4, ID_CHOICE4, wxPoint(24,178), wxSize(118,23), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    Choice4->Append(_("Guitarra 1"));
    Choice4->Append(_("Guitarra 2"));
    Choice4->Append(_("Baixo"));
    Choice4->SetSelection( Choice4->Append(_("Bateria")) );
    Choice4->Append(_("Sanfona"));
    Choice4->Append(_("Zabumba"));
    Choice4->Append(_("Triangulo"));
    Choice4->Append(_("Sax"));
    Choice4->Append(_("Violao"));
    Choice4->Append(_("Cavaquinho"));
    Choice4->Append(_("Ukulele"));
    Choice4->Append(_("Trompete"));
    Choice4->Append(_("Sampler"));
    Choice4->Append(_("Piano"));
    Choice4->Append(_("Teclado"));
    TextCtrl12 = new wxTextCtrl(Panel4, ID_TEXTCTRL12, wxEmptyString, wxPoint(152,178), wxSize(266,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    TextCtrl12->Disable();
    Button11 = new wxButton(Panel4, ID_BUTTON11, _(". . ."), wxPoint(424,146), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button12 = new wxButton(Panel4, ID_BUTTON12, _(". . ."), wxPoint(424,178), wxSize(38,24), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Carregar Backup\tF2"), _("Carregar Backup"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&Arquivo"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("Sobre\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Ajuda"));
    SetMenuBar(MenuBar1);
    FileDialog1 = new wxFileDialog(this, _("Selecione um arquivo de audio"), wxEmptyString, wxEmptyString, _("*.ogg"), wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    FileDialog2 = new wxFileDialog(this, _("Selecione um arquivo de imagem"), wxEmptyString, wxEmptyString, _("*.png"), wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    DirDialog1 = new wxDirDialog(this, _("Select directory"), wxEmptyString, wxDD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxDirDialog"));
    Center();

    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton3Click1);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton2Click2);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton7Click1);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton10Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton6Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton8Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton9Click);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton11Click);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UGS_editorFrame::OnButton12Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&UGS_editorFrame::OnBackup);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&UGS_editorFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&UGS_editorFrame::OnClose);
    //*)

    std::ifstream file("exports/brute-sequence.txt");
    if(file.is_open())
    {
        StaticText17->SetLabel("  [    Presente    ]  ");
        StaticText17->SetForegroundColour(wxColor(0,100,0));
    }
    file.close();
}




UGS_editorFrame::~UGS_editorFrame()
{
    //(*Destroy(UGS_editorFrame)
    //*)
}


bool copy_file(std::string source, std::string target)
{
    FILE* file_source = fopen(source.c_str(), "rb");
    if(file_source == NULL){ return false; }

    FILE* file_target = fopen(target.c_str(), "wb");
    if(file_target == NULL){ return false; }

    int c = 0;
    while((c = fgetc(file_source)) != EOF)
    {
        fputc(c, file_target);
    }

    fclose(file_source);
    fclose(file_target);

    return true;
}


void UGS_editorFrame::OnBackup(wxCommandEvent& event)
{
    copy_file("exports/brute-sequence.txt.backup", "exports/brute-sequence.txt");

    std::ifstream file("exports/brute-sequence.txt");
    if(file.is_open())
    {
        StaticText17->SetLabel("  [    Presente    ]  ");
        StaticText17->SetForegroundColour(wxColor(0,100,0));
    }
    file.close();
}

void UGS_editorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void UGS_editorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = "       Autor: Marco Aurelio Lima \nhttps://github.com/marcoaurelima";
    wxMessageBox(msg, _("Sobre"));
}

void corrPath(std::string& path)
{
    for(unsigned i=0;i<path.size();i++)
    {
        if(path[i] == '\\')
        {
            path[i] = '/';
        }
    }

}

std::string shortenPath(std::string path, int finalSize)
{
    int half = (finalSize/3)-1;

    std::stringstream ss;
    ss << path.substr(0, half) << "..." << path.substr(path.size()-(half*2)-1, path.size()-1);

    return ss.str();
}


std::string secToMin(int time)
{
    std::string min = "00" + std::to_string(time/60);
    std::string sec = "00" + std::to_string(time%60);

    return (min.substr(min.size()-2, min.size()-1) + ":" + sec.substr(sec.size()-2, sec.size()-1));
}

void UGS_editorFrame::OnButton1Click(wxCommandEvent& event)
{
    auto res = FileDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl3->SetValue(shortenPath(path, 46));
    pathAudio = path;

    sf::Music music;
    bool opened = music.openFromFile(path);
    if(!opened){ wxMessageBox(wxT("ERRO"), wxT("Não foi possível abrir o arquivo."), wxICON_ERROR); return;}

    audioTotalTime = secToMin(music.getDuration().asSeconds());
}

void UGS_editorFrame::OnButton4Click(wxCommandEvent& event)
{
    auto res = FileDialog2->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog2->GetPath().ToStdString();
    corrPath(path);
    TextCtrl4->SetValue(shortenPath(path, 46));
    pathCard = path;
}

void UGS_editorFrame::OnButton5Click(wxCommandEvent& event)
{
    auto res = FileDialog2->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog2->GetPath().ToStdString();
    corrPath(path);
    TextCtrl5->SetValue(shortenPath(path, 46));
    pathLogo = path;
}

void UGS_editorFrame::OnButton6Click(wxCommandEvent& event)
{
    auto res = FileDialog2->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog2->GetPath().ToStdString();
    corrPath(path);
    TextCtrl6->SetValue(shortenPath(path, 46));
    pathPoster = path;
}


void UGS_editorFrame::OnButton2Click2(wxCommandEvent& event)
{
    // Boquear edição se os campos estão faltando
    bool lock = TextCtrl1->IsEmpty() ||
                TextCtrl2->IsEmpty() ||
                TextCtrl3->IsEmpty() ||
                Choice1->GetSelection() < 0;
    if(lock){ wxMessageBox("Preencha todos os campos.", "Alerta"); return; }

    std::string artista = TextCtrl1->GetValue().Upper().ToStdString();
    std::string musica = TextCtrl2->GetValue().Upper().ToStdString();
    std::string instrumento = Choice1->GetString(Choice1->GetCurrentSelection()).Upper().ToStdString();

    std::string trackInfo = "ARTISTA: " + artista + "\nMUSICA: "  + musica + "\nINSTRUMENTO: " + instrumento;
    std::string trackPath = pathAudio;

    SequenceEditor seqEdit(trackInfo, trackPath);
    bool res = seqEdit.open();

    if(!res){ return; }

    std::ifstream file("exports/brute-sequence.txt");
    if(file.is_open())
    {
        StaticText17->SetLabel("  [    Presente    ]  ");
        StaticText17->SetForegroundColour(wxColor(0,100,0));
    }
    file.close();

}

int getRandInt(int range)
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0,range);

    return dist6(rng);
}

std::vector<int> genChord_old(int chordWeight, int dificulty)
{
    std::vector<int> chords;
    int chordSize = chordWeight;
    int colorRange = 2;
    if(dificulty == 0) // FÁCIL
    {
        if(chordSize > 2){ chordSize = 2; }
        colorRange = 2;
    } else if(dificulty == 1) // MÉDIO
    {
        if(chordSize > 4){ chordSize = 4; }
        colorRange = 3;
    } else if(dificulty == 2) // DIFÍCIL
    {
        colorRange = 4;
    }

    // Gerar os acordes
    while(true)
    {
        if(chords.size() == (unsigned)chordSize){ break; }

        int tileColor = getRandInt(colorRange);

        bool exists = false;
        for(auto& i : chords)
        {
            if(i == tileColor){ exists = true; }
        }

        if(!exists)
        chords.push_back(tileColor);
    }
    return chords;
}

std::vector<int> genChord(int chordWeight, int dificulty)
{
    std::vector<int> chords;
    int chordSize = chordWeight;
    int qtdUsedColors = 2;

    if(dificulty == 0) // FÁCIL
    {
        if(chordWeight > 2){ chordSize = 2; }
        qtdUsedColors = 3;
    } else if(dificulty == 1) // MÉDIO
    {
        if(chordWeight > 3){ chordSize = 3; }
        qtdUsedColors = 4;
    } else if(dificulty == 2) // DIFÍCIL
    {
        if(chordWeight > 3){ chordSize = 3; }
        qtdUsedColors = 5;
    }

    std::vector<int> colors;
    // Gerar um vetor de cores de acordo com o tamanho especificado
    for(int i=0;i<qtdUsedColors;i++){ colors.push_back(i); }

    std::random_shuffle(colors.begin(), colors.end());

    for(int i=0;i<chordSize;i++)
    {
        chords.push_back(colors[i]);
    }

    return chords;
}

void UGS_editorFrame::OnButton3Click1(wxCommandEvent& event)
{
    if(!enviromentProductionCreated)
    {
        wxMessageBox(wxT("Ambiente de produção não foi criado ainda."), wxT("Impossível exportar")); return;
    }
    // Boquear exportação se arquivo de sequencia brura estiver faltando
    if(StaticText17->GetLabel() != "  [    Presente    ]  ")
    {
        wxMessageBox(wxT("Nao há arquivo de sequência bruta ainda."), wxT("Impossível exportar")); return;
    }

    // Boquear exportação se os campos estão faltando
    bool lock = TextCtrl1->IsEmpty() ||
                TextCtrl2->IsEmpty() ||
                TextCtrl3->IsEmpty() ||
                TextCtrl4->IsEmpty() ||
                TextCtrl5->IsEmpty() ||
                TextCtrl6->IsEmpty() ||
                StaticText17->GetLabel() != "  [    Presente    ]  " ||
                TextCtrl8->IsEmpty() ||
                TextCtrl9->IsEmpty() ||
                TextCtrl10->IsEmpty() ||
                TextCtrl11->IsEmpty() ||
                TextCtrl12->IsEmpty() ||
                Choice1->GetSelection() < 0;
    if(lock){ wxMessageBox(wxT("Preencha todos os campos."),  wxT("Impossível exportar")); return; }

    if(TextCtrl8->IsEmpty()){ wxMessageBox("Defina uma pasta de saida.", "Erro", wxICON_ERROR); return; }

    FILE* file = fopen("exports/brute-sequence.txt", "r");
    if(file == NULL) { wxMessageBox("Arquivo de sequencia bruta inexistente.", "Erro", wxICON_ERROR); return; }

    Gauge1->SetValue(10);

    std::vector<float> seqTime;
    std::vector<int> seqWeight;
    std::vector<float> seqBend;

    float a = 0.0;
    float c = 0.0;
    int b = 0;

    Gauge1->SetValue(30);

    while(fscanf(file, "%f %d %f", &a, &b, &c) != EOF)
    {
        seqTime.push_back(a);
        seqWeight.push_back(b);
        seqBend.push_back(c);
    }
    fclose(file);

    std::stringstream sequenceEasy;
    std::stringstream sequenceMedium;
    std::stringstream sequenceHard;

    // Produção da faixa fácil
    for(unsigned i=0;i<seqTime.size();i++)
    {
        auto chordsEasy = genChord(seqWeight[i], 0);
        auto chordsMedium = genChord(seqWeight[i], 1);
        auto chordsHard = genChord(seqWeight[i], 2);
        for(unsigned j=0;j<chordsEasy.size();j++)
        {
            sequenceEasy << seqTime[i] << " " << chordsEasy[j] << " " << seqBend[i] << "\n";
        }
        for(unsigned j=0;j<chordsMedium.size();j++)
        {
            sequenceMedium << seqTime[i] << " " << chordsMedium[j] << " " << seqBend[i] << "\n";
        }
        for(unsigned j=0;j<chordsHard.size();j++)
        {
            sequenceHard << seqTime[i] << " " << chordsHard[j] << " " << seqBend[i] << "\n";
        }
    }

    Gauge1->SetValue(50);

    // SEQUENCIA PARA A PASTA DE EXPORTS
    std::string instrument = std::to_string(Choice1->GetCurrentSelection());

    std::string pathEasy = "exports/0/" + instrument + ".txt";
    file = fopen(pathEasy.c_str(), "w");
    fputs(sequenceEasy.str().c_str(), file);
    fclose(file);

    std::string pathMedium = "exports/1/" + instrument + ".txt";
    file = fopen(pathMedium.c_str(), "w");
    fputs(sequenceMedium.str().c_str(), file);
    fclose(file);

    std::string pathHard = "exports/2/" + instrument + ".txt";
    file = fopen(pathHard.c_str(), "w");
    fputs(sequenceHard.str().c_str(), file);
    fclose(file);

    Gauge1->SetValue(70);

    // Fazer a transferencia de arquivos
    // IMAGEM
    std::stringstream ss;
    ss.str("");
    copy_file(pathCard, pathOutput + "/picture/card.png");

    ss.str("");
    copy_file(pathLogo, pathOutput + "/picture/logo.png");

    ss.str("");
    copy_file(pathPoster, pathOutput + "/picture/poster.png");

    // AUDIO
    ss.str("");
    copy_file(pathAudioVoice, pathOutput + "/audio/background.ogg");

    ss.str("");
    copy_file(pathAudioInstrument1, pathOutput + "/audio/" + std::to_string(Choice2->GetCurrentSelection()) + ".ogg");
    copy_file(pathAudioInstrument2, pathOutput + "/audio/" + std::to_string(Choice3->GetCurrentSelection()) + ".ogg");
    copy_file(pathAudioInstrument3, pathOutput + "/audio/" + std::to_string(Choice4->GetCurrentSelection()) + ".ogg");

    Gauge1->SetValue(90);


    // Inserir informação de intrumento
    std::ifstream ifs;
    ifs.open(pathOutput + "/info/instrument1.txt");
    if(ifs.is_open())
    {
        int code = Choice2->GetCurrentSelection();
        std::string instr = Choice2->GetString(code).ToStdString();

        if(code != -1)
        {
            std::ofstream ofs;
            ofs.open(pathOutput + "/info/instrument1.txt");
            ofs << code << " " << instr;
            ofs.close();
        }
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument2.txt");
    if(ifs.is_open())
    {
        int code = Choice3->GetCurrentSelection();
        std::string instr = Choice3->GetString(code).ToStdString();

        if(code != -1)
        {
            std::ofstream ofs;
            ofs.open(pathOutput + "/info/instrument2.txt");
            ofs << code << " " << instr;
            ofs.close();
        }
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument3.txt");
    if(ifs.is_open())
    {
        int code = Choice4->GetCurrentSelection();
        std::string instr = Choice4->GetString(code).ToStdString();

        if(code != -1)
        {
            std::ofstream ofs;
            ofs.open(pathOutput + "/info/instrument3.txt");
            ofs << code << " " << instr;
            ofs.close();
        }
    }
    ifs.close();



    // SEQUENCIA DO INSTRUMENTO
    ss.str("");
    copy_file(pathEasy, pathOutput + "/sequence/0/" + instrument + ".txt");

    ss.str("");
    copy_file(pathMedium, pathOutput + "/sequence/1/" + instrument + ".txt");

    ss.str("");
    copy_file(pathHard, pathOutput + "/sequence/2/" + instrument + ".txt");

    Gauge1->SetValue(100);

    wxMessageBox(wxT("Finalizado!"), wxT("Feedback"));
    Gauge1->SetValue(0);
}



void UGS_editorFrame::OnButton7Click1(wxCommandEvent& event)
{
    std::stringstream instructions;
    instructions << "1. Escolha a pasta que recebera a exportacao.\n" <<
                    "2. Esta pasta tem que estar dentro de /songs,\n" <<
                    "    (diretorio do jogo que guarda as musicas).\n" <<
                    "3. Pode-se usar uma pasta ja existente.\n" <<
                    "   Se nao houver a pasta ainda, crie-a.\n";

    wxMessageBox(instructions.str(), "INSTRUCOES");

    auto res = DirDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    enviromentProductionCreated = false;

    // Apaga todas as informações de path antigas se houver
    // (path relativos as imagens e audio intrumento background)
    TextCtrl4->Clear();
    TextCtrl5->Clear();
    TextCtrl6->Clear();
    TextCtrl9->Clear();
    TextCtrl10->Clear();
    TextCtrl11->Clear();
    TextCtrl12->Clear();
    pathAudioVoice = "";
    pathAudioInstrument1 = "";
    pathAudioInstrument2 = "";
    pathAudioInstrument3 = "";
    pathCard = "";
    pathLogo = "";
    pathPoster = "";

    std::string path = DirDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl8->SetValue(shortenPath(path, 56));
    pathOutput = path;


    // Verificar se ja exitem arquivos de imagem nas pastas
    // se existir, vai setar o path automaticamente nos campos.
    std::ifstream ifs;
    ifs.open(pathOutput + "/picture/card.png");
    if(ifs.is_open())
    {
        TextCtrl4->SetValue(shortenPath((pathOutput + "/picture/card.png"), 46));
        pathCard = (pathOutput + "/picture/card.png");
    }
    ifs.close();

    ifs.open(pathOutput + "/picture/logo.png");
    if(ifs.is_open())
    {
        TextCtrl5->SetValue(shortenPath((pathOutput + "/picture/logo.png"), 46));
        pathLogo = (pathOutput + "/picture/logo.png");
    }
    ifs.close();

    ifs.open(pathOutput + "/picture/poster.png");
    if(ifs.is_open())
    {
        TextCtrl6->SetValue(shortenPath((pathOutput + "/picture/poster.png"), 46));
        pathPoster = (pathOutput + "/picture/poster.png");
    }
    ifs.close();

    FILE* file = NULL;

    // Verificar quais instrumentos existem na pasta
    // Modificar os Choices
    file = fopen((pathOutput + "/info/instrument1.txt").c_str(), "r");
    if(file != NULL)
    {
        int n = -1;
        fscanf(file, "%d ", &n);
        Choice2->SetSelection(n);
    }
    fclose(file);

    file = fopen((pathOutput + "/info/instrument2.txt").c_str(), "r");
    if(file != NULL)
    {
        int n = -1;
        fscanf(file, "%d ", &n);
        Choice3->SetSelection(n);
    }
    fclose(file);

    file = fopen((pathOutput + "/info/instrument3.txt").c_str(), "r");
    if(file != NULL)
    {
        int n = -1;
        fscanf(file, "%d ", &n);
        Choice4->SetSelection(n);
    }
    fclose(file);

    // Verificar se há informações de artistas e musica disponíveis
    file = fopen((pathOutput + "/info/about.txt").c_str(), "r");
    if(file != NULL)
    {
        std::stringstream ss;
        char buffer[50];
        fscanf(file, "%s", buffer);
        ss << buffer;
        TextCtrl1->SetValue(ss.str());

        fscanf(file, "%s", buffer);
        ss << buffer;
        TextCtrl2->SetValue(ss.str());
    }
    fclose(file);

    // Verificar se existe a faixa da musica completa disponivel
    ifs.open(pathOutput + "/song.ogg");
    if(ifs.is_open())
    {
        TextCtrl3->SetValue(shortenPath((pathOutput + "/song.ogg"), 45));
        pathAudio = (pathOutput + "/song.ogg");
    }
    ifs.close();

    // Verificar se ja exitem arquivos de audio nas pastas
    // se existir, vai setar o path automaticamente nos campos.
    ifs.open(pathOutput + "/audio/background.ogg");
    if(ifs.is_open())
    {
        TextCtrl9->SetValue(shortenPath((pathOutput + "/audio/background.ogg"), 55));
        pathAudioVoice = (pathOutput + "/audio/background.ogg");
    }
    ifs.close();

    ifs.open(pathOutput + "/audio/" + std::to_string(Choice2->GetCurrentSelection()) + ".ogg");
    if(ifs.is_open())
    {
        TextCtrl10->SetValue(shortenPath((pathOutput + "/audio/" + std::to_string(Choice2->GetCurrentSelection()) + ".ogg"), 44));
        pathAudioInstrument1 = (pathOutput + "/audio/" + std::to_string(Choice2->GetCurrentSelection()) + ".ogg");
    }
    ifs.close();

    ifs.open(pathOutput + "/audio/" + std::to_string(Choice3->GetCurrentSelection()) + ".ogg");
    if(ifs.is_open())
    {
        TextCtrl11->SetValue(shortenPath((pathOutput + "/audio/" + std::to_string(Choice3->GetCurrentSelection()) + ".ogg"), 44));
        pathAudioInstrument2 = (pathOutput + "/audio/" + std::to_string(Choice3->GetCurrentSelection()) + ".ogg");
    }
    ifs.close();

    ifs.open(pathOutput + "/audio/" + std::to_string(Choice4->GetCurrentSelection()) + ".ogg");
    if(ifs.is_open())
    {
        TextCtrl12->SetValue(shortenPath((pathOutput + "/audio/" + std::to_string(Choice4->GetCurrentSelection()) + ".ogg"), 44));
        pathAudioInstrument3 = (pathOutput + "/audio/" + std::to_string(Choice4->GetCurrentSelection()) + ".ogg");
    }
    ifs.close();

    // Verificar se já existe um ambiente de produção válido
    if(!TextCtrl4->IsEmpty() &&
       !TextCtrl5->IsEmpty() &&
       !TextCtrl6->IsEmpty() &&
       !TextCtrl9->IsEmpty() &&
       !TextCtrl10->IsEmpty() &&
       !TextCtrl11->IsEmpty() &&
       !TextCtrl12->IsEmpty()){
        wxMessageBox("Ambiente de producao valido encontrado!", "");
        Button10->Enable(false);
       } else
       {
           Button10->Enable(true);
       }

}


void UGS_editorFrame::OnButton8Click(wxCommandEvent& event)
{
    auto res = FileDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl9->SetValue(shortenPath(path, 55));
    pathAudioVoice = path;

    sf::Music music;
    bool opened = music.openFromFile(path);
    if(!opened){ wxMessageBox(wxT("ERRO"), wxT("Não foi possível abrir o arquivo."), wxICON_ERROR); return;}
}

void UGS_editorFrame::OnButton9Click(wxCommandEvent& event)
{
    auto res = FileDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl10->SetValue(shortenPath(path, 44));
    pathAudioInstrument1 = path;

    sf::Music music;
    bool opened = music.openFromFile(path);
    if(!opened){ wxMessageBox(wxT("ERRO"), wxT("Não foi possível abrir o arquivo."), wxICON_ERROR); return;}
}


void UGS_editorFrame::OnClose(wxCloseEvent& event)
{
    // Fazer backup de segurança da ultima edicao
    copy_file("exports/brute-sequence.txt", "exports/brute-sequence.txt.backup");
    remove("exports/brute-sequence.txt");

    Destroy();
}


void UGS_editorFrame::OnButton10Click(wxCommandEvent& event)
{
    // Verificar se todos os campos necessarios estão preenchidos
    if(TextCtrl1->IsEmpty() ||
       TextCtrl1->IsEmpty() ||
       Choice1->GetCurrentSelection() == -1 ||
       TextCtrl3->IsEmpty() ||
       StaticText17->GetLabel() == "  [    Ausente    ]  " ||
       TextCtrl8->IsEmpty()
       ){
        wxMessageBox(wxT("Favor preecha todos os campos da parte de \"Informações\""), wxT("Atenção"));
        return;
       }


    // Verificar se a pasta contêm as subpastas que irão receber a exportação
    // Se não houver, vai ser criado.
    mkdir((pathOutput + "/sequence").c_str());
    mkdir((pathOutput + "/sequence/0").c_str());
    mkdir((pathOutput + "/sequence/1").c_str());
    mkdir((pathOutput + "/sequence/2").c_str());

    std::ofstream ofs;
    ofs.open(pathOutput + "/sequence/speeds.txt");
    ofs << "6 8 10";
    ofs.close();

    mkdir((pathOutput + "/info").c_str());
    // Geração de arquivos que ainda não existem
    std::ifstream ifs;
    ifs.open(pathOutput + "/info/about.txt");
    if(!ifs.is_open())
    {
        if(TextCtrl1->IsEmpty() || TextCtrl2->IsEmpty())
        {
            wxMessageBox(wxT("Pro favor preencha os campos de Artista e Música"), "Aviso");
            return;
        }
        std::ofstream ofs;
        ofs.open(pathOutput + "/info/about.txt");
        ofs << TextCtrl1->GetValue().Upper().ToStdString() << "\n"
             << TextCtrl2->GetValue().Upper().ToStdString() << "\n"
             << audioTotalTime << "\n"
             << "111\n";
        ofs.close();
    } else
    {
        std::string buffer;
        std::getline(ifs, buffer);
        TextCtrl1->SetValue(buffer);

        std::getline(ifs, buffer);
        TextCtrl2->SetValue(buffer);
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument1.txt");
    if(!ifs.is_open())
    {
        std::ofstream ofs;
        ofs.open(pathOutput + "/info/instrument1.txt");
        ofs << "15 --";
        ofs.close();
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument2.txt");
    if(!ifs.is_open())
    {
        std::ofstream ofs;
        ofs.open(pathOutput + "/info/instrument2.txt");
        ofs << "15 --";
        ofs.close();
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument3.txt");
    if(!ifs.is_open())
    {
        std::ofstream ofs;
        ofs.open(pathOutput + "/info/instrument3.txt");
        ofs << "15 --";
        ofs.close();
    }
    ifs.close();

    ifs.open(pathOutput + "/info/instrument4.txt");
    if(!ifs.is_open())
    {
        std::ofstream ofs;
        ofs.open(pathOutput + "/info/instrument4.txt");
        ofs << "15 --";
        ofs.close();
    }

    mkdir((pathOutput + "/picture").c_str());
    mkdir((pathOutput + "/audio").c_str());

    copy_file(pathAudio, pathOutput + "/song.ogg");

    enviromentProductionCreated = true;
    wxMessageBox(wxT("Ambiente de produção criado com sucesso!"), wxT("Informação"));
}


void UGS_editorFrame::OnButton11Click(wxCommandEvent& event)
{
    auto res = FileDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl11->SetValue(shortenPath(path, 44));
    pathAudioInstrument2 = path;

    sf::Music music;
    bool opened = music.openFromFile(path);
    if(!opened){ wxMessageBox(wxT("ERRO"), wxT("Não foi possível abrir o arquivo."), wxICON_ERROR); return;}
}

void UGS_editorFrame::OnButton12Click(wxCommandEvent& event)
{
    auto res = FileDialog1->ShowModal();
    if(res == wxID_CANCEL)
        return;

    std::string path = FileDialog1->GetPath().ToStdString();
    corrPath(path);
    TextCtrl12->SetValue(shortenPath(path, 44));
    pathAudioInstrument3 = path;

    sf::Music music;
    bool opened = music.openFromFile(path);
    if(!opened){ wxMessageBox(wxT("ERRO"), wxT("Não foi possível abrir o arquivo."), wxICON_ERROR); return;}
}
