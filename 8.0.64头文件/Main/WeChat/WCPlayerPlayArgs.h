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
    BOOL _isCallbackCurrentPixelBuffer; // +0x1f
    BOOL _isOpenAudioFrameProcessCallback; // +0x20
    BOOL _isOpenWaveAudioHAidProcess; // +0x21
    BOOL _isPlayerSwitchScene; // +0x22
    BOOL _bOpenSEICallback; // +0x23
    BOOL _enableRenderOptYuv420; // +0x24
    unsigned int _taskId; // +0x28
    float _playbackRate; // +0x2c
    float _minBufferLength; // +0x30
    float _maxBufferLength; // +0x34
    float _minBufferWhenNoDatas; // +0x38
    float _periodicTimeInterval; // +0x3c
    float _initialSeekPos; // +0x40
    float _playBeginPos; // +0x44
    float _playEndPos; // +0x48
    float _lazyCheckBufferTime; // +0x4c
    int _waveHAidMode; // +0x50
    int _waveHAidDevice; // +0x54
    int _enableRendererSharpen; // +0x58
    int _enableRendererLucid; // +0x5c
    int _enableRendererClarity; // +0x60
    int _enableRendererColorLUT; // +0x64
    int _audioModuleScene; // +0x68
    float _minTargetBuffer; // +0x6c
    float _maxTargetBuffer; // +0x70
    unsigned long long _playerMode; // +0x78
    unsigned long long _playerScene; // +0x80
    NSString * _playerIdentifier; // +0x88
    double _livePhotoAnimationScale; // +0x90
    double _pipDuration; // +0x98
    NSString * _streamTmpPath; // +0xa0
    NSString * _formatPath; // +0xa8
    UIImage * _thumbImage; // +0xb0
    NSArray * _arrBufferTime; // +0xb8
    long long _contentMode; // +0xc0
    NSMutableDictionary * _dicParams; // +0xc8
    NSMutableDictionary * _dicReportParams; // +0xd0
    WCDownloadArgsWrap * _downloadArgs; // +0xd8
    NSMutableArray * _arrDownloadArgs; // +0xe0
    NSString * _nsExtInfo; // +0xe8
    WCPlayerReporter * _reporter; // +0xf0
    NSString * _rendererColorLUTFilePath; // +0xf8
    long long _decoderStrategy; // +0x100
    AVPlayerItem * _playerItem; // +0x108
    WCPlayerFairPlayInfo * _fairPlayInfo; // +0x110
    NSString * _hlsPemKey; // +0x118
    double _preferredPeakBitRate; // +0x120
    NSDictionary * _pixelBufferAttributes; // +0x128
    CGSize _pipSize; // +0x130
    CGSize _videoSize; // +0x140
    WCShowArea _showArea; // +0x150
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
- (double)livePhotoAnimationScale;
- (void)setLivePhotoAnimationScale:(double)arg1;
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
- (id)dicReportParams;
- (void)setDicReportParams:(id)arg1;
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
- (BOOL)isCallbackCurrentPixelBuffer;
- (void)setIsCallbackCurrentPixelBuffer:(BOOL)arg1;
- (BOOL)isOpenAudioFrameProcessCallback;
- (void)setIsOpenAudioFrameProcessCallback:(BOOL)arg1;
- (BOOL)isOpenWaveAudioHAidProcess;
- (void)setIsOpenWaveAudioHAidProcess:(BOOL)arg1;
- (int)waveHAidMode;
- (void)setWaveHAidMode:(int)arg1;
- (int)waveHAidDevice;
- (void)setWaveHAidDevice:(int)arg1;
- (int)enableRendererSharpen;
- (void)setEnableRendererSharpen:(int)arg1;
- (int)enableRendererLucid;
- (void)setEnableRendererLucid:(int)arg1;
- (int)enableRendererClarity;
- (void)setEnableRendererClarity:(int)arg1;
- (int)enableRendererColorLUT;
- (void)setEnableRendererColorLUT:(int)arg1;
- (id)rendererColorLUTFilePath;
- (void)setRendererColorLUTFilePath:(id)arg1;
- (long long)decoderStrategy;
- (void)setDecoderStrategy:(long long)arg1;
- (BOOL)isPlayerSwitchScene;
- (void)setIsPlayerSwitchScene:(BOOL)arg1;
- (BOOL)bOpenSEICallback;
- (void)setBOpenSEICallback:(BOOL)arg1;
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
- (id)pixelBufferAttributes;
- (void)setPixelBufferAttributes:(id)arg1;
- (int)audioModuleScene;
- (void)setAudioModuleScene:(int)arg1;
- (float)minTargetBuffer;
- (void)setMinTargetBuffer:(float)arg1;
- (float)maxTargetBuffer;
- (void)setMaxTargetBuffer:(float)arg1;
- (void).cxx_destruct;
@end
