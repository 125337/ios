@interface WCMomentsPostShareButton : MMUIButton
{
    WCMomentsPostShareBaseViewModel * _viewModel; // +0x8
    UIImageView * _iconImageView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewModel:(id)arg1;
- (long long)_layoutScene;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (double)_calculateHeight;
- (id)viewModel;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
