@interface WARecentStarListViewModel : WAStarListViewModel <WAMainListPageLogicDelegate>
{
    WAPackageSweeperLogic * m_sweepLogic; // +0x8
    id <WADesktopStarListReportDelegate> _reportDelegate; // +0x10
    WAMainListStarLogic * _starLogic; // +0x18
    WAMainListPageLogic * _pageLogic; // +0x20
}
- (id)init;
- (long long)count;
- (BOOL)hasData;
- (BOOL)hasNoMore;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)arg1;
- (void)initPageLogic;
- (void)refreshData;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)deleteItem:(long long)arg1;
- (BOOL)starItem:(long long)arg1;
- (void)starOrMoveItem:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)fetchNextPageItems;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)onWeAppItemOpened:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)starLogic;
- (void)setStarLogic:(id)arg1;
- (id)pageLogic;
- (void)setPageLogic:(id)arg1;
- (void).cxx_destruct;
@end

