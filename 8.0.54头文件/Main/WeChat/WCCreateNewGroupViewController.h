@interface WCCreateNewGroupViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x68
    UITextField * m_textField; // +0x70
    NSString * m_title; // +0x78
    NSString * m_placeHolderText; // +0x80
    NSString * m_originText; // +0x88
    NSString * m_hintText; // +0x90
    id <WCCreateNewGroupViewControllerDelegate> m_delegate; // +0x98
    NSString * _groupId; // +0xa0
}
- (void)setTextFieldFirstResponse;
- (void)onSave;
- (void)onCancel;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)OnDataChange;
- (void)textFieldTextDidChange:(id)arg1;
- (void)makeTextCell:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_placeHolderText;
- (void)setM_placeHolderText:(id)arg1;
- (id)m_originText;
- (void)setM_originText:(id)arg1;
- (id)m_hintText;
- (void)setM_hintText:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (void).cxx_destruct;
@end

