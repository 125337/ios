@interface MMFinderLiveCompleteViewReplaySettingsStandardStrategy : NSObject <MMFinderLiveCompleteViewReplaySettingsStrategy>
{
    BOOL _replayHighlightEnabled; // +0x8
    BOOL _commentConversionEnabled; // +0x9
    BOOL _replayHighlightCapable; // +0xa
}
- (id)initWithReplayHighlightCapability:(BOOL)arg1;
- (id)title;
- (id)descriptionText;
- (unsigned long long)applicableOptions;
- (BOOL)membersExclusiveEnabled;
- (void)setMembersExclusiveEnabled:(BOOL)arg1;
- (void)setReplayHighlightEnabled:(BOOL)arg1;
- (BOOL)replayHighlightEnabled;
- (BOOL)commentConversionEnabled;
- (void)setCommentConversionEnabled:(BOOL)arg1;
- (BOOL)replayHighlightCapable;
- (void)setReplayHighlightCapable:(BOOL)arg1;
@end
