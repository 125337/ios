@interface WCFinderProgressSpritesView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isLoadingImage; // +0x8
    UIImageView * _imageView; // +0x10
    FinderProgressPreviewInfo * _previewInfo; // +0x18
    NSMutableArray * _spriteImages; // +0x20
    unsigned long long _currentShowingSpriteImageIndex; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithSpritesInfo:(id)arg1;
- (void)setDragPrecent:(double)arg1 videoDuration:(double)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)spriteImages;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)previewInfo;
- (void)setPreviewInfo:(id)arg1;
- (void)setSpriteImages:(id)arg1;
- (BOOL)isLoadingImage;
- (void)setIsLoadingImage:(BOOL)arg1;
- (unsigned long long)currentShowingSpriteImageIndex;
- (void)setCurrentShowingSpriteImageIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
