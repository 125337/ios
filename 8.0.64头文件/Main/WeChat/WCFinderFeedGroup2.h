@interface WCFinderFeedGroup2 : NSObject
{
    WCFinderFeedArray2 * _feedArray; // +0x8
    NSMutableArray * _sections; // +0x10
    id /* block */ _grouper; // +0x18
    WCFinderActionWatcherCollection * _watchers; // +0x20
    NSMutableDictionary * _sectionInfoMap; // +0x28
    NSMutableDictionary * _tid2secMap; // +0x30
    WCFinderFeedArrayWatcher * _snapshotWatcher; // +0x38
}
- (id)mutSections;
- (id)initWithGrouper:(id /* block */)arg1;
- (void)sink:(id)arg1 watcher:(id)arg2;
- (void)unsink:(id)arg1;
- (void)unsinkWatcher:(id)arg1;
- (void)onFeedArray:(id)arg1 batchUpdate:(id)arg2 change:(id)arg3;
- (void)_ensureSection:(id)arg1 item:(id)arg2;
- (void)insertSection:(id)arg1 index:(long long)arg2;
- (BOOL)_insert:(id)arg1 toSection:(id)arg2;
- (void)_remove:(id)arg1 fromSection:(id)arg2;
- (void)_resortSection:(id)arg1;
- (long long)compareFeedIndex:(id)arg1 objc2:(id)arg2;
- (id)feedAtIndexPath:(id)arg1;
- (id)indexPathOfTid:(id)arg1;
- (long long)itemCountOfSection:(id)arg1;
- (long long)itemCountOfSecIndex:(long long)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id /* block */)grouper;
- (void)setGrouper:(id /* block */)arg1;
- (id)watchers;
- (void)setWatchers:(id)arg1;
- (id)sectionInfoMap;
- (void)setSectionInfoMap:(id)arg1;
- (id)tid2secMap;
- (void)setTid2secMap:(id)arg1;
- (id)snapshotWatcher;
- (void)setSnapshotWatcher:(id)arg1;
- (void).cxx_destruct;
@end
