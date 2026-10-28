@interface MMInputMsgReferView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isCleanable; // +0x8
    BOOL _isJumpable; // +0x9
    BOOL _canShowThumbImage; // +0xa
    BOOL _isTextSelectReply; // +0xb
    BOOL _forbidInteraction; // +0xc
    BOOL _useCustomBackgroundView; // +0xd
    id <MMInputMsgReferDelegate> _delegate; // +0x10
    RichTextView * _richTextView; // +0x18
    MMUIButton * _icon; // +0x20
    UIImageView * _thumbImageView; // +0x28
    double _maxWidth; // +0x30
    double _containerCornerRadius; // +0x38
    UIColor * _containerBackgroundColor; // +0x40
    MMReferPartialInfo * _replyingPartialInfo; // +0x48
    UIColor * _referTextBlurColor; // +0x50
    NSString * _content; // +0x58
    UIImage * _thumbImage; // +0x60
    UIView * _containerView; // +0x68
    UIView * _highlightView; // +0x70
    UIVisualEffectView * _visionBgView; // +0x78
    UITapGestureRecognizer * _iconTapGesture; // +0x80
    MMMsgReferStateGesture * _stateGesture; // +0x88
    MMMsgReferPartBlurView * _frontBlurView; // +0x90
    MMMsgReferPartBlurView * _behindBlurView; // +0x98
    UIEdgeInsets _containerInset; // +0xa0
}
+ (CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 parseType:(long long)arg3 cleanable:(BOOL)arg4 inset:(UIEdgeInsets)arg5 outArrStyles:(id *)arg6 hasImage:(BOOL)arg7 referPartialInfo:(id)arg8;
- (id)initWithFrame:(CGRect)arg1;
- (id)frontBlurView;
- (id)behindBlurView;
- (void)initViews;
- (void)onStateChanged:(id)arg1;
- (void)onTouchEffect;
- (void)onTouchRemoveEffect;
- (void)setMaxWidth:(double)arg1;
- (void)setReplyingPartialInfo:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUseCustomBackgroundView:(BOOL)arg1;
- (void)setForbidInteraction:(BOOL)arg1;
- (void)updateReplyingText:(id)arg1;
- (void)onTapIcon:(id)arg1;
- (void)doLayout;
- (void)updateWithSize:(CGSize)arg1 arrStyles:(id)arg2;
- (void)layoutHighlightView;
- (void)updateRichTextPartReferMaskLayer;
- (void)updatePartReferBlurView;
- (BOOL)canBecomeFirstResponder;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)richTextView;
- (id)icon;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (BOOL)isCleanable;
- (void)setIsCleanable:(BOOL)arg1;
- (BOOL)isJumpable;
- (void)setIsJumpable:(BOOL)arg1;
- (BOOL)canShowThumbImage;
- (void)setCanShowThumbImage:(BOOL)arg1;
- (BOOL)isTextSelectReply;
- (void)setIsTextSelectReply:(BOOL)arg1;
- (UIEdgeInsets)containerInset;
- (void)setContainerInset:(UIEdgeInsets)arg1;
- (double)maxWidth;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg1;
- (id)containerBackgroundColor;
- (void)setContainerBackgroundColor:(id)arg1;
- (BOOL)forbidInteraction;
- (BOOL)useCustomBackgroundView;
- (id)replyingPartialInfo;
- (id)referTextBlurColor;
- (void)setReferTextBlurColor:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)visionBgView;
- (void)setVisionBgView:(id)arg1;
- (id)iconTapGesture;
- (void)setIconTapGesture:(id)arg1;
- (id)stateGesture;
- (void)setStateGesture:(id)arg1;
- (void)setFrontBlurView:(id)arg1;
- (void)setBehindBlurView:(id)arg1;
- (void).cxx_destruct;
@end
