@interface WeDropBaseView : UIView
{
    id _delegate; // +0x8
    WeDropBaseHeaderView * _headerView; // +0x10
    WeDropBaseFooterView * _footerView; // +0x18
    UIScrollView * _contentScrollView; // +0x20
    UIView * _gradientView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
}
+ (double)adaptiveVerticalPaddingForViewHeight:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)ensureLayoutViews;
- (void)updateGradientColors;
- (void)layoutSubviews;
- (void)resetContentOffsetToTop;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (id)footerView;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
