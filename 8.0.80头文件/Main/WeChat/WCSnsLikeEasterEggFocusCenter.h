@interface WCSnsLikeEasterEggFocusCenter : NSObject
{
    NSCountedSet * _focusedTids; // +0x8
    NSCountedSet * _avatarHiddenTids; // +0x10
}
- (id)init;
- (void)beginFocusFeedId:(id)arg1;
- (void)endFocusFeedId:(id)arg1;
- (BOOL)isFocusedFeedId:(id)arg1;
- (BOOL)hasAnyFocus;
- (void)beginAvatarHiddenFeedId:(id)arg1;
- (void)endAvatarHiddenFeedId:(id)arg1;
- (BOOL)isAvatarHiddenFeedId:(id)arg1;
- (id)focusedTids;
- (void)setFocusedTids:(id)arg1;
- (id)avatarHiddenTids;
- (void)setAvatarHiddenTids:(id)arg1;
- (void).cxx_destruct;
@end
