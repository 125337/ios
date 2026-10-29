@interface WCPaySecuritySettingTipsBack : UIView
{
    NSString * _imageUrl; // +0x8
    NSString * _desc; // +0x10
    WCPayWebImageView * _imageView; // +0x18
    UILabel * _label; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 imageUrl:(id)arg2 desc:(id)arg3;
- (void)layoutSubviews;
- (void)updateImage;
- (void)updateDesc;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
