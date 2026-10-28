@interface MMFinderLiveReplayMessageSource : NSObject <MMFinderLiveReplayMessageCacheDelegate>
{
    BOOL _fetching; // +0x8
    BOOL _initialCommentItemsPrepended; // +0x9
    unsigned int _lastRequestEndOffset; // +0xc
    unsigned int _startOffset; // +0x10
    unsigned int _maxTimeOffset; // +0x14
    int _scenario; // +0x18
    id <MMFinderLiveReplayMessageSourceDelegate> _delegate; // +0x20
    MMFinderLiveReplayMessageCache * _messageCache; // +0x28
    NSData * _lastBuffer; // +0x30
    NSString * _liveDesc; // +0x38
    MMFinderLiveFootageReplayModel * _footageReplayModel; // +0x40
}
- (id)initWithScenario:(unsigned long long)arg1 startOffset:(unsigned int)arg2 endOffset:(unsigned int)arg3;
- (id)initWithScenario:(unsigned long long)arg1;
- (id)initWithFootageReplayModel:(id)arg1;
- (id)frameItemForTime:(unsigned int)arg1 combinePreviousFramesInPage:(BOOL)arg2;
- (void)updateLiveDesc:(id)arg1;
- (void)fetchMessagesAtTime:(unsigned int)arg1;
- (void)onPageStarvingForTimeOffsetAt:(unsigned int)arg1;
- (void)onPagePrefetchSuggestedForTimeOffsetAt:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)messageCache;
- (void)setMessageCache:(id)arg1;
- (unsigned int)lastRequestEndOffset;
- (void)setLastRequestEndOffset:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)fetching;
- (void)setFetching:(BOOL)arg1;
- (unsigned int)startOffset;
- (void)setStartOffset:(unsigned int)arg1;
- (unsigned int)maxTimeOffset;
- (void)setMaxTimeOffset:(unsigned int)arg1;
- (BOOL)initialCommentItemsPrepended;
- (void)setInitialCommentItemsPrepended:(BOOL)arg1;
- (id)liveDesc;
- (void)setLiveDesc:(id)arg1;
- (int)scenario;
- (void)setScenario:(int)arg1;
- (id)footageReplayModel;
- (void)setFootageReplayModel:(id)arg1;
- (void).cxx_destruct;
@end
