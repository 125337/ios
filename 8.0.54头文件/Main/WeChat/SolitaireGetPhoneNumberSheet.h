@interface SolitaireGetPhoneNumberSheet : WAPageSheet <UITableViewDelegate, UITableViewDataSource>
{
    id <SolitaireGetPhoneNumberSheetDelegate> _phoneSheetDelegate; // +0x8
    MMUILabel * _infoLabel; // +0x10
    UIButton * _comfirmButton; // +0x18
    UIButton * _cancelButton; // +0x20
    UITableView * _phoneListTableView; // +0x28
    NSArray * _phoneNumbers; // +0x30
}
- (id)initWithPhoneNumbers:(id)arg1;
- (id)infoLabel;
- (id)comfirmButton;
- (id)cancelButton;
- (id)phoneListTableView;
- (void)loadSubViews;
- (void)layoutSubViews;
- (double)contentHeight;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (void)onTapComfirmButton:(id)arg1;
- (void)onTapCancelButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)phoneSheetDelegate;
- (void)setPhoneSheetDelegate:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setComfirmButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setPhoneListTableView:(id)arg1;
- (id)phoneNumbers;
- (void)setPhoneNumbers:(id)arg1;
- (void).cxx_destruct;
@end

