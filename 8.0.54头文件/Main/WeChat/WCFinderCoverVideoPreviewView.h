@interface WCFinderCoverVideoPreviewView : WCFinderCoverBasePreviewView <UIScrollViewDelegate>
{
    MMUIScrollView * _scrollView; // +0x8
    UIView * _blurView; // +0x10
    UIView * _shadowView; // +0x18
    WCFinderCropRectModel * _cropRectModel; // +0x20
    double _keyFrameRate; // +0x28
    AVAsset * _playerAVAsset; // +0x30
    UIView * _playerContainerView; // +0x38
    double _videoDuration; // +0x40
    AVPlayerItem * _playerItem; // +0x48
    AVPlayer * _avPlayer; // +0x50
    AVPlayerLayer * _playerLayer; // +0x58
    UIView * _compositionView; // +0x60
    UIImageView * _specialImageView; // +0x68
    AVPlayerItem * _playerBkgItem; // +0x70
    AVPlayer * _avBkgPlayer; // +0x78
    AVPlayerLayer * _playerBkgLayer; // +0x80
    UIView * _playerBgkView; // +0x88
    WCFinderPreviewEditVideoCompositionTask * _compositionTask; // +0x90
    AVAssetImageGenerator * _coverGenerator; // +0x98
    CGSize _videoSize; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1;
- (id)blurView;
- (id)cropRectModel;
- (id)scrollView;
- (id)playerContainerView;
- (id)playerBgkView;
- (id)shadowView;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)adjustShadowViewMask:(id)arg1;
- (void)loadPreviewViewByVideoURL:(id)arg1 compositionTask:(id)arg2 specialImage:(id)arg3 cropRectModel:(id)arg4;
- (void)_relayoutCompositionView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
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
- (void)setScrollView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setCropRectModel:(id)arg1;
- (double)keyFrameRate;
- (void)setKeyFrameRate:(double)arg1;
- (id)playerAVAsset;
- (void)setPlayerAVAsset:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)avPlayer;
- (void)setAvPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)compositionView;
- (void)setCompositionView:(id)arg1;
- (id)specialImageView;
- (void)setSpecialImageView:(id)arg1;
- (id)playerBkgItem;
- (void)setPlayerBkgItem:(id)arg1;
- (id)avBkgPlayer;
- (void)setAvBkgPlayer:(id)arg1;
- (id)playerBkgLayer;
- (void)setPlayerBkgLayer:(id)arg1;
- (void)setPlayerBgkView:(id)arg1;
- (id)compositionTask;
- (void)setCompositionTask:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)coverGenerator;
- (void)setCoverGenerator:(id)arg1;
- (void).cxx_destruct;
@end

