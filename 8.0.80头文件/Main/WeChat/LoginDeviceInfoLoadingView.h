@interface LoginDeviceInfoLoadingView : UIView
{
    id <LoginDeviceInfoLoadingViewDelegate> _delegate; // +0x8
    long long _loadingType; // +0x10
    MMLoadingIndicatorView * _loadingIcon; // +0x18
    MMUILabel * _descLabel; // +0x20
    UIImageView * _iconImageView; // +0x28
    MMUIView * _loadingView; // +0x30
    UIImageView * _reloadIcon; // +0x38
    double _yPercent; // +0x40
    NSString * _desc; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 desc:(id)arg2;
- (void)initViews;
- (void)initAction;
- (void)layoutSubviews;
- (void)layoutViews;
- (void)setYPercent:(double)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)showError:(id)arg1;
- (void)showError;
- (void)onTapReload;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)loadingType;
- (void)setLoadingType:(long long)arg1;
- (id)loadingIcon;
- (void)setLoadingIcon:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)reloadIcon;
- (void)setReloadIcon:(id)arg1;
- (double)yPercent;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
