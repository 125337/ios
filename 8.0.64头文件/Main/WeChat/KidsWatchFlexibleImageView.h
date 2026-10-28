@interface KidsWatchFlexibleImageView : UIView
{
    unsigned long long _alignment; // +0x8
    UIImage * _image; // +0x10
    UIImageView * _imageView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setImage:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (id)image;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
