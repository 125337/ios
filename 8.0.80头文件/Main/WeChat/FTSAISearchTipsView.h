@interface FTSAISearchTipsView : UIView
{
    FTSAISearchSugLabel * _firstSugLabel; // +0x8
    CAGradientLayer * _gradientLayer; // +0x10
    UIView * _gradientView; // +0x18
    double _height; // +0x20
}
- (id)initWithSugLabels:(id)arg1;
- (void)setupLabels:(id)arg1;
- (void)setupGradientLayer;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)firstSugLabel;
- (void)setFirstSugLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void).cxx_destruct;
@end
