@interface CBTAsstFullScreenImageView : UIView
{
    UIImageView * _imageView; // +0x8
    id <CBTAsstFullScreenImageViewDelegate> _delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)image;
- (void)displayImage:(id)arg1;
- (BOOL)isReady;
- (void)resize;
- (void)onWillAnimateShow;
- (void)onWilAnimateClose;
- (void)setAnimateFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onSingleTap;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
