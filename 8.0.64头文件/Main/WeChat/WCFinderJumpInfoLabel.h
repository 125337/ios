@interface WCFinderJumpInfoLabel : WCFinderJumpInfoView
{
    double _maxTextAreaWidth; // +0x8
    double _maxWidth; // +0x10
    RichTextView * _textView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    CGRect _targetFrame; // +0x28
}
- (id)init;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)prepareForAppearAnimationFromView:(id)arg1;
- (void)changeToAppear:(BOOL)arg1 duration:(double)arg2;
- (void)completionForAppearAnimation;
- (void)updateUIInfo;
- (BOOL)isRightStyle;
- (void)addCornerRadiusIfNeeded;
- (void)layoutUI;
- (void)onActionButtonDidClick;
- (id)textView;
- (id)arrowImageView;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
