@interface WCCanvasComponentFloatActionButtonInfo : WCCanvasComponentFloatActionBaseInfo
{
    BOOL _onlyShowInTimelineAd; // +0x8
    double _appearPaddingTop; // +0x10
    double _appearPaddingBottom; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)appearPaddingTop;
- (void)setAppearPaddingTop:(double)arg1;
- (double)appearPaddingBottom;
- (void)setAppearPaddingBottom:(double)arg1;
- (BOOL)onlyShowInTimelineAd;
- (void)setOnlyShowInTimelineAd:(BOOL)arg1;
@end
