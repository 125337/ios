@interface TingPAGImageView : UIView
{
    BOOL _bResignActive; // +0x8
    PAGPlayer * _pagCore; // +0x10
    UIImageView * _coverView; // +0x18
    UIImage * _renderImage; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)initPagView;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)freeCache;
- (void)flush;
- (id)imageFromPixelBuffer:(__CVBuffer *)arg1;
- (void)prepareForReuse;
- (void)applyFile:(id)arg1;
- (void)applyRenderResultImg:(id)arg1;
- (id)pagCore;
- (void)setPagCore:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)renderImage;
- (void)setRenderImage:(id)arg1;
- (BOOL)bResignActive;
- (void)setBResignActive:(BOOL)arg1;
- (void).cxx_destruct;
@end

