@interface CBTAsstImagePagingState : NSObject
{
    BOOL _upHasMore; // +0x8
    BOOL _downHasMore; // +0x9
    BOOL _headInflight; // +0xa
    BOOL _tailInflight; // +0xb
    BOOL _anchorPageReady; // +0xc
    BOOL _anchorInflight; // +0xd
    BOOL _anchorFailed; // +0xe
    BOOL _headFailed; // +0xf
    BOOL _tailFailed; // +0x10
    BOOL _hasPreferredEnd; // +0x11
    CBTAsstImagePagingContext * _context; // +0x18
    id <CBTAsstImagePagingDataSource> _dataSource; // +0x20
    NSData * _upContextBytes; // +0x28
    NSData * _downContextBytes; // +0x30
    ChatBubbleExtraInfo * _localAnchor; // +0x38
    NSSet * _localAnchorKeys; // +0x40
    NSArray * _entryImageInfos; // +0x48
    unsigned long long _headEmptyPages; // +0x50
    unsigned long long _tailEmptyPages; // +0x58
    unsigned long long _preferredEnd; // +0x60
    long long _feedbackEnd; // +0x68
    NSMutableSet * _infosNeedingReload; // +0x70
    NSArray * _earlierBoundaryCacheScope; // +0x78
    double _pendingEarlierConfirmation; // +0x80
    unsigned long long _generation; // +0x88
    NSArray * _pendingReplaceInfos; // +0x90
    NSArray * _pendingHeadInfos; // +0x98
    NSArray * _pendingTailInfos; // +0xa0
}
- (id)context;
- (void)setContext:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)upContextBytes;
- (void)setUpContextBytes:(id)arg1;
- (id)downContextBytes;
- (void)setDownContextBytes:(id)arg1;
- (BOOL)upHasMore;
- (void)setUpHasMore:(BOOL)arg1;
- (BOOL)downHasMore;
- (void)setDownHasMore:(BOOL)arg1;
- (BOOL)headInflight;
- (void)setHeadInflight:(BOOL)arg1;
- (BOOL)tailInflight;
- (void)setTailInflight:(BOOL)arg1;
- (BOOL)anchorPageReady;
- (void)setAnchorPageReady:(BOOL)arg1;
- (id)localAnchor;
- (void)setLocalAnchor:(id)arg1;
- (id)localAnchorKeys;
- (void)setLocalAnchorKeys:(id)arg1;
- (id)entryImageInfos;
- (void)setEntryImageInfos:(id)arg1;
- (BOOL)anchorInflight;
- (void)setAnchorInflight:(BOOL)arg1;
- (BOOL)anchorFailed;
- (void)setAnchorFailed:(BOOL)arg1;
- (BOOL)headFailed;
- (void)setHeadFailed:(BOOL)arg1;
- (BOOL)tailFailed;
- (void)setTailFailed:(BOOL)arg1;
- (unsigned long long)headEmptyPages;
- (void)setHeadEmptyPages:(unsigned long long)arg1;
- (unsigned long long)tailEmptyPages;
- (void)setTailEmptyPages:(unsigned long long)arg1;
- (unsigned long long)preferredEnd;
- (void)setPreferredEnd:(unsigned long long)arg1;
- (BOOL)hasPreferredEnd;
- (void)setHasPreferredEnd:(BOOL)arg1;
- (long long)feedbackEnd;
- (void)setFeedbackEnd:(long long)arg1;
- (id)infosNeedingReload;
- (void)setInfosNeedingReload:(id)arg1;
- (id)earlierBoundaryCacheScope;
- (void)setEarlierBoundaryCacheScope:(id)arg1;
- (double)pendingEarlierConfirmation;
- (void)setPendingEarlierConfirmation:(double)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (id)pendingReplaceInfos;
- (void)setPendingReplaceInfos:(id)arg1;
- (id)pendingHeadInfos;
- (void)setPendingHeadInfos:(id)arg1;
- (id)pendingTailInfos;
- (void)setPendingTailInfos:(id)arg1;
- (void).cxx_destruct;
@end
