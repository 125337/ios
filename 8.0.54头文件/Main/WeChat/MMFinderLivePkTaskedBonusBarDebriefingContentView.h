@interface MMFinderLivePkTaskedBonusBarDebriefingContentView : UIView <MMFinderLivePkTaskedBonusBarHighlightedContentView>
{
    UIView * _scaleContainer; // +0x8
    UILabel * _contentLabel; // +0x10
    double _pointOfInterestInLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)contentShadowColor;
- (CGPoint)highlightedPointOfInterest;
- (void)updateWithModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)scaleContainer;
- (void)setScaleContainer:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (double)pointOfInterestInLabel;
- (void)setPointOfInterestInLabel:(double)arg1;
- (void).cxx_destruct;
@end

