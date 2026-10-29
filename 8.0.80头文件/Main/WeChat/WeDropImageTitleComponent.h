@interface WeDropImageTitleComponent : WeDropPassthroghView <WeDropHeaderViewComponent>
{
    BOOL _loading; // +0x8
    UIView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
}
- (id)init;
- (void)initSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setIconView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)iconView;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)loading;
- (void).cxx_destruct;
@end
