@interface WCFinderFeedArray : NSObject <WCFinderFeedArrayModifier, WCFinderFeedArray, NSCopying, NSFastEnumeration>
{
    map<NSString *, long, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, long>>> indexMap; // +0x8
    BOOL _needRebuildIndexMap; // +0x20
    BOOL _dataModifyChanged; // +0x21
    NSString * _name; // +0x28
    id /* block */ _mapper; // +0x30
    NSMutableArray * _mutfeeds; // +0x38
    NSMutableSet * _tids; // +0x40
    NSMutableArray * _mutTidArray; // +0x48
    WCFinderFeedArrayObserverList * _observers; // +0x50
    NSOrderedCollectionDifference * _changed; // +0x58
    NSArray * _beforeModifyFeeds; // +0x60
    WCFinderFeedArrayBridge * _bridge; // +0x68
}
+ (id)array;
+ (id)arrayWithFeeds:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)feeds;
- (id /* block */)mapper;
- (BOOL)modify:(id /* block */)arg1;
- (BOOL)modify:(id /* block */)arg1 context:(id)arg2;
- (id)makeDiff;
- (BOOL)modify:(id /* block */)arg1 context:(id)arg2 notifyAnyway:(BOOL)arg3;
- (void)_rebuildIndexMap;
- (long long)indexForTid:(id)arg1;
- (id)firstFeed;
- (id)lastFeed;
- (id)feedAtIndex:(long long)arg1;
- (id)feedWithTid:(id)arg1;
- (id)mapTidArray;
- (id)tidArray;
- (id)modifyChange;
- (BOOL)isAllChangeInsertTop;
- (BOOL)containTid:(id)arg1;
- (long long)count;
- (BOOL)isEmpty;
- (BOOL)notEmpty;
- (unsigned long long)countByEnumeratingWithState:(struct *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)appendFeed:(id)arg1;
- (void)insertFeed:(id)arg1 atIndex:(long long)arg2;
- (void)appendFeeds:(id)arg1;
- (void)insertFeedsToHead:(id)arg1;
- (void)insertFeeds:(id)arg1 atIndex:(long long)arg2;
- (void)removeAllFeeds;
- (void)removeFeedAtIndex:(long long)arg1;
- (void)removeFeedWithTid:(id)arg1;
- (void)removeWithTidList:(id)arg1;
- (void)sortUsingComparator:(id /* block */)arg1;
- (BOOL)replaceFeed:(id)arg1 withTid:(id)arg2;
- (void)resize:(id)arg1 mapper:(id /* block */)arg2;
- (void)sinkChange:(id)arg1 action:(SEL)arg2;
- (void)unSink:(id)arg1;
- (void)notifyDataChanged:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)mapNewFeedArray:(id /* block */)arg1;
- (id)createRelationshipFeedArray:(id /* block */)arg1;
- (id)createSiteNotifyFeedArray:(id /* block */)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setMapper:(id /* block */)arg1;
- (id)mutfeeds;
- (void)setMutfeeds:(id)arg1;
- (id)tids;
- (void)setTids:(id)arg1;
- (id)mutTidArray;
- (void)setMutTidArray:(id)arg1;
- (BOOL)needRebuildIndexMap;
- (void)setNeedRebuildIndexMap:(BOOL)arg1;
- (BOOL)dataModifyChanged;
- (void)setDataModifyChanged:(BOOL)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)changed;
- (void)setChanged:(id)arg1;
- (id)beforeModifyFeeds;
- (void)setBeforeModifyFeeds:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

