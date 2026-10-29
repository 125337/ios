@interface WCFinderFeedFlowDecorationView : UICollectionReusableView
{
    CAGradientLayer * _gradientLayer; // +0x8
    WCFinderFeedFlowDecorationViewLayoutAttributes * _attr; // +0x10
}
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateGradientUI;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)attr;
- (void)setAttr:(id)arg1;
- (void).cxx_destruct;
@end

