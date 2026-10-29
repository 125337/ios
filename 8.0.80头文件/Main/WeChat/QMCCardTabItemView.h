@interface QMCCardTabItemView : UIControl <QMCScalable>
{
    BOOL _tabSelected; // +0x8
    NSString * _tabTitle; // +0x10
    NSString * _tabIconURL; // +0x18
    NSString * _tabIconDarkURL; // +0x20
    double _selectedFontSize; // +0x28
    double _selectedFontWeight; // +0x30
    id /* block */ _imageLoader; // +0x38
    UIImageView * _iconView; // +0x40
    UIView * _contentRow; // +0x48
    UILabel * _label; // +0x50
    UIView * _indicator; // +0x58
    double _scaleFactor; // +0x60
    NSLayoutConstraint * _iconWidthConstraint; // +0x68
    NSLayoutConstraint * _iconHeightConstraint; // +0x70
    NSLayoutConstraint * _minWidthConstraint; // +0x78
    NSLayoutConstraint * _contentLeadingConstraint; // +0x80
    NSLayoutConstraint * _contentTrailingConstraint; // +0x88
    NSLayoutConstraint * _contentTopConstraint; // +0x90
    NSLayoutConstraint * _indicatorTopConstraint; // +0x98
    NSLayoutConstraint * _indicatorBottomConstraint; // +0xa0
    NSLayoutConstraint * _indicatorWidthConstraint; // +0xa8
    NSLayoutConstraint * _indicatorHeightConstraint; // +0xb0
    unsigned long long _iconLoadGeneration; // +0xb8
    NSString * _appliedIconURL; // +0xc0
}
+ (id)_inkColor;
+ (id)_inactiveTextColor;
- (id)titleFont:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setTabTitle:(id)arg1;
- (void)setSelectedFontSize:(double)arg1;
- (void)setSelectedFontWeight:(double)arg1;
- (void)setTabIconURL:(id)arg1;
- (void)setTabIconDarkURL:(id)arg1;
- (void)_loadCurrentIcon;
- (void)setTabSelected:(BOOL)arg1;
- (void)setTabSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)_isApplicationActive;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)qmc_applyScale:(double)arg1;
- (BOOL)tabSelected;
- (id)tabTitle;
- (id)tabIconURL;
- (id)tabIconDarkURL;
- (double)selectedFontSize;
- (double)selectedFontWeight;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)contentRow;
- (void)setContentRow:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)iconWidthConstraint;
- (void)setIconWidthConstraint:(id)arg1;
- (id)iconHeightConstraint;
- (void)setIconHeightConstraint:(id)arg1;
- (id)minWidthConstraint;
- (void)setMinWidthConstraint:(id)arg1;
- (id)contentLeadingConstraint;
- (void)setContentLeadingConstraint:(id)arg1;
- (id)contentTrailingConstraint;
- (void)setContentTrailingConstraint:(id)arg1;
- (id)contentTopConstraint;
- (void)setContentTopConstraint:(id)arg1;
- (id)indicatorTopConstraint;
- (void)setIndicatorTopConstraint:(id)arg1;
- (id)indicatorBottomConstraint;
- (void)setIndicatorBottomConstraint:(id)arg1;
- (id)indicatorWidthConstraint;
- (void)setIndicatorWidthConstraint:(id)arg1;
- (id)indicatorHeightConstraint;
- (void)setIndicatorHeightConstraint:(id)arg1;
- (unsigned long long)iconLoadGeneration;
- (void)setIconLoadGeneration:(unsigned long long)arg1;
- (id)appliedIconURL;
- (void)setAppliedIconURL:(id)arg1;
- (void).cxx_destruct;
@end
