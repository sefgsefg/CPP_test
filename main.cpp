#include "calculator.h"
#include <wx/wx.h>

class CalculatorFrame : public MyFrame1
{
public:
    CalculatorFrame(wxWindow* parent = nullptr)
        : MyFrame1(parent)
    {
        m_button1->Bind(wxEVT_BUTTON, &CalculatorFrame::On7Clicked, this);//7
        m_button2->Bind(wxEVT_BUTTON, &CalculatorFrame::On8Clicked, this);//8
        m_button3->Bind(wxEVT_BUTTON, &CalculatorFrame::On9Clicked, this);//9

        m_button9->Bind(wxEVT_BUTTON, &CalculatorFrame::On4Clicked, this);//4
        m_button10->Bind(wxEVT_BUTTON, &CalculatorFrame::On5Clicked, this);//5
        m_button11->Bind(wxEVT_BUTTON, &CalculatorFrame::On6Clicked, this);//6

        m_button13->Bind(wxEVT_BUTTON, &CalculatorFrame::On1Clicked, this);//1
        m_button14->Bind(wxEVT_BUTTON, &CalculatorFrame::On2Clicked, this);//2
        m_button15->Bind(wxEVT_BUTTON, &CalculatorFrame::On3Clicked, this);//3

        m_button18->Bind(wxEVT_BUTTON, &CalculatorFrame::On0Clicked, this);//0

        // 加法
        m_button4->Bind(wxEVT_BUTTON, &CalculatorFrame::OnAddClicked, this);

        // "="
        m_button19->Bind(wxEVT_BUTTON, &CalculatorFrame::OnEqualClicked, this);

        // AC
        m_button17->Bind(wxEVT_BUTTON, &CalculatorFrame::OnClearClicked, this);
    }

private:
    double firstOperand = 0;
    bool isAddMode = false;

    //數字事件
    void On0Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("0"); }
    void On1Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("1"); }
    void On2Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("2"); }
    void On3Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("3"); }
    void On4Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("4"); }
    void On5Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("5"); }
    void On6Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("6"); }
    void On7Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("7"); }
    void On8Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("8"); }
    void On9Clicked(wxCommandEvent&) { m_textCtrl1->AppendText("9"); }

    //加法
    void OnAddClicked(wxCommandEvent&)
    {
        m_textCtrl1->GetValue().ToDouble(&firstOperand);
        isAddMode = true;
        m_textCtrl1->Clear();
    }

    //=
    void OnEqualClicked(wxCommandEvent& event)
    {
        if (!isAddMode)
            return;

        double secondOperand = 0;
        m_textCtrl1->GetValue().ToDouble(&secondOperand);

        double result = firstOperand + secondOperand;

        m_textCtrl1->SetValue(wxString::Format("%g", result));
        isAddMode = false;
    }

    //清空
    void OnClearClicked(wxCommandEvent& event)
    {
        m_textCtrl1->Clear();
        firstOperand = 0;
        isAddMode = false;
    }
};

//APP 入口

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        CalculatorFrame* frame = new CalculatorFrame(nullptr);
        frame->SetTitle("Calculator");
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
