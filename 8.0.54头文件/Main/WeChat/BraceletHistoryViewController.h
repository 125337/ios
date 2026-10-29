@interface BraceletHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate>
{
    BOOL _isSelf; // +0x68
    NSString * _username; // +0x70
    MMTableView * _tableView; // +0x78
    NSMutableArray * _dailySportList; // +0x80
    unsigned long long _initTime; // +0x88
}
- (id)initWithUserName:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)initData;
- (void)initView;
- (void)onGetUserHistoryPage:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)onClickLikeButtonWithLikeList:(id)arg1;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dailySportList;
- (void)setDailySportList:(id)arg1;
- (unsigned long long)initTime;
- (void)setInitTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

