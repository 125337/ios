@interface TemplateMsgRecvViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ITemplateMsgRecvExt>
{
    NSString * _username; // +0x70
    MMTableView * _tableView; // +0x78
    MMScrollView * _emptyView; // +0x80
    NSArray * _msgRecvState; // +0x88
    BOOL _bStateChanged; // +0x90
}
- (id)initWithUser:(id)arg1;
- (void)viewDidLoad;
- (void)initEmptyView;
- (void)initTableView;
- (void)showSubView;
- (void)onRecvSwitchChanged:(id)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)onTemplateMsgRecvStateChangedForUser:(id)arg1 withData:(id)arg2;
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end
