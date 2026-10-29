@interface BraceletWorkoutHistoryViewController : MMUIViewController
{
    BOOL _didScrollToBottomOnce; // +0x70
    NSString * _username; // +0x78
    NSArray * _checkInTimestamps; // +0x80
    UIScrollView * _scrollView; // +0x88
    NSDictionary * _dayStyleMap; // +0x90
    NSArray * _yearMonthList; // +0x98
}
- (id)initWithUserName:(id)arg1;
- (id)initWithCheckInTimestamps:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)p_scrollToBottomAnimated:(BOOL)arg1;
- (void)p_loadDataFromCgi;
- (void)p_handleHistoryResponse:(id)arg1;
- (void)p_parseTimestamps;
- (void)p_parseDailySportList:(id)arg1;
- (long long)p_dayStyleForRecord:(id)arg1;
- (void)p_rebuildYearMonthListWithMinDate:(id)arg1 maxDate:(id)arg2;
- (void)p_buildContent;
- (void)p_jumpToHistoryV2WithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)checkInTimestamps;
- (void)setCheckInTimestamps:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)dayStyleMap;
- (void)setDayStyleMap:(id)arg1;
- (id)yearMonthList;
- (void)setYearMonthList:(id)arg1;
- (BOOL)didScrollToBottomOnce;
- (void)setDidScrollToBottomOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
