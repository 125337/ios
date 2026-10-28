@interface SightView : UIView <SightPlayerViewDelegate, WCStateMachineDelegate, SightIconViewDelegate, MMAVPlayerItem, UIGestureRecognizerDelegate, IVOIPUILogicMgrExt, SightPlayerNotifyExt, VideoProgressBarDelegate, IVideoExt>
{
    BOOL _disabled; // +0x8
    BOOL _coverMaskHidden; // +0x9
    BOOL _disableResumeMusicPlayAfterPause; // +0xa
    BOOL _shouldSkipStackOrResume; // +0xb
    BOOL _fullScreenPlay; // +0xc
    BOOL _forceMute; // +0xd
    BOOL _managedByMMAVPlayerMgr; // +0xe
    BOOL _wasPlayingBeforeClearPlayerView; // +0xf
    BOOL _bUseVideoStreamPlayView; // +0x10
    BOOL _bShouldResumeWhenSeekEnd; // +0x11
    id <SightViewDelegate> _delegate; // +0x18
    unsigned long long _scene; // +0x20
    NSString * _thumbImagePath; // +0x28
    UIImage * _thumbImage; // +0x30
    NSString * _videoPath; // +0x38
    NSString * _cpKey; // +0x40
    long long _playStatus; // +0x48
    double _progress; // +0x50
    UIColor * _coverMaskBackgroundColor; // +0x58
    VideoProgressBar * _progressBar; // +0x60
    unsigned long long _audioCategroy; // +0x68
    CMessageWrap * _m_oMessageWrap; // +0x70
    WCMediaItem * _m_oWCMediaItem; // +0x78
    SightIconView * _iconView; // +0x80
    MMProgressViewEx * _progressView; // +0x88
    UIView * _tapgGestureView; // +0x90
    UITapGestureRecognizer * _tapGestureOnIconView; // +0x98
    SightPlayerView * _playerView; // +0xa0
    UILabel * _hintLabel; // +0xa8
    UIView * _coverMask; // +0xb0
    long long _currentMaskType; // +0xb8
    NSString * _currentHintText; // +0xc0
    UIImageView * _thumbImageView; // +0xc8
    MMAVPlayerItemWrap * _playerWrap; // +0xd0
    WCStateMachine * _stateMachine; // +0xd8
    CGSize _iconViewSize; // +0xe0
}
- (id)init;
- (id)initWithManagedByMMAVPlayerMgr:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 managedByMMAVPlayerMgr:(BOOL)arg2;
- (void)setStateMachine;
- (void)activate;
- (void)resetStateMachine;
- (void)setFrame:(CGRect)arg1;
- (id)iconView;
- (id)progressView;
- (void)animateHideDownloadingView;
- (void)tryShowDownloadingView;
- (id)hintLabel;
- (id)coverMask;
- (id)thumbImageView;
- (id)getSightPlayerView;
- (void)initSightPlayView;
- (id)playerView;
- (id)playerWrap;
- (void)setDisabled:(BOOL)arg1;
- (void)dealloc;
- (void)hideThumbImageView:(BOOL)arg1;
- (void)hidePlayerView:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTapOnIconView:(id)arg1;
- (void)setCoverMaskHidden:(BOOL)arg1;
- (void)setCoverMaskBackgroundColor:(id)arg1;
- (void)setDisableResumeMusicPlayAfterPause:(BOOL)arg1;
- (void)setDisablePlayerStatusTimerCheck:(BOOL)arg1;
- (BOOL)disablePlayerStatusTimerCheck;
- (void)setShouldSkipStackOrResume:(BOOL)arg1;
- (void)setScene:(unsigned long long)arg1;
- (long long)playStatus;
- (void)setContentMode:(long long)arg1;
- (void)setThumbImagePath:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (void)setThumbImageHidden:(BOOL)arg1;
- (void)setCpKey:(id)arg1;
- (void)tryToReset;
- (BOOL)isActive;
- (BOOL)tryToWaitForDownload;
- (BOOL)isWaitingForDownload;
- (BOOL)tryToConnectForDownload;
- (BOOL)isConnecting;
- (BOOL)tryToDownloadVideo;
- (BOOL)isDownloadingVideo;
- (void)didFailToDownloadVideo;
- (BOOL)isFailedToDownloadVideo;
- (void)tryToWaitForUpload;
- (void)tryToConnectForUpload;
- (BOOL)tryToUploadVideo;
- (void)didUploadVideo;
- (void)didFailToUploadVideo;
- (BOOL)tryToEnterFlowControl;
- (BOOL)isInFlowControl;
- (void)tryToSetProgress:(double)arg1;
- (void)tryToSetProgressStep:(double)arg1;
- (void)setIconViewSize:(CGSize)arg1;
- (void)setIconViewHidden:(BOOL)arg1;
- (void)setHintViewHidden:(BOOL)arg1;
- (void)setLoadingViewHidden:(BOOL)arg1;
- (void)setHintText:(id)arg1;
- (void)setHintTextColor:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)tryToSetVideoPath:(id)arg1;
- (void)tryToDisable;
- (BOOL)isReadyToPlay;
- (void)tryToPlayWithSound:(BOOL)arg1;
- (void)tryToPlayWithSound:(BOOL)arg1 forceUsingAVPlayer:(BOOL)arg2;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 audioCategory:(unsigned long long)arg3;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 forceUsingAVPlayer:(BOOL)arg3;
- (void)tryToPlayWithSound:(BOOL)arg1 hideCoverWithAnimation:(BOOL)arg2 forceUsingAVPlayer:(BOOL)arg3 audioCategory:(unsigned long long)arg4;
- (BOOL)isPlaying;
- (struct)getCurrentPlaybackTime;
- (void)tryToSavePlayedTime;
- (void)tryToReportKVArgs:(id)arg1;
- (unsigned long long)initPlayViewAndStartDownload;
- (void)tryToSeekToStartTime;
- (void)tryToSeekToTime:(float)arg1;
- (void)tryToPause;
- (void)tryToPauseWithShowThumb:(BOOL)arg1;
- (void)tryToStop;
- (void)tryToStopImmediately;
- (BOOL)isMute;
- (void)killPlayerWrap;
- (void)clearPlayerView;
- (void)clear;
- (void)setProgress:(double)arg1;
- (void)setVideoPath:(id)arg1;
- (void)playWithMute:(BOOL)arg1 forceUsingAVPlayer:(BOOL)arg2 audioCategory:(unsigned long long)arg3;
- (BOOL)shouldResetThumbImageContentModeWhenUsePlayerLayerViewOrPreview:(BOOL)arg1;
- (void)pauseForce:(BOOL)arg1;
- (void)pauseWithShowThumb:(BOOL)arg1 bForcePause:(BOOL)arg2;
- (void)stop;
- (void)seekToTime:(float)arg1;
- (void)performLoadItem:(id)arg1;
- (void)performPauseForce:(BOOL)arg1;
- (void)performSilentPlay;
- (void)silentPlayImmediately;
- (BOOL)performFullLoad;
- (BOOL)performFullPlay;
- (BOOL)performFullPlayWithMute:(BOOL)arg1;
- (BOOL)performClear;
- (void)willStack;
- (void)onResume;
- (void)setM_oMessageWrap:(id)arg1;
- (void)setM_oWCMediaItem:(id)arg1;
- (BOOL)onPlayEnd:(BOOL)arg1;
- (void)onItemCleared;
- (void)onStack;
- (void)onResumeSightPlayerView:(id)arg1;
- (void)onVideoSizeUpdate:(CGSize)arg1;
- (void)onSightDurationUpdate:(struct)arg1;
- (BOOL)shouldVideoLayerRasterize;
- (void)onProgressEnd;
- (void)tryToPlayVideo;
- (void)showVideoLoadingView;
- (void)hideVideoLoadingView;
- (void)startToPlayVideo;
- (void)videoDownloadErrorExpired:(BOOL)arg1;
- (void)setThumbImageViewHidden:(BOOL)arg1;
- (void)setPlayerLayerContentMode:(long long)arg1 disableAnimation:(BOOL)arg2;
- (id)stateMachine;
- (BOOL)isCurrentStateNameContainedInStates:(id)arg1;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)setMaskType:(long long)arg1 hintText:(id)arg2 afterDelay:(double)arg3;
- (void)showCurrentMaskType;
- (void)showCurrentHintText;
- (void)showMaskType:(long long)arg1 animated:(BOOL)arg2;
- (void)setFullScreenPlay:(BOOL)arg1;
- (void)onProgressBarHidden;
- (void)setProgressBar:(id)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onPauseOrStop;
- (void)onServiceEnterBackground:(id)arg1;
- (void)onServiceEnterForeground:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)notifySightPlayerContinuePlay;
- (void)OnVideoThumbDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)scene;
- (id)thumbImagePath;
- (id)thumbImage;
- (id)videoPath;
- (id)cpKey;
- (BOOL)isDisabled;
- (void)setPlayStatus:(long long)arg1;
- (double)progress;
- (BOOL)coverMaskHidden;
- (id)coverMaskBackgroundColor;
- (BOOL)disableResumeMusicPlayAfterPause;
- (BOOL)shouldSkipStackOrResume;
- (id)progressBar;
- (BOOL)fullScreenPlay;
- (BOOL)forceMute;
- (void)setForceMute:(BOOL)arg1;
- (unsigned long long)audioCategroy;
- (void)setAudioCategroy:(unsigned long long)arg1;
- (id)m_oMessageWrap;
- (id)m_oWCMediaItem;
- (BOOL)managedByMMAVPlayerMgr;
- (void)setManagedByMMAVPlayerMgr:(BOOL)arg1;
- (void)setIconView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (id)tapgGestureView;
- (void)setTapgGestureView:(id)arg1;
- (id)tapGestureOnIconView;
- (void)setTapGestureOnIconView:(id)arg1;
- (CGSize)iconViewSize;
- (void)setPlayerView:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setCoverMask:(id)arg1;
- (long long)currentMaskType;
- (void)setCurrentMaskType:(long long)arg1;
- (id)currentHintText;
- (void)setCurrentHintText:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (void)setPlayerWrap:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (BOOL)wasPlayingBeforeClearPlayerView;
- (void)setWasPlayingBeforeClearPlayerView:(BOOL)arg1;
- (BOOL)bUseVideoStreamPlayView;
- (void)setBUseVideoStreamPlayView:(BOOL)arg1;
- (BOOL)bShouldResumeWhenSeekEnd;
- (void)setBShouldResumeWhenSeekEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
