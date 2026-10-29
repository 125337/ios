@interface WCFinderSwipPageControl : UIView
{
    long long _totalPages; // +0x8
    long long _currentPage; // +0x10
    UIColor * _normalColor; // +0x18
    UIColor * _selectedColor; // +0x20
    long long _style; // +0x28
    NSMutableArray * _indicatorViews; // +0x30
    double _normalSize; // +0x38
    double _selectedWidth; // +0x40
    double _spacing; // +0x48
    long long _minIndex; // +0x50
    long long _maxIndex; // +0x58
    double _contentWidth; // +0x60
    double _lastAnimationStartTime; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)setupWithStyle:(long long)arg1;
- (void)setTotalPages:(long long)arg1;
- (void)initializeIndexRange;
- (void)setCurrentPage:(long long)arg1;
- (void)setCurrentPage:(long long)arg1 animated:(BOOL)arg2;
- (void)handlePageChangeFrom:(long long)arg1 to:(long long)arg2 animated:(BOOL)arg3;
- (void)updateLayout:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)calculateContentWidth;
- (double)widthForIndex:(long long)arg1;
- (double)heightForIndex:(long long)arg1;
- (id)colorForIndex:(long long)arg1;
- (CGSize)intrinsicContentSize;
- (void)cancelCurrentAnimations;
- (void)pushLeftAnimated:(BOOL)arg1;
- (void)pushRightAnimated:(BOOL)arg1;
- (long long)totalPages;
- (long long)currentPage;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)indicatorViews;
- (void)setIndicatorViews:(id)arg1;
- (double)normalSize;
- (void)setNormalSize:(double)arg1;
- (double)selectedWidth;
- (void)setSelectedWidth:(double)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (long long)minIndex;
- (void)setMinIndex:(long long)arg1;
- (long long)maxIndex;
- (void)setMaxIndex:(long long)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (double)lastAnimationStartTime;
- (void)setLastAnimationStartTime:(double)arg1;
- (void).cxx_destruct;
@end
