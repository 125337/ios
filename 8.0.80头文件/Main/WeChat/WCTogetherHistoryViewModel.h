@interface WCTogetherHistoryViewModel : NSObject <WCTogetherFeedViewItemDelegate, WCTogetherFriendsListViewItemDelegate, WCFacadeExt>
{
    BOOL _showsTogetherFriendsInHeader; // +0x8
    BOOL _hasMoreItems; // +0x9
    CContact * _contact; // +0x10
    id <WCTogetherHistoryViewModelDelegate> _delegate; // +0x18
    NSString * _title; // +0x20
    WCTogetherFriendsListViewSection * _headerViewSection; // +0x28
    WCTogetherMoreViewSection * _moreViewSection; // +0x30
    NSArray * _viewSections; // +0x38
    NSMutableArray * _cachedDataItems; // +0x40
    NSMutableArray * _dataItems; // +0x48
    unsigned long long _maxFeedID; // +0x50
    unsigned long long _minFeedID; // +0x58
    WCTogetherHistoryCGI * _togetherHistoryCGI; // +0x60
    NSCalendar * _calendarOfDayFormatter; // +0x68
    NSDate * _today; // +0x70
    long long _yearOfToday; // +0x78
    long long _monthOfToday; // +0x80
    long long _dayOfToday; // +0x88
    long long _yearOfYesterday; // +0x90
    long long _monthOfYesterday; // +0x98
    long long _dayOfYesterday; // +0xa0
    long long _scrollDirection; // +0xa8
    CGPoint _lastScrollContentOffset; // +0xb0
}
- (id)initWithContact:(id)arg1;
- (void)loadHeader;
- (void)loadCachedData;
- (void)updateCachedData;
- (void)reloadData;
- (void)reloadMoreViewSection;
- (void)didReloadData;
- (BOOL)isRequestingItems;
- (void)requestItemsForNextPage;
- (void)didFinishRequestingItemsForNextPageWithResponse:(id)arg1;
- (void)didFailToRequestItemsForNextPageWithError:(id)arg1;
- (void)tableViewDidScroll:(id)arg1;
- (void)autoplayVideoInTableView:(id)arg1;
- (void)pausePlayingVideoWithViewItem:(id)arg1;
- (void)pausePlayingVideos;
- (void)updateDatatimeInfo;
- (void)getYearText:(id *)arg1 dayText:(id *)arg2 fromDate:(id)arg3;
- (void)getDateText:(id *)arg1 fromDate:(id)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)viewItem:(id)arg1 didClickContactInfoWithDataItem:(id)arg2 contact:(id)arg3;
- (void)viewItem:(id)arg1 didClickLocationInfoWithDataItem:(id)arg2;
- (void)viewItem:(id)arg1 didClickContentDetailWithDataItem:(id)arg2;
- (void)viewItem:(id)arg1 didClickMediaWithDataItem:(id)arg2 mediaItem:(id)arg3;
- (void)friendsListViewItemDidClickFriendsInfo:(id)arg1;
- (id)contact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)headerViewSection;
- (void)setHeaderViewSection:(id)arg1;
- (id)moreViewSection;
- (void)setMoreViewSection:(id)arg1;
- (id)viewSections;
- (void)setViewSections:(id)arg1;
- (BOOL)showsTogetherFriendsInHeader;
- (void)setShowsTogetherFriendsInHeader:(BOOL)arg1;
- (id)cachedDataItems;
- (void)setCachedDataItems:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)maxFeedID;
- (void)setMaxFeedID:(unsigned long long)arg1;
- (unsigned long long)minFeedID;
- (void)setMinFeedID:(unsigned long long)arg1;
- (BOOL)hasMoreItems;
- (void)setHasMoreItems:(BOOL)arg1;
- (id)togetherHistoryCGI;
- (void)setTogetherHistoryCGI:(id)arg1;
- (id)calendarOfDayFormatter;
- (void)setCalendarOfDayFormatter:(id)arg1;
- (id)today;
- (void)setToday:(id)arg1;
- (long long)yearOfToday;
- (void)setYearOfToday:(long long)arg1;
- (long long)monthOfToday;
- (void)setMonthOfToday:(long long)arg1;
- (long long)dayOfToday;
- (void)setDayOfToday:(long long)arg1;
- (long long)yearOfYesterday;
- (void)setYearOfYesterday:(long long)arg1;
- (long long)monthOfYesterday;
- (void)setMonthOfYesterday:(long long)arg1;
- (long long)dayOfYesterday;
- (void)setDayOfYesterday:(long long)arg1;
- (long long)scrollDirection;
- (void)setScrollDirection:(long long)arg1;
- (CGPoint)lastScrollContentOffset;
- (void)setLastScrollContentOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end
