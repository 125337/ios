@interface CBTAttachmentMathInlineView : CBTAttachmentBaseView <UIScrollViewDelegate>
{
    UIScrollView * _scrollView; // +0x8
    MTMathUILabel * _mathLabel; // +0x10
    CAGradientLayer * _leftGradientLayer; // +0x18
    CAGradientLayer * _rightGradientLayer; // +0x20
    UILabel * _fallbackLabel; // +0x28
    double _contentWidth; // +0x30
}
+ (CGSize)estimatedSizeForLatex:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)initWithAttachment:(id)arg1;
- (id)displayFont;
- (void)setupViews;
- (void)setupGradientMasks;
- (void)layoutView;
- (void)updateGradientMasks;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)mathLabel;
- (void)setMathLabel:(id)arg1;
- (id)leftGradientLayer;
- (void)setLeftGradientLayer:(id)arg1;
- (id)rightGradientLayer;
- (void)setRightGradientLayer:(id)arg1;
- (id)fallbackLabel;
- (void)setFallbackLabel:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (void).cxx_destruct;
@end
