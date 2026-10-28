@interface FinderUniCommentImageView : UIImageView
{
    MVImageLoader * _imageLoader; // +0x8
    NSString * _imageUrl; // +0x10
    UIImage * _defaultImage; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setImageUrl:(id)arg1 token:(id)arg2;
- (id)imageLoader;
- (void)setImageLoader:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (void).cxx_destruct;
@end
