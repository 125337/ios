@interface MMFinderLiveCompleteViewReplaySettingsCommittedResult : NSObject
{
    BOOL _replayHighlightEnabled; // +0x8
    BOOL _commentConversionEnabled; // +0x9
    BOOL _membersExclusiveEnabled; // +0xa
    UIImage * _selectedCoverImage; // +0x10
}
- (id)selectedCoverImage;
- (void)setSelectedCoverImage:(id)arg1;
- (BOOL)replayHighlightEnabled;
- (void)setReplayHighlightEnabled:(BOOL)arg1;
- (BOOL)commentConversionEnabled;
- (void)setCommentConversionEnabled:(BOOL)arg1;
- (BOOL)membersExclusiveEnabled;
- (void)setMembersExclusiveEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
