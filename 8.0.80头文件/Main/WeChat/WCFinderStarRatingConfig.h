@interface WCFinderStarRatingConfig : NSObject
{
    double _starsSpacing; // +0x8
    UIImage * _normalStarImage; // +0x10
    UIImage * _selectedStarImage; // +0x18
    WCFinderStarRatingWordingConfig * _wordingConfig; // +0x20
    NSString * _accessibilityLabelPrefix; // +0x28
    CGSize _starSize; // +0x30
}
- (CGSize)starSize;
- (void)setStarSize:(CGSize)arg1;
- (double)starsSpacing;
- (void)setStarsSpacing:(double)arg1;
- (id)normalStarImage;
- (void)setNormalStarImage:(id)arg1;
- (id)selectedStarImage;
- (void)setSelectedStarImage:(id)arg1;
- (id)wordingConfig;
- (void)setWordingConfig:(id)arg1;
- (id)accessibilityLabelPrefix;
- (void)setAccessibilityLabelPrefix:(id)arg1;
- (void).cxx_destruct;
@end
