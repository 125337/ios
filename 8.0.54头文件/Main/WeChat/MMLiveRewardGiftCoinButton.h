@interface MMLiveRewardGiftCoinButton : MMUIButton
{
    UIView * _loadingContainerView; // +0x8
    UIView * _loadingBkgView; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
    UIImageView * _chevronView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLoadingView;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingBkgView;
- (void)setLoadingBkgView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)chevronView;
- (void)setChevronView:(id)arg1;
- (void).cxx_destruct;
@end

