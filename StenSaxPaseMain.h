/***************************************************************
 * Name:      StenSaxPaseMain.h
 * Purpose:   Defines Application Frame
 * Author:    Martin Östman (martin.ostman@emea.sykes.com)
 * Created:   2010-07-27
 * Copyright: Martin Östman (www.sykes.com)
 * License:
 **************************************************************/

#ifndef STENSAXPASEMAIN_H
#define STENSAXPASEMAIN_H

//(*Headers(StenSaxPaseFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class StenSaxPaseFrame: public wxFrame
{
    public:

        StenSaxPaseFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~StenSaxPaseFrame();

    private:

        //(*Handlers(StenSaxPaseFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(StenSaxPaseFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(StenSaxPaseFrame)
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxButton* Button2;
        wxButton* Button3;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // STENSAXPASEMAIN_H
