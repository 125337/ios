@interface TemplateMsgRecvViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ITemplateMsgRecvExt>
{
    NSString * _username; // +0x68
    MMTableView * _tableView; // +0x70
    MMScrollView * _emptyView; // +0x78
    NSArray * _msgRecvState; // +0x80
    BOOL _bStateChanged; // +0x88
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

