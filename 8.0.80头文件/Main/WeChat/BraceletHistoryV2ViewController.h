@interface BraceletHistoryV2ViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate>
{
    BOOL _isSelf; // +0x70
    BOOL _hasPerformedInitialScroll; // +0x71
    BOOL _userDidScroll; // +0x72
    NSString * _username; // +0x78
    MMTableView * _tableView; // +0x80
    NSMutableArray * _dailySportList; // +0x88
    unsigned long long _initTime; // +0x90
    NSMapTable * _sportViewHeightCache; // +0x98
    NSMapTable * _stepScoreExpandedCache; // +0xa0
    UIView * _headerBar; // +0xa8
    UIButton * _headerBarButton; // +0xb0
    UILabel * _headerBarLabel; // +0xb8
    UIImageView * _headerBarArrow; // +0xc0
    long long _curDisplayYear; // +0xc8
    long long _curDisplayMonth; // +0xd0
    long long _pendingScrollYear; // +0xd8
    long long _pendingScrollMonth; // +0xe0
    long long _pendingScrollDay; // +0xe8
}
- (id)initWithUserName:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)p_scrollToPendingOrBottomAnimated:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)initData;
- (void)initView;
- (void)p_initHeaderBar;
- (void)p_layoutHeaderBar;
- (void)onGetUserHistoryPage:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)p_firstVisibleRecord;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_updateHeaderBarTextWithDailyRecord:(id)arg1;
- (void)onClickHeaderBar;
- (id)p_buildYearMonthList;
- (void)p_scrollToYear:(long long)arg1 month:(long long)arg2;
- (void)p_scrollToBottomAnimated:(BOOL)arg1;
- (void)p_scrollToYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)p_scrollToYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 animated:(BOOL)arg4;
- (void)scrollToYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)p_makeAscendingList:(id)arg1;
- (unsigned long long)p_dateTypeForRow:(long long)arg1;
- (BOOL)p_isStepScoreExpandedForRecord:(id)arg1;
- (double)p_sportViewHeightForRecord:(id)arg1 row:(long long)arg2;
- (void)onClickSportRecord:(id)arg1;
- (void)onClickLikeButtonWithLikeList:(id)arg1;
- (void)onSportViewDidUpdateHeight:(id)arg1;
- (void)onClickAppWithWAContact:(id)arg1;
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
- (id)sportViewHeightCache;
- (void)setSportViewHeightCache:(id)arg1;
- (id)stepScoreExpandedCache;
- (void)setStepScoreExpandedCache:(id)arg1;
- (id)headerBar;
- (void)setHeaderBar:(id)arg1;
- (id)headerBarButton;
- (void)setHeaderBarButton:(id)arg1;
- (id)headerBarLabel;
- (void)setHeaderBarLabel:(id)arg1;
- (id)headerBarArrow;
- (void)setHeaderBarArrow:(id)arg1;
- (long long)curDisplayYear;
- (void)setCurDisplayYear:(long long)arg1;
- (long long)curDisplayMonth;
- (void)setCurDisplayMonth:(long long)arg1;
- (long long)pendingScrollYear;
- (void)setPendingScrollYear:(long long)arg1;
- (long long)pendingScrollMonth;
- (void)setPendingScrollMonth:(long long)arg1;
- (long long)pendingScrollDay;
- (void)setPendingScrollDay:(long long)arg1;
- (BOOL)hasPerformedInitialScroll;
- (void)setHasPerformedInitialScroll:(BOOL)arg1;
- (BOOL)userDidScroll;
- (void)setUserDidScroll:(BOOL)arg1;
- (void).cxx_destruct;
@end
