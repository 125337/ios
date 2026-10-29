@interface QMCCardTabBarView : UIView <QMCScalable, UIScrollViewDelegate>
{
    double _contentHorizontalPadding; // +0x8
    double _itemSpacing; // +0x10
    double _selectedFontSize; // +0x18
    double _selectedFontWeight; // +0x20
    long long _selectedIndex; // +0x28
    id /* block */ _onUserSelectIndex; // +0x30
    id /* block */ _imageLoader; // +0x38
    UIScrollView * _scrollView; // +0x40
    CAGradientLayer * _fadeOverlayLayer; // +0x48
    UIStackView * _stackView; // +0x50
    NSMutableArray * _items; // +0x58
    NSLayoutConstraint * _stackLeadingInset; // +0x60
    NSLayoutConstraint * _stackTrailingInset; // +0x68
    double _scaleFactor; // +0x70
    NSLayoutConstraint * _heightConstraint; // +0x78
}
+ (double)preferredHeight;
- (void)_commonInit;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)tabCount;
- (void)setContentHorizontalPadding:(double)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setSelectedFontSize:(double)arg1;
- (void)setSelectedFontWeight:(double)arg1;
- (void)reloadWithTitles:(id)arg1 selectedIndex:(long long)arg2;
- (void)reloadWithTitles:(id)arg1 iconURLs:(id)arg2 selectedIndex:(long long)arg3;
- (void)reloadWithTitles:(id)arg1 iconURLs:(id)arg2 iconDarkURLs:(id)arg3 selectedIndex:(long long)arg4;
- (void)setSelectedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)refreshAppearance;
- (void)_itemTapped:(id)arg1;
- (void)_scrollIndexToApproximateCenter:(long long)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateFadeOverlay;
- (void)qmc_applyScale:(double)arg1;
- (double)contentHorizontalPadding;
- (double)itemSpacing;
- (double)selectedFontSize;
- (double)selectedFontWeight;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id /* block */)onUserSelectIndex;
- (void)setOnUserSelectIndex:(id /* block */)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)fadeOverlayLayer;
- (void)setFadeOverlayLayer:(id)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)stackLeadingInset;
- (void)setStackLeadingInset:(id)arg1;
- (id)stackTrailingInset;
- (void)setStackTrailingInset:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)heightConstraint;
- (void)setHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
