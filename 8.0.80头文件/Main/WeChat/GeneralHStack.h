@interface GeneralHStack : UIStackView
{
    MMUILabel * _titleLabel; // +0x8
    UIImageView * _tagView; // +0x10
    MMUILabel * _tagLabel; // +0x18
    MMExtUILabel * _extTagLabel; // +0x20
    MMUILabel * _detailLabel; // +0x28
    UISwitch * _uiSwitch; // +0x30
    UISlider * _uiSlider; // +0x38
    UIImageView * _imageView; // +0x40
    UIImageView * _accessoryView; // +0x48
}
- (id)init;
- (id)titleLabel;
- (id)tagView;
- (id)tagLabel;
- (id)extTagLabel;
- (id)detailLabel;
- (id)uiSwitch;
- (id)uiSlider;
- (id)imageView;
- (id)accessoryView;
- (void)setTitleLabel:(id)arg1;
- (void)setTagView:(id)arg1;
- (void)setTagLabel:(id)arg1;
- (void)setExtTagLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setUiSwitch:(id)arg1;
- (void)setUiSlider:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void).cxx_destruct;
@end
