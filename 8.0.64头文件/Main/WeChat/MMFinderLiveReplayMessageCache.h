@interface MMFinderLiveReplayMessageCache : NSObject
{
    BOOL _isNotPrependInfo; // +0x8
    id <MMFinderLiveReplayMessageCacheDelegate> _delegate; // +0x10
    unsigned long long _capacity; // +0x18
    unsigned long long _count; // +0x20
    MMFinderLiveReplayMessagePage * _mostRecentlyUsedPage; // +0x28
    MMFinderLiveReplayMessagePage * _leastRecentlyUsedPage; // +0x30
}
- (id)initWithPageCapacity:(unsigned long long)arg1;
- (void)addPage:(id)arg1;
- (id)frameAtTimeOffset:(unsigned int)arg1 combinePreviousFramesInPage:(BOOL)arg2 peek:(BOOL)arg3;
- (BOOL)hasPageContainingFrameAtTimeOffset:(unsigned int)arg1;
- (void)removePage:(id)arg1;
- (id)pageContainingFrameAtTimeOffset:(unsigned int)arg1 updateAccessOrder:(BOOL)arg2;
- (void)evaluateAndRaisePagePrefetchNotificationForTimeOffsetAt:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)capacity;
- (void)setCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (id)mostRecentlyUsedPage;
- (void)setMostRecentlyUsedPage:(id)arg1;
- (id)leastRecentlyUsedPage;
- (void)setLeastRecentlyUsedPage:(id)arg1;
- (BOOL)isNotPrependInfo;
- (void)setIsNotPrependInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
