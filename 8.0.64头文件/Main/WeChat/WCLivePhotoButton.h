@interface WCLivePhotoButton : MMUIButton
{
    BOOL _isShowBtn; // +0x8
    WCLivePhotoButtonModel * _viewModel; // +0x10
    MMUILabel * _liveTextLabel; // +0x18
    UIImageView * _liveImageView; // +0x20
}
- (id)initWithModel:(id)arg1;
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
- (id)viewModel;
- (id)liveTextLabel;
- (void)setLiveTextLabel:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (BOOL)isShowBtn;
- (void)setIsShowBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
