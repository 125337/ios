@interface CBTAttachmentMathBlockView : CBTAttachmentBaseView <UIScrollViewDelegate>
{
    UIScrollView * _scrollView; // +0x8
    MTMathUILabel * _mathLabel; // +0x10
    CAGradientLayer * _leftGradientLayer; // +0x18
    CAGradientLayer * _rightGradientLayer; // +0x20
    UIView * _topSeparatorLine; // +0x28
    UIView * _bottomSeparatorLine; // +0x30
    double _contentWidth; // +0x38
    UILabel * _fallbackLabel; // +0x40
}
+ (CGSize)estimatedSizeForLatex:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 maxWidth:(double)arg4;
- (id)initWithAttachment:(id)arg1;
- (id)displayFont;
- (double)displayLineSpacing;
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
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)fallbackLabel;
- (void)setFallbackLabel:(id)arg1;
- (void).cxx_destruct;
@end
