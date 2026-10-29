@interface MiniTaskTextPreviewController : TextFloatViewController
{
    UIView * _shadowBgView; // +0xa8
    MMUIButton * _sourceButton; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    UIImageView * _arrowImageView; // +0xc0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onClickSourceButton:(id)arg1;
- (BOOL)useTransparentNavibar;
- (id)shadowBgView;
- (void)setShadowBgView:(id)arg1;
- (id)sourceButton;
- (void)setSourceButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
