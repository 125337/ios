@interface CLMHardlinkSessionView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL isCellClicked; // +0x8
    id /* block */ _onShowLinks; // +0x10
    id /* block */ _onDismiss; // +0x18
    id /* block */ _onJumpToChat; // +0x20
    MMTableView * _mainTableView; // +0x28
    NSMutableArray * _chatLogInfoArray; // +0x30
    UINavigationController * _navControl; // +0x38
    NSString * _detailString; // +0x40
}
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (id)initWithMultiChatLogInfo:(id)arg1 fromNavControl:(id)arg2;
- (void)makeTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id /* block */)onShowLinks;
- (void)setOnShowLinks:(id /* block */)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (id /* block */)onJumpToChat;
- (void)setOnJumpToChat:(id /* block */)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)chatLogInfoArray;
- (void)setChatLogInfoArray:(id)arg1;
- (id)navControl;
- (void)setNavControl:(id)arg1;
- (id)detailString;
- (void)setDetailString:(id)arg1;
- (void).cxx_destruct;
@end
