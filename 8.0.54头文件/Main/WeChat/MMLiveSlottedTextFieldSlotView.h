@interface MMLiveSlottedTextFieldSlotView : UIView
{
    BOOL _selected; // +0x8
    BOOL _invalid; // +0x9
    UILabel * _label; // +0x10
    UIImageView * _imageView; // +0x18
    UIColor * _borderColor; // +0x20
    UIColor * _selectedBorderColor; // +0x28
    UIColor * _invalidSelectedBorderColor; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setSelectedBorderColor:(id)arg1;
- (void)setInvalidSelectedBorderColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setInvalid:(BOOL)arg1;
- (BOOL)useImage;
- (void)setUseImage:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateBorder;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)borderColor;
- (id)selectedBorderColor;
- (id)invalidSelectedBorderColor;
- (BOOL)selected;
- (BOOL)invalid;
- (void).cxx_destruct;
@end

