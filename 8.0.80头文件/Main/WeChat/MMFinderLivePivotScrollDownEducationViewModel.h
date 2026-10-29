@interface MMFinderLivePivotScrollDownEducationViewModel : MMFinderLivePivotEducationViewModel
{
    double _tipsHeight; // +0x8
    double _tipsAlpha; // +0x10
}
- (void)onScrollViewDidScroll:(id)arg1;
- (double)backgroundViewY;
- (double)tipsViewMaxHeight;
- (double)tipsViewDefaultHeight;
- (double)arrowIconTop;
- (double)tipsTop;
- (id)arrowImageName;
- (id)tipsString;
- (double)tipsHeight;
- (void)setTipsHeight:(double)arg1;
- (double)tipsAlpha;
- (void)setTipsAlpha:(double)arg1;
@end
