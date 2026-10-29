@interface WCPlayerPlaybackInfo : NSObject
{
    BOOL _isPictureInPicturing; // +0x8
    BOOL _bReadyToPlay; // +0x9
    BOOL _mute; // +0xa
    BOOL _bSeeking; // +0xb
    BOOL _isDataSourceSwitching; // +0xc
    BOOL _isPlayToEnd; // +0xd
    BOOL _fromQueuePreCreate; // +0xe
    BOOL _isWaitingPauseBufferingCompleted; // +0xf
    unsigned int _taskId; // +0x10
    int _playerType; // +0x14
    int _resourceType; // +0x18
    unsigned int _playCount; // +0x1c
    unsigned int _loopCount; // +0x20
    unsigned int _playerCreateTime; // +0x24
    int _preloadPriority; // +0x28
    float _duration; // +0x2c
    float _bitrate; // +0x30
    unsigned int _dataSwitchCount; // +0x34
    unsigned int _dataSwitchSuccCount; // +0x38
    float _playablePos; // +0x3c
    unsigned int _bufferSeq; // +0x40
    id <WCPlayerPlaybackInfoDelegate> _delegate; // +0x48
    unsigned long long _exitType; // +0x50
    WCPlayerPlayArgs * _playArgs; // +0x58
    WCDownloadArgsWrap * _currentArgsWrap; // +0x60
    double _totalPlaybackTime; // +0x68
    double _playbackTime; // +0x70
    double _limitBufferLength; // +0x78
    long long _switchMode; // +0x80
    double _sourceSwitchStartTime; // +0x88
    double _sourceSwitchEndTime; // +0x90
    WCDownloadArgsWrap * _sourceSwitchingArgsWrap; // +0x98
    long long _totalBufferTime; // +0xa0
    unsigned long long _bufferState; // +0xa8
    WCPlayerBufferEvent * _bufferEmptyEvent; // +0xb0
    NSMutableArray * _arrBufferEmptyEvent; // +0xb8
    unsigned long long _playerErrorType; // +0xc0
    long long _playerErrorCode; // +0xc8
    NSString * _playerErrorDesc; // +0xd0
    unsigned long long _initialProcess; // +0xd8
    unsigned long long _lastState; // +0xe0
    unsigned long long _playerState; // +0xe8
    unsigned long long _processState; // +0xf0
    unsigned long long _recoverState; // +0xf8
    unsigned long long _currentDataRespOffset; // +0x100
    WCPlayerVideoMetadata * _mediadata; // +0x108
    unsigned long long _length; // +0x110
    long long _videoFrameRate; // +0x118
    long long _videorate; // +0x120
    long long _audiorate; // +0x128
    NSString * _vcodec; // +0x130
    NSString * _acodec; // +0x138
    NSMutableDictionary * _dicNetworkInfo; // +0x140
    double _playbackTargetBufferLength; // +0x148
    NSDate * _lastCreatedDate; // +0x150
    WCResourceloaderState * _resourceloaderBugState; // +0x158
    WCPlayerVVCInfo * _vvcInfo; // +0x160
    WCPlayerDownloadInfo * _downloadInfo; // +0x168
    CGSize _presentationSize; // +0x170
    CGAffineTransform _preferredTransform; // +0x180
}
- (id)initWithArgs:(id)arg1;
- (id)resourceloaderBugState;
- (id)arrBufferEmptyEvent;
- (BOOL)isVideoPlayStopped;
- (void)onStartBufferingWithType:(unsigned long long)arg1;
- (void)onBufferingEnd;
- (double)getBufferDurationToPlay;
- (void)checkPlayerFilePermission;
- (BOOL)isBuffering;
- (id)getAllBufferEvent;
- (unsigned int)bufferredCount;
- (BOOL)setPlayerState:(unsigned long long)arg1;
- (void)onPlayerStoped;
- (void)updateDecodeFrmCnt:(long long)arg1 renderFrmCnt:(long long)arg2 tsGap:(unsigned long long)arg3;
- (BOOL)setInitialProcess:(unsigned long long)arg1;
- (BOOL)isRecoverStateHadResetedPlayer;
- (void)setProcessState:(unsigned long long)arg1;
- (double)getMaxPlayProgress;
- (double)getMaxPlayPosition;
- (id)getMediaIdentifier;
- (id)getResourceUrl;
- (id)getResourceRefer;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (void)setLength:(unsigned long long)arg1;
- (void)setDuration:(float)arg1;
- (double)getExtraTime;
- (unsigned long long)getExtraLength;
- (unsigned long long)getExceedLength;
- (unsigned long long)getDownloadLength;
- (void)resetPlaybackInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg1;
- (int)playerType;
- (void)setPlayerType:(int)arg1;
- (int)resourceType;
- (void)setResourceType:(int)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (id)playArgs;
- (void)setPlayArgs:(id)arg1;
- (id)currentArgsWrap;
- (void)setCurrentArgsWrap:(id)arg1;
- (BOOL)isPictureInPicturing;
- (void)setIsPictureInPicturing:(BOOL)arg1;
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (unsigned int)loopCount;
- (void)setLoopCount:(unsigned int)arg1;
- (double)totalPlaybackTime;
- (void)setTotalPlaybackTime:(double)arg1;
- (unsigned int)playerCreateTime;
- (void)setPlayerCreateTime:(unsigned int)arg1;
- (int)preloadPriority;
- (void)setPreloadPriority:(int)arg1;
- (BOOL)bReadyToPlay;
- (void)setBReadyToPlay:(BOOL)arg1;
- (BOOL)mute;
- (void)setMute:(BOOL)arg1;
- (double)playbackTime;
- (void)setPlaybackTime:(double)arg1;
- (double)limitBufferLength;
- (void)setLimitBufferLength:(double)arg1;
- (BOOL)bSeeking;
- (void)setBSeeking:(BOOL)arg1;
- (BOOL)isDataSourceSwitching;
- (void)setIsDataSourceSwitching:(BOOL)arg1;
- (long long)switchMode;
- (void)setSwitchMode:(long long)arg1;
- (double)sourceSwitchStartTime;
- (void)setSourceSwitchStartTime:(double)arg1;
- (double)sourceSwitchEndTime;
- (void)setSourceSwitchEndTime:(double)arg1;
- (id)sourceSwitchingArgsWrap;
- (void)setSourceSwitchingArgsWrap:(id)arg1;
- (long long)totalBufferTime;
- (void)setTotalBufferTime:(long long)arg1;
- (unsigned long long)bufferState;
- (void)setBufferState:(unsigned long long)arg1;
- (id)bufferEmptyEvent;
- (void)setBufferEmptyEvent:(id)arg1;
- (void)setArrBufferEmptyEvent:(id)arg1;
- (unsigned long long)playerErrorType;
- (void)setPlayerErrorType:(unsigned long long)arg1;
- (long long)playerErrorCode;
- (void)setPlayerErrorCode:(long long)arg1;
- (id)playerErrorDesc;
- (void)setPlayerErrorDesc:(id)arg1;
- (unsigned long long)initialProcess;
- (unsigned long long)lastState;
- (unsigned long long)playerState;
- (unsigned long long)processState;
- (BOOL)isPlayToEnd;
- (void)setIsPlayToEnd:(BOOL)arg1;
- (unsigned long long)recoverState;
- (void)setRecoverState:(unsigned long long)arg1;
- (unsigned long long)currentDataRespOffset;
- (void)setCurrentDataRespOffset:(unsigned long long)arg1;
- (id)mediadata;
- (void)setMediadata:(id)arg1;
- (float)duration;
- (CGSize)presentationSize;
- (void)setPresentationSize:(CGSize)arg1;
- (unsigned long long)length;
- (float)bitrate;
- (void)setBitrate:(float)arg1;
- (long long)videoFrameRate;
- (void)setVideoFrameRate:(long long)arg1;
- (long long)videorate;
- (void)setVideorate:(long long)arg1;
- (long long)audiorate;
- (void)setAudiorate:(long long)arg1;
- (id)vcodec;
- (void)setVcodec:(id)arg1;
- (id)acodec;
- (void)setAcodec:(id)arg1;
- (id)dicNetworkInfo;
- (void)setDicNetworkInfo:(id)arg1;
- (CGAffineTransform)preferredTransform;
- (void)setPreferredTransform:(CGAffineTransform)arg1;
- (BOOL)fromQueuePreCreate;
- (void)setFromQueuePreCreate:(BOOL)arg1;
- (unsigned int)dataSwitchCount;
- (void)setDataSwitchCount:(unsigned int)arg1;
- (unsigned int)dataSwitchSuccCount;
- (void)setDataSwitchSuccCount:(unsigned int)arg1;
- (float)playablePos;
- (void)setPlayablePos:(float)arg1;
- (double)playbackTargetBufferLength;
- (void)setPlaybackTargetBufferLength:(double)arg1;
- (id)lastCreatedDate;
- (void)setLastCreatedDate:(id)arg1;
- (void)setResourceloaderBugState:(id)arg1;
- (id)vvcInfo;
- (void)setVvcInfo:(id)arg1;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg1;
- (BOOL)isWaitingPauseBufferingCompleted;
- (void)setIsWaitingPauseBufferingCompleted:(BOOL)arg1;
- (unsigned int)bufferSeq;
- (void)setBufferSeq:(unsigned int)arg1;
- (void).cxx_destruct;
@end

