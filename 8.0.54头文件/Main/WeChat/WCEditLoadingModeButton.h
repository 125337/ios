@interface WCEditLoadingModeButton : MMUIButton
{
    BOOL _loading; // +0x8
    UIView * _loadingView; // +0x10
    UIImageView * _crookIconView; // +0x18
    MMUIActivityIndicatorView * _indicatorView; // +0x20
    UIView * _crookBackGroundView; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubviews;
- (void)setCrookIconBackGroundColor:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)updateButtonState;
- (BOOL)isLoading;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)crookIconView;
- (void)setCrookIconView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)crookBackGroundView;
- (void)setCrookBackGroundView:(id)arg1;
- (void).cxx_destruct;
@end

