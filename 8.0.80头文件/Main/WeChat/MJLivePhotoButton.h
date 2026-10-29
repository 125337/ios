@interface MJLivePhotoButton : MMUIButton
{
    BOOL _forceHidden; // +0x8
    BOOL _isShowBtn; // +0x9
    MJLivePhotoButtonModel * _viewModel; // +0x10
    MJLivePhotoConfig * _config; // +0x18
    MMUILabel * _liveTextLabel; // +0x20
    UIImageView * _liveImageView; // +0x28
}
- (id)initWithConfig:(id)arg1;
- (double)_calculateHeight;
- (double)_calculateWidth;
- (void)initView:(BOOL)arg1;
- (void)configShadowColor:(id)arg1;
- (void)touchDown;
- (void)touchUP;
- (void)setViewModel:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_layoutSubviews;
- (void)scaleAnimation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setConfig:(id)arg1;
- (void)syncWithConfig;
- (void)setForceHidden:(BOOL)arg1;
- (id)viewModel;
- (BOOL)forceHidden;
- (id)config;
- (id)liveTextLabel;
- (void)setLiveTextLabel:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (BOOL)isShowBtn;
- (void)setIsShowBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
