@interface TextStateItemViewOld : TextStateItemView <TextStateMgrExt, WCTextStateDBExt>
{
    BOOL _legacyShowTitle; // +0x8
    CContact * _legacyContact; // +0x10
    MMWebImageView * _legacyStateEmojiImageView; // +0x18
    MMUILabel * _legacyStateTextLabel; // +0x20
    UIImageView * _legacyUnreadImageView; // +0x28
    CGSize _legacyStateEmojiSize; // +0x30
}
- (id)init;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2;
- (id)initWithContact:(id)arg1 showTitle:(BOOL)arg2;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2 showTitle:(BOOL)arg3;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2 forceShowWording:(BOOL)arg3 showUnreadWording:(BOOL)arg4 showStrokeBorder:(BOOL)arg5;
- (void)legacySetupUI;
- (void)sizeToFit;
- (void)updateWithContact:(id)arg1;
- (id)emojiTintColor;
- (void)setEmojiTintColor:(id)arg1;
- (id)unreadImageView;
- (void)setShowStrokeBorder:(BOOL)arg1;
- (void)setShowUnreadWording:(BOOL)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)legacyContact;
- (void)setLegacyContact:(id)arg1;
- (id)legacyStateEmojiImageView;
- (void)setLegacyStateEmojiImageView:(id)arg1;
- (id)legacyStateTextLabel;
- (void)setLegacyStateTextLabel:(id)arg1;
- (CGSize)legacyStateEmojiSize;
- (void)setLegacyStateEmojiSize:(CGSize)arg1;
- (id)legacyUnreadImageView;
- (void)setLegacyUnreadImageView:(id)arg1;
- (BOOL)legacyShowTitle;
- (void)setLegacyShowTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
