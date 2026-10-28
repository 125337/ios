@interface WCFinderFeedGroup : NSObject
{
    WCFinderFeedArray * _feedArray; // +0x8
    NSDiffableDataSourceSnapshot * _originSnapshot; // +0x10
    NSDiffableDataSourceSnapshot * _snapshot; // +0x18
    id /* block */ _grouper; // +0x20
    NSMutableArray * _sessionList; // +0x28
    NSMutableDictionary * _sessionMap; // +0x30
    NSMapTable * _itemMap; // +0x38
    WCFinderFeedArrayObserverList * _observer; // +0x40
}
+ (id)groupFeedArray:(id /* block */)arg1 source:(id)arg2;
- (id)initWithGroupper:(id /* block */)arg1;
- (id)initWithGroupper:(id /* block */)arg1 source:(id)arg2;
- (void)onSourceChanged:(id)arg1 sender:(id)arg2;
- (void)sinkChange:(id)arg1 action:(SEL)arg2;
- (void)unSink:(id)arg1;
- (unsigned long long)sessionCount;
- (id)keyForSession:(long long)arg1;
- (id)feedTidForIndexPath:(id)arg1;
- (long long)itemCountForSecionAtIndex:(long long)arg1;
- (id)indexPathForTid:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)originSnapshot;
- (void)setOriginSnapshot:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (id /* block */)grouper;
- (void)setGrouper:(id /* block */)arg1;
- (id)sessionList;
- (void)setSessionList:(id)arg1;
- (id)sessionMap;
- (void)setSessionMap:(id)arg1;
- (id)itemMap;
- (void)setItemMap:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void).cxx_destruct;
@end
