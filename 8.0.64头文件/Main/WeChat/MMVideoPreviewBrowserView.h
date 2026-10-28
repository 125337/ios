@interface MMVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, FullScreenGestureDelegate, WCAudioModuleDelegate, WCC2CPlayerProgressBarDelegate, MMAssetPickerBrowserViewProtocol>
{
    NSURL * m_originUrl; // +0x8
    AVAsset * m_avAsset; // +0x10
    NSURL * _videoOutputURL; // +0x18
    SightDraft * _sightDraft; // +0x20
    BOOL _isPlaying; // +0x28
    BOOL _isSending; // +0x29
    UIView * _maskView; // +0x30
    SightAssetPreviewView * _playerView; // +0x38
    MMUIButton * _playBigButton; // +0x40
    UIImageView * m_thumbImageView; // +0x48
    WXFullScreenGestureRecognizer * _gestureView; // +0x50
    BOOL _isNeedResumeWXMusic; // +0x58
    BOOL _isNeedResumeFinderMinimize; // +0x59
    BOOL _isAssetMuted; // +0x5a
    NSString * _audioModuleIdentifier; // +0x60
    BOOL requestUneditedAsset; // +0x68
    BOOL shouldPlayWithEditAttr; // +0x69
    BOOL _enablePlayButton; // +0x6a
    BOOL _isAlbumOptimizeClicfgOn; // +0x6b
    id <MMImagePickerControlCenter> controlCenter; // +0x70
    MMAssetInfo * assetInfo; // +0x78
    id <MMAssetPickerBrowserViewDelegate> browserDelegate; // +0x80
    MMAssetPickerBrowserStateInfo * m_stateInfo; // +0x88
    id <WCDragToCloseDelegate> _touchDelegate; // +0x90
    WCC2CPlayerProgressBar * _progressBar; // +0x98
    ColorGradientView * _iCloudBgView; // +0xa0
    MMAssetICloudLoadingView * _iCloudLoadingView; // +0xa8
}
- (id)playerView;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 isAlbumOptimizeClicfgOn:(BOOL)arg2;
- (void)initData;
- (void)initPlayerView;
- (void)initPlayButton;
- (void)initMaskView;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (id)progressBar;
- (void)layoutSubviews;
- (void)layoutProgressBar;
- (void)loadAsset;
- (void)setEnablePlayButton:(BOOL)arg1;
- (void)onBeginToChangePage;
- (void)onOriginSelectChanged;
- (BOOL)isHDRVideo:(id)arg1;
- (void)hideOrShowHDR:(id)arg1;
- (void)_onAssetInfo:(id)arg1 getVideoAssetFinishedWithAsset:(id)arg2 url:(id)arg3 duration:(double)arg4;
- (BOOL)isHDRVideo;
- (void)checkVideo;
- (void)changePlayStatus:(BOOL)arg1 needNotify:(BOOL)arg2;
- (void)OnPlay:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)_onPlayerEnd;
- (void)systemResigned:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void)_tryToUpdatePlayerToMute:(BOOL)arg1;
- (void)onProgressBarChangePlayRate:(float)arg1 currentPlayRate:(float)arg2;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (struct)getCurrentPlaybackTime;
- (void)onPlayButtonClicked;
- (void)onProgressBarHidden;
- (void)onSliderScrubbBegin;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (BOOL)requestUneditedAsset;
- (void)setRequestUneditedAsset:(BOOL)arg1;
- (BOOL)shouldPlayWithEditAttr;
- (void)setShouldPlayWithEditAttr:(BOOL)arg1;
- (id)browserDelegate;
- (void)setBrowserDelegate:(id)arg1;
- (id)stateInfo;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (BOOL)enablePlayButton;
- (void)setProgressBar:(id)arg1;
- (id)iCloudBgView;
- (void)setICloudBgView:(id)arg1;
- (id)iCloudLoadingView;
- (void)setICloudLoadingView:(id)arg1;
- (BOOL)isAlbumOptimizeClicfgOn;
- (void)setIsAlbumOptimizeClicfgOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
