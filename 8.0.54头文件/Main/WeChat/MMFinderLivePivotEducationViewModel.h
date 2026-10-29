@interface MMFinderLivePivotEducationViewModel : NSObject
{
    double _tipsHeight; // +0x8
    double _tipsAlpha; // +0x10
    id <MMFinderLivePivotEducationViewModelDelegate> _delegate; // +0x18
}
- (double)backgroundViewY;
- (void)onScrollViewDidScroll:(id)arg1;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

