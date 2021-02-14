/***************************************************************
 * Name:      StenSaxPaseApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Martin �stman (martin.ostman@emea.sykes.com)
 * Created:   2010-07-27
 * Copyright: Martin �stman (www.sykes.com)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "StenSaxPaseApp.h"

//(*AppHeaders
#include "StenSaxPaseMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(StenSaxPaseApp);

bool StenSaxPaseApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	StenSaxPaseFrame* Frame = new StenSaxPaseFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
