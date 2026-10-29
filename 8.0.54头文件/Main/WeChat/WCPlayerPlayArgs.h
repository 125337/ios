@interface WCPlayerPlayArgs : NSObject
{
    BOOL _isFetchAllDataWhilePlaying; // +0x8
    BOOL _bLivePhotoMode; // +0x9
    BOOL _bPlayLiveFeedBack; // +0xa
    BOOL _bAutoPlay; // +0xb
    BOOL _mute; // +0xc
    BOOL _followSystemMute; // +0xd
    BOOL _isRegisterAudioModule; // +0xe
    BOOL _bLoop; // +0xf
    BOOL _bKeepAtLastFrame; // +0x10
    BOOL _isCloseNetworkScheduler; // +0x11
    BOOL _bAccurateSeek; // +0x12
    BOOL _bShouldResumeMusicAtPause; // +0x13
    BOOL _allowsExternalPlayback; // +0x14
    BOOL _automaticallyMutesWhileExternalPlaybackMode; // +0x15
    BOOL _interruptedWhenAppResignActive; // +0x16
    BOOL _bForceUseSystemPlayer; // +0x17
    BOOL _bForceUseThumbPlayer; // +0x18
    BOOL _isUseSystemDownloader; // +0x19
    BOOL _bCaluDecStuck; // +0x1a
    BOOL _isAutoChangeAudioSessionCategory; // +0x1b
    BOOL _isOpenAutoPictureInPicture; // +0x1c
    BOOL _isOpenBackgroundVideoRender; // +0x1d
    BOOL _isKeepPictureInPictureStatusWhenPlayerStopped; // +0x1e
    BOOL _isPlayerSwitchScene; // +0x1f
    BOOL _bOpenSEICallback; // +0x20
    BOOL _isCallbackCurrentPixelBuffer; // +0x21
    BOOL _enableRenderOptYuv420; // +0x22
    BOOL _isAddPlayerItemOutput; // +0x23
    unsigned int _taskId; // +0x24
    float _playbackRate; // +0x28
    float _minBufferLength; // +0x2c
    float _maxBufferLength; // +0x30
    float _minBufferWhenNoDatas; // +0x34
    float _periodicTimeInterval; // +0x38
    float _initialSeekPos; // +0x3c
    float _playBeginPos; // +0x40
    float _playEndPos; // +0x44
    float _lazyCheckBufferTime; // +0x48
    int _enableRendererSharpen; // +0x4c
    int _enableRendererLucid; // +0x50
    int _enableRendererClarity; // +0x54
    float _minTargetBuffer; // +0x58
    float _maxTargetBuffer; // +0x5c
    unsigned long long _playerMode; // +0x60
    unsigned long long _playerScene; // +0x68
    NSString * _playerIdentifier; // +0x70
    double _pipDuration; // +0x78
    NSString * _streamTmpPath; // +0x80
    NSString * _formatPath; // +0x88
    UIImage * _thumbImage; // +0x90
    NSArray * _arrBufferTime; // +0x98
    long long _contentMode; // +0xa0
    NSMutableDictionary * _dicParams; // +0xa8
    WCDownloadArgsWrap * _downloadArgs; // +0xb0
    NSMutableArray * _arrDownloadArgs; // +0xb8
    NSString * _nsExtInfo; // +0xc0
    WCPlayerReporter * _reporter; // +0xc8
    long long _decoderStrategy; // +0xd0
    AVPlayerItem * _playerItem; // +0xd8
    WCPlayerFairPlayInfo * _fairPlayInfo; // +0xe0
    NSString * _hlsPemKey; // +0xe8
    double _preferredPeakBitRate; // +0xf0
    CGSize _pipSize; // +0xf8
    CGSize _videoSize; // +0x108
    WCShowArea _showArea; // +0x118
}
- (id)init;
- (void)setIsOpenAutoPictureInPicture:(BOOL)arg1;
- (id)arrBufferTime;
- (BOOL)isFairPlay;
- (void)resetMinBufferLength:(float)arg1;
- (void)resetMaxBufferLength:(float)arg1;
- (BOOL)shouldMuteForExternalPlaybackMode;
- (BOOL)isUseSystemDownloader;
- (float)minBufferLength;
- (float)maxBufferLength;
- (id)description;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (unsigned long long)playerMode;
- (void)setPlayerMode:(unsigned long long)arg1;
- (unsigned long long)playerScene;
- (void)setPlayerScene:(unsigned long long)arg1;
- (id)playerIdentifier;
- (void)setPlayerIdentifier:(id)arg1;
- (BOOL)isFetchAllDataWhilePlaying;
- (void)setIsFetchAllDataWhilePlaying:(BOOL)arg1;
- (BOOL)bLivePhotoMode;
- (void)setBLivePhotoMode:(BOOL)arg1;
- (BOOL)bPlayLiveFeedBack;
- (void)setBPlayLiveFeedBack:(BOOL)arg1;
- (CGSize)pipSize;
- (void)setPipSize:(CGSize)arg1;
- (double)pipDuration;
- (void)setPipDuration:(double)arg1;
- (id)streamTmpPath;
- (void)setStreamTmpPath:(id)arg1;
- (id)formatPath;
- (void)setFormatPath:(id)arg1;
- (BOOL)bAutoPlay;
- (void)setBAutoPlay:(BOOL)arg1;
- (BOOL)mute;
- (void)setMute:(BOOL)arg1;
- (BOOL)followSystemMute;
- (void)setFollowSystemMute:(BOOL)arg1;
- (BOOL)isRegisterAudioModule;
- (void)setIsRegisterAudioModule:(BOOL)arg1;
- (BOOL)bLoop;
- (void)setBLoop:(BOOL)arg1;
- (BOOL)bKeepAtLastFrame;
- (void)setBKeepAtLastFrame:(BOOL)arg1;
- (float)playbackRate;
- (void)setPlaybackRate:(float)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (BOOL)isCloseNetworkScheduler;
- (void)setIsCloseNetworkScheduler:(BOOL)arg1;
- (void)setMinBufferLength:(float)arg1;
- (void)setMaxBufferLength:(float)arg1;
- (float)minBufferWhenNoDatas;
- (void)setMinBufferWhenNoDatas:(float)arg1;
- (void)setArrBufferTime:(id)arg1;
- (float)periodicTimeInterval;
- (void)setPeriodicTimeInterval:(float)arg1;
- (BOOL)bAccurateSeek;
- (void)setBAccurateSeek:(BOOL)arg1;
- (float)initialSeekPos;
- (void)setInitialSeekPos:(float)arg1;
- (float)playBeginPos;
- (void)setPlayBeginPos:(float)arg1;
- (float)playEndPos;
- (void)setPlayEndPos:(float)arg1;
- (WCShowArea)showArea;
- (void)setShowArea:(WCShowArea)arg1;
- (float)lazyCheckBufferTime;
- (void)setLazyCheckBufferTime:(float)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (BOOL)bShouldResumeMusicAtPause;
- (void)setBShouldResumeMusicAtPause:(BOOL)arg1;
- (id)dicParams;
- (void)setDicParams:(id)arg1;
- (id)downloadArgs;
- (void)setDownloadArgs:(id)arg1;
- (id)arrDownloadArgs;
- (void)setArrDownloadArgs:(id)arg1;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)automaticallyMutesWhileExternalPlaybackMode;
- (void)setAutomaticallyMutesWhileExternalPlaybackMode:(BOOL)arg1;
- (id)nsExtInfo;
- (void)setNsExtInfo:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)interruptedWhenAppResignActive;
- (void)setInterruptedWhenAppResignActive:(BOOL)arg1;
- (BOOL)bForceUseSystemPlayer;
- (void)setBForceUseSystemPlayer:(BOOL)arg1;
- (BOOL)bForceUseThumbPlayer;
- (void)setBForceUseThumbPlayer:(BOOL)arg1;
- (void)setIsUseSystemDownloader:(BOOL)arg1;
- (BOOL)bCaluDecStuck;
- (void)setBCaluDecStuck:(BOOL)arg1;
- (BOOL)isAutoChangeAudioSessionCategory;
- (void)setIsAutoChangeAudioSessionCategory:(BOOL)arg1;
- (BOOL)isOpenAutoPictureInPicture;
- (BOOL)isOpenBackgroundVideoRender;
- (void)setIsOpenBackgroundVideoRender:(BOOL)arg1;
- (BOOL)isKeepPictureInPictureStatusWhenPlayerStopped;
- (void)setIsKeepPictureInPictureStatusWhenPlayerStopped:(BOOL)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (int)enableRendererSharpen;
- (void)setEnableRendererSharpen:(int)arg1;
- (int)enableRendererLucid;
- (void)setEnableRendererLucid:(int)arg1;
- (int)enableRendererClarity;
- (void)setEnableRendererClarity:(int)arg1;
- (long long)decoderStrategy;
- (void)setDecoderStrategy:(long long)arg1;
- (BOOL)isPlayerSwitchScene;
- (void)setIsPlayerSwitchScene:(BOOL)arg1;
- (BOOL)bOpenSEICallback;
- (void)setBOpenSEICallback:(BOOL)arg1;
- (BOOL)isCallbackCurrentPixelBuffer;
- (void)setIsCallbackCurrentPixelBuffer:(BOOL)arg1;
- (BOOL)enableRenderOptYuv420;
- (void)setEnableRenderOptYuv420:(BOOL)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)fairPlayInfo;
- (void)setFairPlayInfo:(id)arg1;
- (id)hlsPemKey;
- (void)setHlsPemKey:(id)arg1;
- (double)preferredPeakBitRate;
- (void)setPreferredPeakBitRate:(double)arg1;
- (BOOL)isAddPlayerItemOutput;
- (void)setIsAddPlayerItemOutput:(BOOL)arg1;
- (float)minTargetBuffer;
- (void)setMinTargetBuffer:(float)arg1;
- (float)maxTargetBuffer;
- (void)setMaxTargetBuffer:(float)arg1;
- (void).cxx_destruct;
@end

