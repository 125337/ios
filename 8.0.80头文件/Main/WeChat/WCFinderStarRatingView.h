@interface WCFinderStarRatingView : UIControl
{
    WCFinderStarRatingConfig * _config; // +0x8
    unsigned long long _selectedScore; // +0x10
    NSArray * _items; // +0x18
    NSArray * _starImageViews; // +0x20
    NSArray * _wordingLabels; // +0x28
    NSArray * _optionControls; // +0x30
}
+ (double)starsContentWidthWithConfig:(id)arg1 itemCount:(unsigned long long)arg2;
+ (double)contentHeightWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 items:(id)arg2;
- (void)setupViews;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)_isScoreValid:(unsigned long long)arg1;
- (void)_updateStarImagesAnimated:(BOOL)arg1;
- (void)_updateOptionViews;
- (void)setSelectedScore:(unsigned long long)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)onOptionControlTapped:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (unsigned long long)selectedScore;
- (void)setSelectedScore:(unsigned long long)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)starImageViews;
- (void)setStarImageViews:(id)arg1;
- (id)wordingLabels;
- (void)setWordingLabels:(id)arg1;
- (id)optionControls;
- (void)setOptionControls:(id)arg1;
- (void).cxx_destruct;
@end
