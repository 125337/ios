@interface MMFinderLiveCameraCastNotifyPageSheet : MMPageSheetBaseView
{
    id /* block */ _onNoitfyConfirm; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _imageView; // +0x18
    UIButton * _confirmButton; // +0x20
}
- (id)init;
- (void)setupPageSheetConfig;
- (void)initViews;
- (BOOL)useCompactLayoutPadding;
- (void)layoutSubviews;
- (void)onConfirm;
- (id /* block */)onNoitfyConfirm;
- (void)setOnNoitfyConfirm:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
