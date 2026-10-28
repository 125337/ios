@interface MJClipBundleCoverPreviewView : WCFinderCoverBasePreviewView <UIScrollViewDelegate, WCFinderCoverVideoPreviewProtocol>
{
    MMUIScrollView * _scrollView; // +0x8
    UIView * _blurView; // +0x10
    UIView * _shadowView; // +0x18
    WCFinderCropRectModel * _cropRectModel; // +0x20
    UIView * _renderView; // +0x28
    UIView * _playerContainerView; // +0x30
    UIView * _compositionView; // +0x38
    UIImageView * _specialImageView; // +0x40
    MJPublisherMovieCompositionTask * _compositionTask; // +0x48
    double _videoDuration; // +0x50
    CGSize _videoSize; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)blurView;
- (id)cropRectModel;
- (id)scrollView;
- (id)playerContainerView;
- (id)renderView;
- (id)shadowView;
- (double)keyFrameRate;
- (id)playerAVAsset;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)adjustShadowViewMask:(id)arg1;
- (void)loadPreviewViewByVideoURL:(id)arg1 compositionTask:(id)arg2 specialImage:(id)arg3 cropRectModel:(id)arg4;
- (void)_relayoutCompositionView;
- (void)refreshPlayerPreview;
- (void)refreshPlayerPreviewByModeChange:(BOOL)arg1;
- (void)_scrollViewContentOffset:(CGPoint)arg1;
- (CGAffineTransform)transformFromRect:(CGRect)arg1 toRect:(CGRect)arg2;
- (CGSize)getPlayerVideoSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)curPreviewCoverImage:(id /* block */)arg1;
- (CGRect)getCoverVisualRectByImage:(id)arg1;
- (void)updateCropRectModel;
- (void)curFullCoverImage:(id /* block */)arg1;
- (void)skimToTime:(struct)arg1;
- (void)snapshotAtTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)setScrollView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setCropRectModel:(id)arg1;
- (void)setRenderView:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (id)compositionView;
- (void)setCompositionView:(id)arg1;
- (id)specialImageView;
- (void)setSpecialImageView:(id)arg1;
- (id)compositionTask;
- (void)setCompositionTask:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (void).cxx_destruct;
@end
