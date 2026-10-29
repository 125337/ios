@interface TextStateItemView : UIView <TextStateMgrExt, WCTextStateDBExt>
{
    UIImageView * _unreadImageView; // +0x8
    TextStateItemViewStyle * _style; // +0x10
    CContact * _contact; // +0x18
    MMWebImageView * _stateEmojiImageView; // +0x20
    MMUILabel * _stateTextLabel; // +0x28
    CAShapeLayer * _clickableBgLayer; // +0x30
    UIView * _frostedBgView; // +0x38
    UIEdgeInsets _touchInsets; // +0x40
}
- (BOOL)shouldUseLegacyImplementation;
- (id)init;
- (id)initWithContact:(id)arg1 style:(id)arg2;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2;
- (id)initWithContact:(id)arg1 showTitle:(BOOL)arg2;
- (id)initWithContact:(id)arg1 stateEmojiSize:(CGSize)arg2 showTitle:(BOOL)arg3;
- (BOOL)showStrokeBorder;
- (void)setShowStrokeBorder:(BOOL)arg1;
- (BOOL)showUnreadWording;
- (void)setShowUnreadWording:(BOOL)arg1;
- (void)setupUI;
- (BOOL)isCurrentReadState;
- (void)syncTouchInsetsForReadState:(BOOL)arg1 refreshLayout:(BOOL)arg2;
- (BOOL)shouldShowWordingForReadState:(BOOL)arg1;
- (void)sizeToFitForReadState:(BOOL)arg1;
- (void)sizeToFitForTextOnlyStatusReadState:(BOOL)arg1;
- (CGSize)clickableBgSizeWithContentWidth:(double)arg1 contentHeight:(double)arg2 shouldShowWording:(BOOL)arg3;
- (void)sizeToFit;
- (void)updateWithContact:(id)arg1;
- (id)emojiTintColor;
- (void)setEmojiTintColor:(id)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)unreadImageView;
- (void)setUnreadImageView:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)stateEmojiImageView;
- (void)setStateEmojiImageView:(id)arg1;
- (id)stateTextLabel;
- (void)setStateTextLabel:(id)arg1;
- (id)clickableBgLayer;
- (void)setClickableBgLayer:(id)arg1;
- (id)frostedBgView;
- (void)setFrostedBgView:(id)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
