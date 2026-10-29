@interface WCFinderActionWatcherCollection : NSObject
{
    NSMapTable * _owner2watcherSet; // +0x8
    NSMapTable * _watcher2owner; // +0x10
    SEL _selector; // +0x18
}
- (id)initWithSelector:(SEL)arg1;
- (void)removeAllWatcher:(id)arg1;
- (void)removeWatcher:(id)arg1;
- (void)addWatcher:(id)arg1 owner:(id)arg2;
- (void)notifyArgCnt:(long long)arg1 args:(id)arg2;
- (void)notify:(id)arg1 arg:(id)arg2 arg0:(char *)arg3;
- (void)notify:(id)arg1 arg:(id)arg2 arg1:(char *)arg3;
- (void)notify:(id)arg1 arg:(id)arg2 arg2:(char *)arg3;
- (id)owner2watcherSet;
- (void)setOwner2watcherSet:(id)arg1;
- (id)watcher2owner;
- (void)setWatcher2owner:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void).cxx_destruct;
@end
