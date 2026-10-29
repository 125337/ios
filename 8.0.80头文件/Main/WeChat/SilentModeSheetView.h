@interface SilentModeSheetView : MMAutoLayoutSheetView
{
    UIImageView * _imageView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    UIButton * _confirmButton; // +0x20
}
- (id)init;
- (void)initConfigs;
- (void)initView;
- (id)imageView;
- (id)titleLabel;
- (id)descLabel;
- (id)confirmButton;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
