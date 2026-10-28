@interface TextStateItemView : UIView <TextStateMgrExt, WCTextStateDBExt>
{
    BOOL m_bShowTitle; // +0x8
    UIImageView * _unreadImageView; // +0x10
    CContact * _contact; // +0x18
    MMWebImageView * _stateEmojiImageView; // +0x20
    MMUILabel * _stateTextLabel; // +0x28
    CGSize _stateEmojiSize; // +0x30
}
- (id)init;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2;
- (id)initWithContact:(id)arg1 showTitle:(BOOL)arg2;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2 showTitle:(BOOL)arg3;
- (void)setupUI;
- (void)sizeToFit;
- (void)updateWithContact:(id)arg1;
- (id)emojiTintColor;
- (void)setEmojiTintColor:(id)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (id)unreadImageView;
- (void)setUnreadImageView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)stateEmojiImageView;
- (void)setStateEmojiImageView:(id)arg1;
- (id)stateTextLabel;
- (void)setStateTextLabel:(id)arg1;
- (CGSize)stateEmojiSize;
- (void)setStateEmojiSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
