@interface WCFinderProgressSpritesView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isLoadingImage; // +0x8
    UIImageView * _thumbImageView; // +0x10
    UIImageView * _imageView; // +0x18
    WCFinderProgressSpritesInfo * _spritesInfo; // +0x20
    NSMutableDictionary * _spriteImages; // +0x28
    unsigned long long _currentShowingSpriteImageIndex; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithSpritesInfo:(id)arg1;
- (void)setDragPrecent:(double)arg1 videoDuration:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)spriteImages;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)spritesInfo;
- (void)setSpritesInfo:(id)arg1;
- (void)setSpriteImages:(id)arg1;
- (BOOL)isLoadingImage;
- (void)setIsLoadingImage:(BOOL)arg1;
- (unsigned long long)currentShowingSpriteImageIndex;
- (void)setCurrentShowingSpriteImageIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
