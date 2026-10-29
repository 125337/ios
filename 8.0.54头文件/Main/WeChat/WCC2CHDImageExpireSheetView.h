@interface WCC2CHDImageExpireSheetView : MMAutoLayoutSheetView
{
    id /* block */ _onClickConfirmButton; // +0x8
    UIImageView * _imageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _contentLabel; // +0x20
    MMUIButton * _jumpButton; // +0x28
    UIButton * _confirmButton; // +0x30
}
- (id)initWithType:(int)arg1;
- (void)initConfigs;
- (void)initView;
- (id)imageView;
- (id)titleLabel;
- (id)contentLabel;
- (id)jumpButton;
- (void)jumpToSetting;
- (id)confirmButton;
- (id /* block */)onClickConfirmButton;
- (void)setOnClickConfirmButton:(id /* block */)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setJumpButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

