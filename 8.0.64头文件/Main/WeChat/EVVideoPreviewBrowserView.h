@interface EVVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, EditVideoLogicItemExt, WCEditVideoViewControllerExt, UIScrollViewDelegate, WCAudioModuleDelegate>
{
    BOOL _isAssetMuted; // +0x8
    NSString * _audioModuleIdentifier; // +0x10
    NSURL * _outputUrl; // +0x18
    SightDraft * sightDraft; // +0x20
    BOOL _isPlaying; // +0x28
    BOOL _isSending; // +0x29
    UIView * _maskView; // +0x30
    SightAssetPreviewView * _playerView; // +0x38
    UIButton * _playBigButton; // +0x40
    UIImageView * m_icloudImageIcon; // +0x48
    UILabel * m_icloudLabel; // +0x50
    UIImageView * m_thumbImageView; // +0x58
    BOOL _isNeedResumeWXMusic; // +0x60
    BOOL _isNeedResumeFinderMinimize; // +0x61
    AVAsset * avAsset; // +0x68
    UIImage * thumbImage; // +0x70
    NSString * assetUrl; // +0x78
    id <EVVideoPreviewBrowserViewDelegate> _m_delegate; // +0x80
    AVMutableVideoComposition * _videoComposition; // +0x88
    id /* block */ _loadAssetSuccessBlock; // +0x90
    unsigned long long _asserPrepareInvokeCount; // +0x98
}
- (id)initWithFrame:(CGRect)arg1 scaleAspectToFill:(BOOL)arg2;
- (void)dealloc;
- (void)loadAsset;
- (void)loadAssetAndPauseAtTime:(struct)arg1;
- (void)seekToTime:(struct)arg1;
- (void)pause;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)arg1;
- (CGRect)getVideoPreviewFrame;
- (void)layoutWithCenter:(CGPoint)arg1;
- (void)initPlayerViewWithScaleAspectToFill:(BOOL)arg1;
- (void)initMaskView;
- (void)initData;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (void)changePlayStatus:(BOOL)arg1;
- (void)updatePreviewFrame:(CGRect)arg1;
- (void)hiddenThumbImageWhenAssetLoadFinish;
- (void)onResigned:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)listenPlayProgressWithCMTime:(struct)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onRestartVideoPlayAt:(double)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (double)listenTimeIntervalInSection;
- (id)getInnerPlayerView;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void)_tryToUpdatePlayerToMute:(BOOL)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)assetUrl;
- (void)setAssetUrl:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id /* block */)loadAssetSuccessBlock;
- (void)setLoadAssetSuccessBlock:(id /* block */)arg1;
- (unsigned long long)asserPrepareInvokeCount;
- (void)setAsserPrepareInvokeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
