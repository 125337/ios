@interface MMMailContactViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, LongPressMenuViewDelegate>
{
    NSString * _nsMailContactName; // +0x68
    NSString * _nsMailContactAddress; // +0x70
    BOOL _bShowSendBtn; // +0x78
    MMTableView * _tableView; // +0x80
    UIButton * _sendMailBtn; // +0x88
    MMUILongPressMenuView * _nameView; // +0x90
    MMUILongPressMenuView * _addressView; // +0x98
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)onSendMail:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (id)nsMailContactName;
- (void)setNsMailContactName:(id)arg1;
- (id)nsMailContactAddress;
- (void)setNsMailContactAddress:(id)arg1;
- (BOOL)bShowSendBtn;
- (void)setBShowSendBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

