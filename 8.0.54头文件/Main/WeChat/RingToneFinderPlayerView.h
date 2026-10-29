@interface RingToneFinderPlayerView : MMUIView <RingToneVibrateDataSource, WCFinderPlayerControlViewDelegate, WCPlayerDownloaderExt, WCAudioSessionExt, WCPlayerEventExt, WCFinderFeedContentVMExt, RingTonePlayer>
{
    BOOL _customVibrateEnabled; // +0x8
    BOOL _readyToVibrateFlag; // +0x9
    BOOL _isCurrentPlaying; // +0xa
    WCPlayerView * _playerView; // +0x10
    double _finderDuration; // +0x18
    double _finderVideoPosition; // +0x20
    unsigned long long _playTimeStamp; // +0x28
    RingToneVibrateController * _vibrateController; // +0x30
    RingToneDetail * _curRing; // +0x38
    WCFinderPlayerControlView * _playerConfigControlView; // +0x40
    WCFinderDataItem * _dataItem; // +0x48
    WCFinderFeedMediaWrap * _mediaWrap; // +0x50
    WCFinderMediaInfo * _mediaInfo; // +0x58
    NSString * _currentVideoTid; // +0x60
    WCFinderFeedContentVM * _feedContentVM; // +0x68
    UIImageView * _briefImageView; // +0x70
    UIImage * _defaultImage; // +0x78
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)changeFrame:(CGRect)arg1;
- (void)dealloc;
- (void)playRing:(id)arg1;
- (void)playVideoMedia:(id)arg1;
- (void)startToPlay;
- (void)stopPlay;
- (void)pause;
- (void)resume;
- (void)restStatus;
- (id)vibrateController;
- (void)prepareForReuse;
- (void)changeDataSource:(id)arg1 ring:(id)arg2 feedContentVM:(id)arg3;
- (void)stopVideoIfSupport;
- (void)play;
- (void)createPlayerView:(double)arg1;
- (void)playWithParams:(id)arg1;
- (void)pauseVideoIfSupport:(BOOL)arg1;
- (void)pauseVideoIfSupport;
- (double)getCurrentPlayVideoTime;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)contentMediaDidEndPlay;
- (void)seekToTime:(double)arg1;
- (double)currentPlayTime;
- (id)playerConfigControlView;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayToEnd;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)checkPreloadTaskStatus;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)tryDowngradePlay;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)_reloadPlayView:(id)arg1;
- (void)setAllowBackgroundPlay:(BOOL)arg1;
- (BOOL)customVibrateEnabled;
- (void)setCustomVibrateEnabled:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (double)finderDuration;
- (void)setFinderDuration:(double)arg1;
- (double)finderVideoPosition;
- (void)setFinderVideoPosition:(double)arg1;
- (unsigned long long)playTimeStamp;
- (void)setPlayTimeStamp:(unsigned long long)arg1;
- (void)setVibrateController:(id)arg1;
- (BOOL)readyToVibrateFlag;
- (void)setReadyToVibrateFlag:(BOOL)arg1;
- (id)curRing;
- (void)setCurRing:(id)arg1;
- (void)setPlayerConfigControlView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (BOOL)isCurrentPlaying;
- (void)setIsCurrentPlaying:(BOOL)arg1;
- (id)currentVideoTid;
- (void)setCurrentVideoTid:(id)arg1;
- (id)feedContentVM;
- (void)setFeedContentVM:(id)arg1;
- (id)briefImageView;
- (void)setBriefImageView:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (void).cxx_destruct;
@end

