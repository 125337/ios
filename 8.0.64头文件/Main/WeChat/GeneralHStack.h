@interface GeneralHStack : UIStackView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _detailLabel; // +0x10
    UISwitch * _uiSwitch; // +0x18
    UISlider * _uiSlider; // +0x20
    UIImageView * _imageView; // +0x28
    UIImageView * _accessoryView; // +0x30
}
- (id)init;
- (id)titleLabel;
- (id)detailLabel;
- (id)uiSwitch;
- (id)uiSlider;
- (id)imageView;
- (id)accessoryView;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setUiSwitch:(id)arg1;
- (void)setUiSlider:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void).cxx_destruct;
@end
