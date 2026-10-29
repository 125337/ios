@interface MMAdaptiveBubbleShapeView : MMUIView
{
    UIImageView * _mainPartBgImageView; // +0x8
    UIImageView * _arrowImageView; // +0x10
    double _arrowImageViewRight; // +0x18
    CGSize _mainPartContentViewSize; // +0x20
    UIEdgeInsets _mainPartContentViewEdgeInsets; // +0x30
}
- (id)init;
- (void)setupMainPartImageView;
- (void)setupArrowImageView;
- (void)setArrowImageViewRight:(double)arg1;
- (void)setMainPartContentViewSize:(CGSize)arg1;
- (void)layoutSubviews;
- (void)relayoutAllSubviews;
- (id)mainPartBgImageView;
- (void)setMainPartBgImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (CGSize)mainPartContentViewSize;
- (UIEdgeInsets)mainPartContentViewEdgeInsets;
- (void)setMainPartContentViewEdgeInsets:(UIEdgeInsets)arg1;
- (double)arrowImageViewRight;
- (void).cxx_destruct;
@end

