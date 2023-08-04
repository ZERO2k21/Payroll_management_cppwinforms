#pragma once

namespace PayrollManagement {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ nameLabel;
        System::Windows::Forms::TextBox^ nameTextBox;
        System::Windows::Forms::Label^ salaryLabel;
        System::Windows::Forms::TextBox^ salaryTextBox;
        System::Windows::Forms::Button^ addButton;
        System::Windows::Forms::Button^ removeButton; // New button to remove employees
        System::Windows::Forms::ListBox^ employeesListBox;
        System::Windows::Forms::Button^ calculateTotalButton;
        System::Windows::Forms::Button^ calculateAverageButton;
        System::Windows::Forms::Label^ totalSalaryLabel;
        System::Windows::Forms::Label^ averageSalaryLabel;
        System::Windows::Forms::Label^ mobileLabel; // New label for mobile number
        System::Windows::Forms::TextBox^ mobileTextBox; // New text box for mobile number
        System::Windows::Forms::Label^ idLabel; // New label for employee ID
        System::Windows::Forms::TextBox^ idTextBox; // New text box for employee ID

        void InitializeComponent(void)
        {
            this->nameLabel = (gcnew System::Windows::Forms::Label());
            this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->salaryLabel = (gcnew System::Windows::Forms::Label());
            this->salaryTextBox = (gcnew System::Windows::Forms::TextBox());
            this->addButton = (gcnew System::Windows::Forms::Button());
            this->removeButton = (gcnew System::Windows::Forms::Button());
            this->employeesListBox = (gcnew System::Windows::Forms::ListBox());
            this->calculateTotalButton = (gcnew System::Windows::Forms::Button());
            this->calculateAverageButton = (gcnew System::Windows::Forms::Button());
            this->totalSalaryLabel = (gcnew System::Windows::Forms::Label());
            this->averageSalaryLabel = (gcnew System::Windows::Forms::Label());
            this->mobileLabel = (gcnew System::Windows::Forms::Label());
            this->mobileTextBox = (gcnew System::Windows::Forms::TextBox());
            this->idLabel = (gcnew System::Windows::Forms::Label());
            this->idTextBox = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // nameLabel
            // 
            this->nameLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->nameLabel->AutoSize = true;
            this->nameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->nameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameLabel->Location = System::Drawing::Point(108, 27);
            this->nameLabel->Name = L"nameLabel";
            this->nameLabel->Size = System::Drawing::Size(104, 37);
            this->nameLabel->TabIndex = 0;
            this->nameLabel->Text = L"Name:";
            // 
            // nameTextBox
            // 
            this->nameTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->nameTextBox->Location = System::Drawing::Point(221, 27);
            this->nameTextBox->Name = L"nameTextBox";
            this->nameTextBox->Size = System::Drawing::Size(349, 43);
            this->nameTextBox->TabIndex = 1;
            // 
            // salaryLabel
            // 
            this->salaryLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->salaryLabel->AutoSize = true;
            this->salaryLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->salaryLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->salaryLabel->Location = System::Drawing::Point(108, 73);
            this->salaryLabel->Name = L"salaryLabel";
            this->salaryLabel->Size = System::Drawing::Size(107, 37);
            this->salaryLabel->TabIndex = 2;
            this->salaryLabel->Text = L"Salary:";
            // 
            // salaryTextBox
            // 
            this->salaryTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->salaryTextBox->Location = System::Drawing::Point(221, 73);
            this->salaryTextBox->Name = L"salaryTextBox";
            this->salaryTextBox->Size = System::Drawing::Size(349, 43);
            this->salaryTextBox->TabIndex = 3;
            // 
            // addButton
            // 
            this->addButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->addButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->addButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->addButton->Location = System::Drawing::Point(221, 214);
            this->addButton->Name = L"addButton";
            this->addButton->Size = System::Drawing::Size(148, 46);
            this->addButton->TabIndex = 4;
            this->addButton->Text = L"Add Employee";
            this->addButton->UseVisualStyleBackColor = false;
            this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
            // 
            // removeButton
            // 
            this->removeButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->removeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->removeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->removeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->removeButton->Location = System::Drawing::Point(422, 214);
            this->removeButton->Name = L"removeButton";
            this->removeButton->Size = System::Drawing::Size(148, 46);
            this->removeButton->TabIndex = 5;
            this->removeButton->Text = L"Remove Employee";
            this->removeButton->UseVisualStyleBackColor = false;
            this->removeButton->Click += gcnew System::EventHandler(this, &MyForm::removeButton_Click);
            // 
            // employeesListBox
            // 
            this->employeesListBox->AllowDrop = true;
            this->employeesListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->employeesListBox->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->employeesListBox->HorizontalScrollbar = true;
            this->employeesListBox->ItemHeight = 30;
            this->employeesListBox->Location = System::Drawing::Point(596, 12);
            this->employeesListBox->Name = L"employeesListBox";
            this->employeesListBox->ScrollAlwaysVisible = true;
            this->employeesListBox->Size = System::Drawing::Size(436, 514);
            this->employeesListBox->TabIndex = 6;
            // 
            // calculateTotalButton
            // 
            this->calculateTotalButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->calculateTotalButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->calculateTotalButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->calculateTotalButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->calculateTotalButton->Location = System::Drawing::Point(5, 301);
            this->calculateTotalButton->Name = L"calculateTotalButton";
            this->calculateTotalButton->Size = System::Drawing::Size(280, 47);
            this->calculateTotalButton->TabIndex = 7;
            this->calculateTotalButton->Text = L"Calculate Total Salary";
            this->calculateTotalButton->UseVisualStyleBackColor = false;
            this->calculateTotalButton->Click += gcnew System::EventHandler(this, &MyForm::calculateTotalButton_Click);
            // 
            // calculateAverageButton
            // 
            this->calculateAverageButton->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->calculateAverageButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->calculateAverageButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->calculateAverageButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->calculateAverageButton->Location = System::Drawing::Point(5, 365);
            this->calculateAverageButton->Name = L"calculateAverageButton";
            this->calculateAverageButton->Size = System::Drawing::Size(280, 47);
            this->calculateAverageButton->TabIndex = 8;
            this->calculateAverageButton->Text = L"Calculate Average Salary";
            this->calculateAverageButton->UseVisualStyleBackColor = false;
            this->calculateAverageButton->Click += gcnew System::EventHandler(this, &MyForm::calculateAverageButton_Click);
            // 
            // totalSalaryLabel
            // 
            this->totalSalaryLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->totalSalaryLabel->AutoSize = true;
            this->totalSalaryLabel->BackColor = System::Drawing::Color::LightSteelBlue;
            this->totalSalaryLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->totalSalaryLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->totalSalaryLabel->Location = System::Drawing::Point(12, 435);
            this->totalSalaryLabel->Name = L"totalSalaryLabel";
            this->totalSalaryLabel->Size = System::Drawing::Size(296, 37);
            this->totalSalaryLabel->TabIndex = 9;
            this->totalSalaryLabel->Text = L"Total Salary: Rs. 0.00";
            // 
            // averageSalaryLabel
            // 
            this->averageSalaryLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->averageSalaryLabel->AutoSize = true;
            this->averageSalaryLabel->BackColor = System::Drawing::Color::LightSteelBlue;
            this->averageSalaryLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->averageSalaryLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->averageSalaryLabel->Location = System::Drawing::Point(12, 489);
            this->averageSalaryLabel->Name = L"averageSalaryLabel";
            this->averageSalaryLabel->Size = System::Drawing::Size(338, 37);
            this->averageSalaryLabel->TabIndex = 10;
            this->averageSalaryLabel->Text = L"Average Salary: Rs. 0.00";
            // 
            // mobileLabel
            // 
            this->mobileLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->mobileLabel->AutoSize = true;
            this->mobileLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->mobileLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->mobileLabel->Location = System::Drawing::Point(101, 119);
            this->mobileLabel->Name = L"mobileLabel";
            this->mobileLabel->Size = System::Drawing::Size(118, 37);
            this->mobileLabel->TabIndex = 11;
            this->mobileLabel->Text = L"Mobile:";
            // 
            // mobileTextBox
            // 
            this->mobileTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->mobileTextBox->Location = System::Drawing::Point(221, 119);
            this->mobileTextBox->Name = L"mobileTextBox";
            this->mobileTextBox->Size = System::Drawing::Size(349, 43);
            this->mobileTextBox->TabIndex = 12;
            // 
            // idLabel
            // 
            this->idLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->idLabel->AutoSize = true;
            this->idLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->idLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idLabel->Location = System::Drawing::Point(27, 165);
            this->idLabel->Name = L"idLabel";
            this->idLabel->Size = System::Drawing::Size(192, 37);
            this->idLabel->TabIndex = 13;
            this->idLabel->Text = L"Employee ID:";
            this->idLabel->Click += gcnew System::EventHandler(this, &MyForm::idLabel_Click);
            // 
            // idTextBox
            // 
            this->idTextBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->idTextBox->Location = System::Drawing::Point(221, 165);
            this->idTextBox->Name = L"idTextBox";
            this->idTextBox->Size = System::Drawing::Size(349, 43);
            this->idTextBox->TabIndex = 14;
            // 
            // MyForm
            // 
            this->AutoScroll = true;
            this->AutoSize = true;
            this->BackColor = System::Drawing::Color::Blue;
            this->ClientSize = System::Drawing::Size(1139, 624);
            this->Controls->Add(this->nameLabel);
            this->Controls->Add(this->nameTextBox);
            this->Controls->Add(this->salaryLabel);
            this->Controls->Add(this->salaryTextBox);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->removeButton);
            this->Controls->Add(this->employeesListBox);
            this->Controls->Add(this->calculateTotalButton);
            this->Controls->Add(this->calculateAverageButton);
            this->Controls->Add(this->totalSalaryLabel);
            this->Controls->Add(this->averageSalaryLabel);
            this->Controls->Add(this->mobileLabel);
            this->Controls->Add(this->mobileTextBox);
            this->Controls->Add(this->idLabel);
            this->Controls->Add(this->idTextBox);
            this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Name = L"MyForm";
            this->Text = L"Payroll Management";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        double CalculateTotalSalary()
        {
            double totalSalary = 0.0;

            for each (String ^ employeeInfo in employeesListBox->Items)
            {
                int index = employeeInfo->LastIndexOf(L' ');
                String^ salaryStr = employeeInfo->Substring(index + 1);
                double salary = 0.0;
                if (Double::TryParse(salaryStr, salary))
                {
                    totalSalary += salary;
                }
            }

            return totalSalary;
        }

        double CalculateAverageSalary()
        {
            int employeeCount = employeesListBox->Items->Count;
            if (employeeCount == 0)
            {
                return 0.0;
            }

            double totalSalary = CalculateTotalSalary();
            return totalSalary / employeeCount;
        }


        void SaveEmployeeDataToFile()
        {
            SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
            saveFileDialog->Filter = "Text Files|*.txt|All Files|*.*";
            if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ fileName = saveFileDialog->FileName;

                try
                {
                    StreamWriter^ writer = gcnew StreamWriter(fileName);

                    for each (String ^ employeeInfo in employeesListBox->Items)
                    {
                        writer->WriteLine(employeeInfo);
                    }

                    writer->Close();
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Error saving employee data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
        }

        void LoadEmployeeDataFromFile()
        {
            OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
            openFileDialog->Filter = "Text Files|*.txt|All Files|*.*";
            if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ fileName = openFileDialog->FileName;

                try
                {
                    StreamReader^ reader = gcnew StreamReader(fileName);

                    employeesListBox->Items->Clear();

                    while (!reader->EndOfStream)
                    {
                        String^ employeeInfo = reader->ReadLine();
                        employeesListBox->Items->Add(employeeInfo);
                    }

                    reader->Close();
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show("Error loading employee data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }
            }
        }

    private:
        void addButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ name = nameTextBox->Text;
            String^ salaryStr = salaryTextBox->Text;
            String^ mobile = mobileTextBox->Text; // Get mobile number from the text box
            String^ id = idTextBox->Text; // Get employee ID from the text box
            double salary = 0.0;

            if (name == "" || mobile == "" || id == "" || !Double::TryParse(salaryStr, salary) || salary <= 0)
            {
                MessageBox::Show("Please enter a valid name, mobile number, employee ID, and salary.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            String^ employeeInfo = name + " - Mobile: " + mobile + " - ID: " + id + " - Rs. " + salary.ToString("F2");
            employeesListBox->Items->Add(employeeInfo);
            nameTextBox->Clear();
            salaryTextBox->Clear();
            mobileTextBox->Clear(); // Clear mobile number text box after adding an employee
            idTextBox->Clear(); // Clear employee ID text box after adding an employee
        }

        void removeButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (employeesListBox->SelectedIndex != -1)
            {
                employeesListBox->Items->RemoveAt(employeesListBox->SelectedIndex);
            }
        }

        void calculateTotalButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double totalSalary = CalculateTotalSalary();
            totalSalaryLabel->Text = "Total Salary: Rs. " + totalSalary.ToString("F2");
        }

        void calculateAverageButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            double averageSalary = CalculateAverageSalary();
            averageSalaryLabel->Text = "Average Salary: Rs. " + averageSalary.ToString("F2");
        }


        // Save menu item click event
        void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            SaveEmployeeDataToFile();
        }

        // Load menu item click event
        void loadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            LoadEmployeeDataFromFile();
        }
    private: System::Void idLabel_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
