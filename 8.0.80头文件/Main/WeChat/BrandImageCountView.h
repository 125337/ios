@interface BrandImageCountView : UIStackView
{
    UIImageView * _imageIconView; // +0x8
    MMUILabel * _imageCountLabel; // +0x10
}
- (id)init;
- (void)setupUI;
- (void)updateImageCount:(unsigned long long)arg1;
- (id)imageIconView;
- (void)setImageIconView:(id)arg1;
- (id)imageCountLabel;
- (void)setImageCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
