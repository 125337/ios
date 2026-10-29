@interface WCFinderCoverPhotoPreviewView : WCFinderCoverBasePreviewView <UIScrollViewDelegate>
{
    MMUIScrollView * _scrollView; // +0x8
    UIView * _shadowView; // +0x10
    UIView * _blurView; // +0x18
    WCFinderCropRectModel * _cropRectModel; // +0x20
    MMWebImageView * _photoImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)photoImageView;
- (id)cropRectModel;
- (id)blurView;
- (id)scrollView;
- (id)shadowView;
- (void)adjustShadowViewMask:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (id)renderThumbImageFrom:(id)arg1;
- (void)loadPreviewByImagePath:(id)arg1 cropRectModel:(id)arg2 fromVC:(id)arg3 loadImageSucBlock:(id /* block */)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCropRectModel;
- (void)curPreviewCoverImage:(id /* block */)arg1;
- (CGRect)getCoverVisualRectByImage:(id)arg1;
- (void)_scrollViewContentOffset:(CGPoint)arg1;
- (void)refreshPlayerPreviewByModeChange:(BOOL)arg1;
- (CGAffineTransform)transformFromRect:(CGRect)arg1 toRect:(CGRect)arg2;
- (CGSize)getPlayerVideoSize;
- (void)curFullCoverImage:(id /* block */)arg1;
- (id)getCurrentImageResult;
- (void)setScrollView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setCropRectModel:(id)arg1;
- (void)setPhotoImageView:(id)arg1;
- (void).cxx_destruct;
@end
