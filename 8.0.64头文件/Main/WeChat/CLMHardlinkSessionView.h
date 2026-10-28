@interface CLMHardlinkSessionView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _mainTableView; // +0x8
    NSMutableArray * _chatLogInfoArray; // +0x10
    UINavigationController * _navControl; // +0x18
    NSString * _detailString; // +0x20
}
- (id)initWithMultiChatLogInfo:(id)arg1 fromNavControl:(id)arg2;
- (void)makeTableView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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
