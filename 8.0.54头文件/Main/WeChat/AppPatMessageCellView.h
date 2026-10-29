@interface AppPatMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>
{
    UIButton * _expandButton; // +0x28
    NSArray * _patBackgroundViews; // +0x30
    UIView * _currentPatBackgroundView; // +0x38
    NSMutableDictionary * _contentIdToBackgroundView; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (BOOL)canBeReused;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)isAccessibilityElement;
- (void)onLongTouch:(CGPoint)arg1;
- (BOOL)canCellShowOperationMenu;
- (void)onTouchCancel;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)setSubPatMessageReadFromTop:(double)arg1 andBottom:(double)arg2;
- (void)playEmojiAnimationForPatWrap:(id)arg1 withTimeOffset:(double)arg2;
- (CGRect)frameForPatWithContentId:(id)arg1 emojiName:(id)arg2 range:(_NSRange)arg3;
- (void)onTapExpandButton;
- (void)reportTapExpandButton;
- (id)reusableViewWithContentId:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)createRichTextViewUseLightStyle:(BOOL)arg1;
- (id)createExpandButtonUseLightStyle:(BOOL)arg1;
- (void)setView:(id)arg1 useLightStyle:(BOOL)arg2;
- (void)setView:(id)arg1 useLightStyle:(BOOL)arg2 isHighlight:(BOOL)arg3;
- (void)restoreCurrentPatBackgroundViewIfNeeded;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onChatBackgroundChanged:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)patBackgroundViews;
- (void)setPatBackgroundViews:(id)arg1;
- (id)currentPatBackgroundView;
- (void)setCurrentPatBackgroundView:(id)arg1;
- (id)contentIdToBackgroundView;
- (void)setContentIdToBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

