@interface SettingBindQQViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ReturnToSettingAccoutDelegate>
{
    MMTableView * m_tableView; // +0x70
    NSString * m_nsUsrName; // +0x78
    NSString * m_nsPwd; // +0x80
    WCBaseTextFieldItem * m_tfUsrName; // +0x88
    WCBaseTextFieldItem * m_tfPwd; // +0x90
    unsigned int m_uiEventID; // +0x98
    UIViewController * m_vcAccount; // +0xa0
    BOOL m_bFirstMake; // +0xa8
}
- (void)ShowVerifyController:(id)arg1 Key:(id)arg2;
- (void)StartLoading;
- (void)StopLoading;
- (BOOL)CheckInputValid;
- (unsigned int)CreateBindQQEvent;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)goToPassword:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)LogIn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeTextFields;
- (void)makeCellOfQQ:(id)arg1;
- (void)makeCellOfPwd:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)DismissSelf;
- (void)showError:(id)arg1 Title:(id)arg2;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(id)arg1;
- (void)onBindQQSussess;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsPwd;
- (void)setM_nsPwd:(id)arg1;
- (id)m_tfUsrName;
- (void)setM_tfUsrName:(id)arg1;
- (id)m_tfPwd;
- (void)setM_tfPwd:(id)arg1;
- (id)m_vcAccount;
- (void)setM_vcAccount:(id)arg1;
- (void).cxx_destruct;
@end
