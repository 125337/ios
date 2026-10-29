@interface MMInputMsgReferView : UIView <UIGestureRecognizerDelegate>
{
    BOOL _isCleanable; // +0x8
    BOOL _isJumpable; // +0x9
    BOOL _canShowThumbImage; // +0xa
    BOOL _forbidInteraction; // +0xb
    BOOL _useCustomBackgroundView; // +0xc
    id <MMInputMsgReferDelegate> _delegate; // +0x10
    RichTextView * _richTextView; // +0x18
    MMUIButton * _icon; // +0x20
    UIImageView * _thumbImageView; // +0x28
    double _maxWidth; // +0x30
    double _containerCornerRadius; // +0x38
    UIColor * _containerBackgroundColor; // +0x40
    NSString * _content; // +0x48
    UIImage * _thumbImage; // +0x50
    UIView * _containerView; // +0x58
    UIView * _highlightView; // +0x60
    UIVisualEffectView * _visionBgView; // +0x68
    UIEdgeInsets _containerInset; // +0x70
}
+ (CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 parseType:(long long)arg4 cleanable:(BOOL)arg5 inset:(UIEdgeInsets)arg6 outArrStyles:(id *)arg7;
+ (CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 parseType:(long long)arg4 cleanable:(BOOL)arg5 inset:(UIEdgeInsets)arg6 outArrStyles:(id *)arg7 hasImage:(BOOL)arg8;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)onStateChanged:(id)arg1;
- (void)onTouchEffect;
- (void)onTouchRemoveEffect;
- (void)setMaxWidth:(double)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUseCustomBackgroundView:(BOOL)arg1;
- (void)setForbidInteraction:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)onTapIcon:(id)arg1;
- (void)doLayout;
- (void)updateWithSize:(CGSize)arg1 arrStyles:(id)arg2;
- (void)layoutHighlightView;
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
- (UIEdgeInsets)containerInset;
- (void)setContainerInset:(UIEdgeInsets)arg1;
- (double)maxWidth;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg1;
- (id)containerBackgroundColor;
- (void)setContainerBackgroundColor:(id)arg1;
- (BOOL)forbidInteraction;
- (BOOL)useCustomBackgroundView;
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
- (void).cxx_destruct;
@end

