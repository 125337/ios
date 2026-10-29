@interface MMAdaptiveBubbleView : MMUIButton
{
    UIView * _mainPartContentView; // +0x8
    MMAdaptiveBubbleParams * _parames; // +0x10
    UIView * _highlightCoverView; // +0x18
    MMAdaptiveBubbleShapeView * _shapeView; // +0x20
}
- (id)initWithParams:(id)arg1;
- (void)setupBlurEffectView;
- (void)setupHighlightView;
- (void)setupShapeView;
- (void)setArrowImageViewRight:(double)arg1;
- (double)arrowImageViewRight;
- (void)setMainPartContentViewEdgeInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)mainPartContentViewEdgeInsets;
- (void)setMainPartContentView:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)relayoutAllSubviews;
- (void)layoutMainPartContentView;
- (id)mainPartContentView;
- (id)parames;
- (void)setParames:(id)arg1;
- (id)highlightCoverView;
- (void)setHighlightCoverView:(id)arg1;
- (id)shapeView;
- (void)setShapeView:(id)arg1;
- (void).cxx_destruct;
@end

