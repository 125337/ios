@interface WCPlayerReporter : NSObject
{
    BOOL _isUseMMMP4Parser; // +0x8
    BOOL _bMoovParseSucc; // +0x9
    BOOL _hadReported; // +0xa
    BOOL _bAdjustVolume; // +0xb
    unsigned char _sliderActionHistory; // +0xc
    BOOL _isHaveReportData; // +0xd
    BOOL _bHadStopObserve; // +0xe
    unsigned int _reportId; // +0x10
    unsigned int _recallCountToReady; // +0x14
    int _downloadMode; // +0x18
    int _firstAudioFrameRenderedCost; // +0x1c
    int _firstVideoFrameRenderedCost; // +0x20
    unsigned int _hasPreloadSize; // +0x24
    unsigned int _preloadStatus; // +0x28
    unsigned int _loadingRequestCount; // +0x2c
    int _recievePreDataCost; // +0x30
    int _playerCreateCost; // +0x34
    int _startDownloadCost; // +0x38
    int _recieveM3u8DataCost; // +0x3c
    int _recieveMoovDataCost; // +0x40
    int _filesizeCost; // +0x44
    int _resouceloaderStartCost; // +0x48
    int _fristDataResponseCost; // +0x4c
    int _firstClipOpenCost; // +0x50
    int _firstAudioDecoderStartCost; // +0x54
    int _firstVideoDecoderStartCost; // +0x58
    int _audioDecoderCreateCost; // +0x5c
    int _videoDecoderCreateCost; // +0x60
    int _playerFristPlayStartCost; // +0x64
    int _autoPlayStartCost; // +0x68
    int _experienceCost; // +0x6c
    int _firstPacketReadCost; // +0x70
    int _keyPacketReadCost; // +0x74
    int _playerReadyCost; // +0x78
    int _activeAudioSessionCost; // +0x7c
    int _parseVideoWithCost; // +0x80
    int _playStartCost; // +0x84
    float _bufferPosWhenPlayerReady; // +0x88
    WCPlayerPlayArgs * _playerArgs; // +0x90
    WCPlayerPlaybackInfo * _playbackInfo; // +0x98
    unsigned long long _resourceType; // +0xa0
    long long _schedulerType; // +0xa8
    unsigned long long _startDownloadTime; // +0xb0
    unsigned long long _startPlayTime; // +0xb8
    unsigned long long _playerPrepareStartTimeStamp; // +0xc0
    unsigned long long _playerCreateTime; // +0xc8
    unsigned long long _recievePreDataTime; // +0xd0
    long long _showLoadingCount; // +0xd8
    long long _stalledCount; // +0xe0
    unsigned long long _leavePlayerTime; // +0xe8
    CdnDownloadTaskInfo * _downloadInfo; // +0xf0
    WCDownloadArgsWrap * _downloadArgsWrap; // +0xf8
    NSString * _clientMediaId; // +0x100
    NSString * _nsHostName; // +0x108
    double _initOutputVolume; // +0x110
    double _currOutputVolume; // +0x118
    long long _localServerReinitReason; // +0x120
    NSString * _URI; // +0x128
    NSString * _serverAddress; // +0x130
    NSString * _packetNoReceiveFrame; // +0x138
    long long _audioDecoderType; // +0x140
    long long _videoDecoderType; // +0x148
    unsigned long long _responsedDataWhenPlayerReady; // +0x150
}
- (long long)structuredEventPipType;
- (BOOL)structuredEventIsHLS;
- (id)structuredEventExptParams;
- (id)structuredEventBizParams;
- (id)structuredEventMediaInfoParams;
- (id)structuredEventFixedFields;
- (void)reportStructuredEventWithDict:(id)arg1 eventType:(unsigned int)arg2;
- (int)structuredEventNetworkSpeed;
- (id)structuredEventNetworkParams;
- (id)structuredEventActionParams;
- (void)structuredEventBufferCount:(unsigned long long *)arg1 totalLen:(unsigned long long *)arg2;
- (void)reportBufferingEndEventWithBufferEvent:(id)arg1;
- (void)reportErrorEventWithErrorType:(unsigned long long)arg1 errorCode:(long long)arg2 isRetry:(BOOL)arg3;
- (void)reportPlayExitEvent;
- (void)reportExceptionEventWithType:(long long)arg1 extInfo:(id)arg2;
- (void)reportWhenPacketNoReceiveFrame;
- (void)reportPlayErrorInfo;
- (void)reportSmoothInfo;
- (unsigned long long)getStartDownloadTime;
- (void)reportStreamPlayInfo;
- (id)calculateBuffersWithStat:(id)arg1;
- (id)getMoovFailReason:(int)arg1;
- (unsigned int)getPlayLenPerSec;
- (void)reportWhenUserSeekTo:(double)arg1;
- (void)onPlayerStart;
- (void)updateClickToStartTime;
- (void)reportWhenStartPlayer;
- (void)onStartDownload;
- (void)onRecieveM3u8Data;
- (void)onRecieveMoovData;
- (void)onRecievePreData;
- (void)onGetFileSize;
- (void)onResouceloaderStart;
- (void)onPlayerCreate;
- (void)onResponseFristData;
- (void)onFirstClipOpened;
- (void)onFirstAudioDecoderStart;
- (void)onFirstVideoDecoderStart;
- (void)onAudioDecoderCreateWithType:(long long)arg1;
- (void)onVideoDecoderCreateWithType:(long long)arg1;
- (void)onFirstAudioFrameRendered;
- (void)onFirstVideoFrameRendered;
- (void)onFirstPacketRead;
- (void)onKeyPacketRead;
- (void)onPlayerReady;
- (void)onPlayerPlayStart;
- (void)onActiveAudioSessionWithCost:(int)arg1;
- (void)onParseVideoWithCost:(unsigned long long)arg1;
- (void)onStartPlay:(float)arg1;
- (void)onStartAutoPlay;
- (void)onParseVideoCodec:(id)arg1;
- (void)onStartDataSourceSwitch:(long long)arg1;
- (void)onDataSourceSwitchSuccess;
- (unsigned int)getReportIdWithSource:(int)arg1 Keys:(id)arg2 FromIdkey:(unsigned int)arg3;
- (id)getNetNameWithType:(unsigned int)arg1;
- (void)reportWhenStateError;
- (void)reportWhenResetPlayer;
- (void)reportWhenResetAndPlaySucc;
- (void)reportWhenMediaServicesWereReset;
- (void)reportResetAndPlaySuccWhenMediaServicesWereReset;
- (void)reportWhenLiklyResourceloaderBug;
- (void)reportWhenLiklyResourceloaderBugAfterSeek;
- (void)reportNotRealPlayWhenPlayerExit;
- (void)reportPlayerResumedInLiklyResourceloaderBug;
- (void)reportResourceloaderBugNotResumeInPreloadDataResp;
- (void)reportWhenResetToSystemInResourceloaderBug;
- (void)reportResetAndPlaySuccInResourceloaderBug;
- (void)reportLoadingPreWhenStopPlayer;
- (void)reportGetDurationFailWhenPlayerReady;
- (void)reportPlayerLeak;
- (void)reportPlayerNoMoreLoadingReq;
- (void)reportStreamingPlayInfoWithIDKey;
- (void)reportNetworkSpeed;
- (void)reportStartPlayCost;
- (void)reportDownloadProxyInitFail;
- (void)reportPlaybackStallCount;
- (void)reportSeekCompleteTimeCost:(unsigned int)arg1;
- (void)reportCheckedPlayerLeak;
- (void)reportMoovParseFail;
- (void)reportMoovParseSuccWithMp4Parser;
- (void)reportMoovParseFailWithMp4Parser;
- (void)onStartPlayer;
- (void)reportWhenResumeDownload;
- (void)reportWhenMediaNotSupported;
- (void)reportWhenDecoderError;
- (void)reportWhenTimeout;
- (void)reportWhenDemuxerError;
- (void)reportDownloadProxyError;
- (void)reportRenderError;
- (void)reportTPGeneralError;
- (void)reportFileRemovedToBuffering;
- (void)reportFileRemovedToDownloadError;
- (void)reportLocalServerReinitWithReason:(long long)arg1;
- (void)reportPermissonDeny;
- (void)reportTPPermissonDeny;
- (void)reportCheckLocalServerReinitFail;
- (void)reportCheckLocalServerReinitSuccess;
- (void)reportSetAutoPipWhenUsingAVPlayer;
- (void)reportWhenBufferingStart:(unsigned long long)arg1;
- (void)report29766WithKey:(id)arg1 value:(id)arg2;
- (unsigned long long)resourceType;
- (unsigned long long)inferResourceType;
- (id)nsHostName;
- (id)getPlayerInfoWith:(id)arg1;
- (id)getCdnReportInfo:(id)arg1;
- (id)getPreloadReportInfo:(id)arg1;
- (unsigned int)moovWaitTime;
- (void)report;
- (id)commonReportInfo;
- (void)customReport;
- (void)reportPlayerInfo;
- (void)resetReportFlag;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (id)playbackInfo;
- (void)setPlaybackInfo:(id)arg1;
- (void)setResourceType:(unsigned long long)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (long long)schedulerType;
- (void)setSchedulerType:(long long)arg1;
- (unsigned long long)startDownloadTime;
- (void)setStartDownloadTime:(unsigned long long)arg1;
- (unsigned int)recallCountToReady;
- (void)setRecallCountToReady:(unsigned int)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (unsigned long long)playerPrepareStartTimeStamp;
- (void)setPlayerPrepareStartTimeStamp:(unsigned long long)arg1;
- (unsigned long long)playerCreateTime;
- (void)setPlayerCreateTime:(unsigned long long)arg1;
- (unsigned long long)recievePreDataTime;
- (void)setRecievePreDataTime:(unsigned long long)arg1;
- (BOOL)isUseMMMP4Parser;
- (void)setIsUseMMMP4Parser:(BOOL)arg1;
- (BOOL)bMoovParseSucc;
- (void)setBMoovParseSucc:(BOOL)arg1;
- (long long)showLoadingCount;
- (void)setShowLoadingCount:(long long)arg1;
- (long long)stalledCount;
- (void)setStalledCount:(long long)arg1;
- (unsigned long long)leavePlayerTime;
- (void)setLeavePlayerTime:(unsigned long long)arg1;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg1;
- (int)downloadMode;
- (void)setDownloadMode:(int)arg1;
- (int)firstAudioFrameRenderedCost;
- (void)setFirstAudioFrameRenderedCost:(int)arg1;
- (int)firstVideoFrameRenderedCost;
- (void)setFirstVideoFrameRenderedCost:(int)arg1;
- (id)downloadArgsWrap;
- (void)setDownloadArgsWrap:(id)arg1;
- (unsigned int)hasPreloadSize;
- (void)setHasPreloadSize:(unsigned int)arg1;
- (unsigned int)preloadStatus;
- (void)setPreloadStatus:(unsigned int)arg1;
- (unsigned int)loadingRequestCount;
- (void)setLoadingRequestCount:(unsigned int)arg1;
- (id)clientMediaId;
- (void)setClientMediaId:(id)arg1;
- (void)setNsHostName:(id)arg1;
- (BOOL)hadReported;
- (void)setHadReported:(BOOL)arg1;
- (double)initOutputVolume;
- (void)setInitOutputVolume:(double)arg1;
- (double)currOutputVolume;
- (void)setCurrOutputVolume:(double)arg1;
- (BOOL)bAdjustVolume;
- (void)setBAdjustVolume:(BOOL)arg1;
- (long long)localServerReinitReason;
- (void)setLocalServerReinitReason:(long long)arg1;
- (unsigned char)sliderActionHistory;
- (void)setSliderActionHistory:(unsigned char)arg1;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)serverAddress;
- (void)setServerAddress:(id)arg1;
- (id)packetNoReceiveFrame;
- (void)setPacketNoReceiveFrame:(id)arg1;
- (int)recievePreDataCost;
- (void)setRecievePreDataCost:(int)arg1;
- (int)playerCreateCost;
- (void)setPlayerCreateCost:(int)arg1;
- (int)startDownloadCost;
- (void)setStartDownloadCost:(int)arg1;
- (int)recieveM3u8DataCost;
- (void)setRecieveM3u8DataCost:(int)arg1;
- (int)recieveMoovDataCost;
- (void)setRecieveMoovDataCost:(int)arg1;
- (int)filesizeCost;
- (void)setFilesizeCost:(int)arg1;
- (int)resouceloaderStartCost;
- (void)setResouceloaderStartCost:(int)arg1;
- (int)fristDataResponseCost;
- (void)setFristDataResponseCost:(int)arg1;
- (int)firstClipOpenCost;
- (void)setFirstClipOpenCost:(int)arg1;
- (int)firstAudioDecoderStartCost;
- (void)setFirstAudioDecoderStartCost:(int)arg1;
- (int)firstVideoDecoderStartCost;
- (void)setFirstVideoDecoderStartCost:(int)arg1;
- (int)audioDecoderCreateCost;
- (void)setAudioDecoderCreateCost:(int)arg1;
- (int)videoDecoderCreateCost;
- (void)setVideoDecoderCreateCost:(int)arg1;
- (int)playerFristPlayStartCost;
- (void)setPlayerFristPlayStartCost:(int)arg1;
- (int)autoPlayStartCost;
- (void)setAutoPlayStartCost:(int)arg1;
- (int)experienceCost;
- (void)setExperienceCost:(int)arg1;
- (int)firstPacketReadCost;
- (void)setFirstPacketReadCost:(int)arg1;
- (int)keyPacketReadCost;
- (void)setKeyPacketReadCost:(int)arg1;
- (int)playerReadyCost;
- (void)setPlayerReadyCost:(int)arg1;
- (int)activeAudioSessionCost;
- (void)setActiveAudioSessionCost:(int)arg1;
- (int)parseVideoWithCost;
- (void)setParseVideoWithCost:(int)arg1;
- (int)playStartCost;
- (void)setPlayStartCost:(int)arg1;
- (BOOL)isHaveReportData;
- (void)setIsHaveReportData:(BOOL)arg1;
- (long long)audioDecoderType;
- (void)setAudioDecoderType:(long long)arg1;
- (long long)videoDecoderType;
- (void)setVideoDecoderType:(long long)arg1;
- (unsigned long long)responsedDataWhenPlayerReady;
- (void)setResponsedDataWhenPlayerReady:(unsigned long long)arg1;
- (float)bufferPosWhenPlayerReady;
- (void)setBufferPosWhenPlayerReady:(float)arg1;
- (BOOL)bHadStopObserve;
- (void)setBHadStopObserve:(BOOL)arg1;
- (void).cxx_destruct;
@end
