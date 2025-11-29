///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calculator.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	m_textCtrl1 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer1->Add(m_textCtrl1, 0, wxALL | wxEXPAND, 5);

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer(4, 4, 3, 3);

	m_button1 = new wxButton(this, wxID_ANY, _("7"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button1, 1, wxALL | wxEXPAND, 5);

	m_button2 = new wxButton(this, wxID_ANY, _("8"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button2, 1, wxALL | wxEXPAND, 5);

	m_button3 = new wxButton(this, wxID_ANY, _("9"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button3, 0, wxALL | wxEXPAND, 5);

	m_button4 = new wxButton(this, wxID_ANY, _("+"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button4, 0, wxALL | wxEXPAND, 5);

	m_button9 = new wxButton(this, wxID_ANY, _("4"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button9, 0, wxALL | wxEXPAND, 5);

	m_button10 = new wxButton(this, wxID_ANY, _("5"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button10, 0, wxALL | wxEXPAND, 5);

	m_button11 = new wxButton(this, wxID_ANY, _("6"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button11, 0, wxALL | wxEXPAND, 5);

	m_button12 = new wxButton(this, wxID_ANY, _("-"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button12, 0, wxALL | wxEXPAND, 5);

	m_button13 = new wxButton(this, wxID_ANY, _("1"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button13, 0, wxALL | wxEXPAND, 5);

	m_button14 = new wxButton(this, wxID_ANY, _("2"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button14, 0, wxALL | wxEXPAND, 5);

	m_button15 = new wxButton(this, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button15, 0, wxALL | wxEXPAND, 5);

	m_button16 = new wxButton(this, wxID_ANY, _("*"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button16, 0, wxALL | wxEXPAND, 5);

	m_button17 = new wxButton(this, wxID_ANY, _("AC"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button17, 0, wxALL | wxEXPAND, 5);

	m_button18 = new wxButton(this, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button18, 0, wxALL | wxEXPAND, 5);

	m_button19 = new wxButton(this, wxID_ANY, _("="), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button19, 0, wxALL | wxEXPAND, 5);

	m_button20 = new wxButton(this, wxID_ANY, _("/"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer1->Add(m_button20, 0, wxALL | wxEXPAND, 5);


	bSizer1->Add(gSizer1, 1, wxEXPAND, 5);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);
}

MyFrame1::~MyFrame1()
{
}
