@interface WAMyStarListViewModel : WAStarListViewModel <WAMainListStarLogicDelegate>
{
    NSString * m_showSessionId; // +0x8
    WAMainListStarLogic * _starLogic; // +0x10
}
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (long long)count;
- (BOOL)hasData;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)arg1;
- (void)refreshData;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)deleteItem:(long long)arg1;
- (void)onItemDeleted:(id)arg1 index:(long long)arg2;
- (void)reportOnViewDidAppear;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)reportStarListViewShowAction;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)starDataDidUpdated;
- (id)starLogic;
- (void)setStarLogic:(id)arg1;
- (void).cxx_destruct;
@end
