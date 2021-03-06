/***************************************************************
 * Name:      StenSaxPaseMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Martin  stman (martin.ostman@emea.sykes.com)
 * Created:   2010-07-27
 * Copyright: Martin  stman (www.sykes.com)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "StenSaxPaseMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(StenSaxPaseFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)
//#include <stdio.h>
#include <stdlib.h>
//#include <cstdlib> //Needed for random
//#include <ctime> //Needed for random
#include <time.h> //Needed for random

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

//(*IdInit(StenSaxPaseFrame)
const long StenSaxPaseFrame::ID_STATICTEXT1 = wxNewId();
const long StenSaxPaseFrame::ID_STATICTEXT2 = wxNewId();
const long StenSaxPaseFrame::ID_STATICTEXT3 = wxNewId();
const long StenSaxPaseFrame::ID_BUTTON1 = wxNewId();
const long StenSaxPaseFrame::ID_BUTTON2 = wxNewId();
const long StenSaxPaseFrame::ID_BUTTON3 = wxNewId();
const long StenSaxPaseFrame::ID_PANEL1 = wxNewId();
const long StenSaxPaseFrame::idMenuQuit = wxNewId();
const long StenSaxPaseFrame::idMenuAbout = wxNewId();
const long StenSaxPaseFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(StenSaxPaseFrame,wxFrame)
    //(*EventTable(StenSaxPaseFrame)
    //*)
END_EVENT_TABLE()

StenSaxPaseFrame::StenSaxPaseFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(StenSaxPaseFrame)
    wxStaticBoxSizer* StaticBoxSizer2;
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxStaticBoxSizer* StaticBoxSizer3;
    wxGridSizer* GridSizer1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxStaticBoxSizer* StaticBoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    GridSizer1 = new wxGridSizer(1, 1, 0, 0);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("You"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, wxEmptyString, wxDefaultPosition, wxSize(97,20), 0, _T("ID_STATICTEXT1"));
    StaticBoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, _("Computer"));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, wxEmptyString, wxDefaultPosition, wxSize(97,20), 0, _T("ID_STATICTEXT2"));
    StaticBoxSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(StaticBoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, Panel1, wxEmptyString);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Make your choice"), wxDefaultPosition, wxSize(228,37), 0, _T("ID_STATICTEXT3"));
    StaticBoxSizer3->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(StaticBoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Stone"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Sciccors"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Bag"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(Panel1);
    FlexGridSizer1->SetSizeHints(Panel1);
    GridSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(GridSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    GridSizer1->Fit(this);
    GridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&StenSaxPaseFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&StenSaxPaseFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&StenSaxPaseFrame::OnButton3Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&StenSaxPaseFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&StenSaxPaseFrame::OnAbout);
    //*)
}

wxString SlumpValFunc()
{
    int nSecret;
    wxString strSecret;

    /* initialize random seed: */
    //srand( time(0) );

    /* generate secret number: */
    nSecret = (rand() % 3) + 1;

    //strSecret << nSecret;
    strSecret = wxString::Format(wxT("%i"),nSecret);

    return strSecret;
}

wxString ValFunc(wxString strVal)
{
    int nVal;
    wxString strAer;

    nVal = wxAtoi(strVal);

    if (nVal == 1)
    {
        strAer = _("Stone");
    }
    else if (nVal == 2)
    {
        strAer = _("Sciccors");
    }
    else if (nVal == 3)
    {
        strAer = _("Bag");
    }
    return strAer;
}

wxString VinstFunc(wxString strCPU, wxString strHum)
{
    int nCPU;
    int nHum;
    wxString strGameSatus;

    nCPU = wxAtoi(strCPU);
    nHum = wxAtoi(strHum);

    if (nCPU == nHum)
    {
        strGameSatus = _("Draw");
    }
    else if ( (nCPU == 1) && (nHum == 2) )
    {
        strGameSatus = _("Stone wins over Sciccors\nYou Loose");
    }
    else if ( (nCPU == 2) && (nHum == 1) )
    {
        strGameSatus = _("Stone wins over Sciccors\nYou Win");
    }
    else if ( (nCPU == 2) && (nHum == 3) )
    {
        strGameSatus = _("Sciccors wins over Bag\nYou Loose");
    }
    else if ( (nCPU == 3) && (nHum == 2) )
    {
        strGameSatus = _("Sciccors wins over Bag\nYou Win");
    }
    else if ( (nCPU == 3) && (nHum == 1) )
    {
        strGameSatus = _("Bag wins over Stone\nYou Loose");
    }
    else if ( (nCPU == 1) && (nHum == 3) )
    {
        strGameSatus = _("Bag wins over Stone\nYou Win");
    }
    return strGameSatus;
}

StenSaxPaseFrame::~StenSaxPaseFrame()
{
    //(*Destroy(StenSaxPaseFrame)
    //*)
}

void StenSaxPaseFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void StenSaxPaseFrame::OnAbout(wxCommandEvent& event)
{
    wxString strAuthor = wxString::FromUTF8("Martin Östman");
    wxString about = _("Rock paper scissors Game\nBy "+strAuthor);
    wxString msg = wxbuildinfo(long_f) + _("\n\n") + about;
    wxMessageBox(msg, _("About"));
}

void StenSaxPaseFrame::OnButton1Click(wxCommandEvent& event)
{
    wxString strDittVal = _("1");
    wxString strCPUVal = SlumpValFunc();
    StaticText1->SetLabel( ValFunc(strDittVal) );
    StaticText2->SetLabel( ValFunc(strCPUVal) );
    StaticText3->SetLabel( VinstFunc(strCPUVal,strDittVal));
    Layout();
}

void StenSaxPaseFrame::OnButton2Click(wxCommandEvent& event)
{
    wxString strDittVal = _("2");
    wxString strCPUVal = SlumpValFunc();
    StaticText1->SetLabel( ValFunc(strDittVal) );
    StaticText2->SetLabel( ValFunc(strCPUVal) );
    StaticText3->SetLabel( VinstFunc(strCPUVal,strDittVal));
    Layout();
}

void StenSaxPaseFrame::OnButton3Click(wxCommandEvent& event)
{
    wxString strDittVal = _("3");
    wxString strCPUVal = SlumpValFunc();
    StaticText1->SetLabel( ValFunc(strDittVal) );
    StaticText2->SetLabel( ValFunc(strCPUVal) );
    StaticText3->SetLabel( VinstFunc(strCPUVal,strDittVal));
    Layout();
}
