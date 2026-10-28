@interface MJVoiceLabel : UIView
{
    UILabel * _label; // +0x8
    UIImageView * _iconView; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)showLoading;
- (void)hideLoading;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
