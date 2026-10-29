@interface WCAdConventionalHalfScreenImageMediaView : WCAdConventionalHalfScreenMediaBaseView
{
    WCMediaItem * _mediaItem; // +0x8
    WCImageView * _imageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 mediaItem:(id)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (void)updateMediaContentWithWidth:(double)arg1 height:(double)arg2;
- (id)imageView;
- (CGSize)fetchMediaSize;
- (id)fetchMediaImage;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end
