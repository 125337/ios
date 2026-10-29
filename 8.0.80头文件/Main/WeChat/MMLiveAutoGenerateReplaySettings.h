@interface MMLiveAutoGenerateReplaySettings : NSObject
{
    BOOL _replayHighlightEnabled; // +0x8
    BOOL _commentConversionEnabled; // +0x9
    BOOL _membersExclusiveEnabled; // +0xa
    unsigned long long _liveId; // +0x10
    unsigned long long _objectId; // +0x18
}
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (BOOL)replayHighlightEnabled;
- (void)setReplayHighlightEnabled:(BOOL)arg1;
- (BOOL)commentConversionEnabled;
- (void)setCommentConversionEnabled:(BOOL)arg1;
- (BOOL)membersExclusiveEnabled;
- (void)setMembersExclusiveEnabled:(BOOL)arg1;
@end
