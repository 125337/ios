@interface WCFinderFeedArray : NSObject <NSFastEnumeration>
{
    map<NSString *, FeedItem, CompareTid, std::allocator<std::pair<NSString *const, FeedItem>>> _feedMap; // +0x8
    DelegateFlag _delegateFlag; // +0x20
    int _scene; // +0x24
    NSArray * _tidArray; // +0x28
    id <WCFinderFeedArrayDelegate> _delegate; // +0x30
    WCFinderFeedArrayChain * _chain; // +0x38
    WCFinderActionWatcherCollection * _watchers; // +0x40
    NSMutableArray * _contentVMS; // +0x48
    NSMutableDictionary * _pendingRemoves; // +0x50
}
+ (id)array:(int)arg1;
- (id)init;
- (id)initWithChain:(id)arg1 scene:(int)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned long long)count;
- (BOOL)notEmpty;
- (id)feeds;
- (long long)indexOfTid:(id)arg1;
- (id)feedAtIndex:(long long)arg1;
- (id)feedOfTid:(id)arg1;
- (id)firstFeed;
- (id)lastFeed;
- (BOOL)containFeed:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)tidArray;
- (void)sink:(id)arg1 watcher:(id)arg2;
- (void)unsink:(id)arg1;
- (void)unsink:(id)arg1 watcher:(id)arg2;
- (void)_notifyChange;
- (void)modify:(id /* block */)arg1;
- (void)_apply:(id)arg1 source:(id)arg2;
- (FeedArrayModifyCache)_doApply:(id)arg1 source:(id)arg2;
- (id)_createVMArrayFromExists:(id)arg1 cache:(FeedArrayModifyCache *)arg2;
- (BOOL)_ignoreItem:(id)arg1;
- (BOOL)_ignoreContentVM:(id)arg1;
- (id)_convertVMFromExistsVM:(id)arg1;
- (id)_convertVMFromItem:(id)arg1;
- (id)_generateContentTidFromItem:(id)arg1;
- (void)_afterApply:(id)arg1 removes:(id)arg2;
- (id)_mapperContentVM:(id)arg1 ignoreExists:(BOOL)arg2 cache:(FeedArrayModifyCache *)arg3;
- (id)duplicateRefArray:(int)arg1;
- (id)duplicateRefArray:(int)arg1 delegate:(id)arg2;
- (id)debugDescription;
- (id)description;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (id)chain;
- (void)setChain:(id)arg1;
- (id)watchers;
- (void)setWatchers:(id)arg1;
- (id)contentVMS;
- (void)setContentVMS:(id)arg1;
- (id)pendingRemoves;
- (void)setPendingRemoves:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
