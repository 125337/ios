@interface WCCanvasFullScreenImageComponent : WCCanvasComponent
{
    WCAdURLImageView * _imageView; // +0x8
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
