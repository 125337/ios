@interface TPReportPlugin : NSObject <ITPPluginBase, ITPBusinessReportManager>
{
    BOOL _hasReportedComplete; // +0x8
    BOOL _needReportToBeacon; // +0x9
    id <ITPReportWrapper> _beaconReporter; // +0x10
    TPDefaultReportInfo * _infoGetter; // +0x18
    TPWorkerQueue * _reportQueue; // +0x20
    long long _playType; // +0x28
    long long _playerId; // +0x30
    TPReportParamsCommon * _commonParams; // +0x38
    TPReportParamsStepInit * _stepInit; // +0x40
    TPReportParamsStepGetCdnIp * _stepGetCdn; // +0x48
    TPReportParamsStepVideoPrepared * _stepPrepared; // +0x50
    TPReportParamsStepFirstRendered * _stepFirstRendered; // +0x58
    TPReportParamsStepLoadSubTitle * _stepLoadSubtitle; // +0x60
    TPReportParamsStep302 * _step302; // +0x68
    TPReportParamsStepSecondBuffered * _stepSecondBuffered; // +0x70
    TPReportParamsStepSeek * _stepSeek; // +0x78
    TPReportParamsStepPlayComplete * _stepPlayComplete; // +0x80
    TPReportParamsVodEx * _vodExParams; // +0x88
    TPReportParamsLive * _liveParams; // +0x90
    TPReportStepInner * _currentStep; // +0x98
    NSString * _playFlowId; // +0xa0
    unsigned long long _playScene; // +0xa8
    TPPlayerRecord * _playerRecord; // +0xb0
    TPDownloadRecord * _downloadRecord; // +0xb8
    TPMediaRecord * _mediaRecord; // +0xc0
    NSString * _errorCode; // +0xc8
    double _playedDuration; // +0xd0
    TPBufferedRecord * _bufferedRecord; // +0xd8
    TPSeekRecord * _seekRecord; // +0xe0
    TPLiveRecord * _liveRecord; // +0xe8
    TPDiskReadWrite * _diskReadWrite; // +0xf0
    double _samplingRate; // +0xf8
}
- (id)init;
- (void)dealloc;
- (id)diskReadWrite;
- (BOOL)doReportSampling;
- (void)setReportInfoGetter:(id)arg1;
- (void)reportEvent:(unsigned long long)arg1 withParams:(id)arg2;
- (void)setReportSamplingRate:(double)arg1;
- (void)onAttatch;
- (void)onDetach;
- (void)onEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)handlerInvocationWithSEL:(SEL)arg1 eventInfo:(id)arg2;
- (id)logTag;
- (void)handleCreateStartWithUserInfo:(id)arg1;
- (void)handleCreateDoneWithUserInfo:(id)arg1;
- (void)handlePrepareStartWithUserInfo:(id)arg1;
- (void)handlePrepareDoneWithUserInfo:(id)arg1;
- (void)handleFirstFrameRenderedWithUserInfo:(id)arg1;
- (void)handleStopWithUserInfo:(id)arg1;
- (void)handlePlayerErrorWithUserInfo:(id)arg1;
- (void)handleSeekStartWithUserInfo:(id)arg1;
- (void)handleSeekCompleteWithUserInfo:(id)arg1;
- (void)handlePlayCompleteWithUserInfo:(id)arg1;
- (void)handlePlayerReleaseWithUserInfo:(id)arg1;
- (void)handleResetWithUserInfo:(id)arg1;
- (void)handleBufferingStartWithUserInfo:(id)arg1;
- (void)handleBufferingEndWithUserInfo:(id)arg1;
- (void)handleSetPlaySpeedWithUserInfo:(id)arg1;
- (void)handleOnHlsPrivateTagWithUserInfo:(id)arg1;
- (void)handleSelectSubtitleWithUserInfo:(id)arg1;
- (void)handleSelectSubtitleEndWithUserInfo:(id)arg1;
- (void)handleDeselectSubtitleEndWithUserInfo:(id)arg1;
- (void)handleFirstPacketReadWithUserInfo:(id)arg1;
- (void)handleFirstClipOpenedWithUserInfo:(id)arg1;
- (void)handleSwitchDefinitionStartWithUserInfo:(id)arg1;
- (void)handleSwitchDefinitionEndWithUserInfo:(id)arg1;
- (void)handleDownloadProgressUpdateWithUserInfo:(id)arg1;
- (void)handleCdnUrlInfoUpdateWithUserInfo:(id)arg1;
- (void)handleProtocolInfoUpdateWithUserInfo:(id)arg1;
- (void)handlePlayerCheckIsPlayingWithUserInfo:(id)arg1;
- (void)handleApplicationDidEnterBackgroundWithUserInfo:(id)arg1;
- (void)handleApplicationWillEnterForegroundWithUserInfo:(id)arg1;
- (void)reportStepCompleteWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handlePlayerDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handleVodDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)handleLiveDoneWithUserInfo:(id)arg1 endReason:(unsigned long long)arg2;
- (void)updateCommonParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(BOOL)arg2;
- (void)updateCommonParamFromBusiness:(BOOL)arg1;
- (void)updateVodExParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(BOOL)arg2;
- (void)updateLiveParamsWithStep:(unsigned long long)arg1 shouldUpdateFromBiz:(BOOL)arg2;
- (void)reportStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportUnknowPlayTypeWithStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportVodWithStep:(unsigned long long)arg1 withParam:(id)arg2;
- (void)reportLiveWithStep:(unsigned long long)arg1;
- (void)reportStepImpl:(unsigned long long)arg1 withParam:(id)arg2;
- (void)setupParams;
- (void)resetRecorders;
- (void)setCurrentReportStep:(unsigned long long)arg1;
- (id)generateFlowId;
- (long long)getCurrentTimeWithUserInfo:(id)arg1;
- (long long)currentTime;
- (void)resetPlayerStates;
- (void)updateSeekAndSecondBufferedTotalDuration;
- (void)startLivePeroidTimer;
- (void)pauseLivePeroidTimer;
- (void)invalidPeroidTimer;
- (void)onLivePeroidReport;
- (id)beaconReporter;
- (void)setBeaconReporter:(id)arg1;
- (id)infoGetter;
- (void)setInfoGetter:(id)arg1;
- (id)reportQueue;
- (void)setReportQueue:(id)arg1;
- (long long)playType;
- (void)setPlayType:(long long)arg1;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (id)commonParams;
- (void)setCommonParams:(id)arg1;
- (id)stepInit;
- (void)setStepInit:(id)arg1;
- (id)stepGetCdn;
- (void)setStepGetCdn:(id)arg1;
- (id)stepPrepared;
- (void)setStepPrepared:(id)arg1;
- (id)stepFirstRendered;
- (void)setStepFirstRendered:(id)arg1;
- (id)stepLoadSubtitle;
- (void)setStepLoadSubtitle:(id)arg1;
- (id)step302;
- (void)setStep302:(id)arg1;
- (id)stepSecondBuffered;
- (void)setStepSecondBuffered:(id)arg1;
- (id)stepSeek;
- (void)setStepSeek:(id)arg1;
- (id)stepPlayComplete;
- (void)setStepPlayComplete:(id)arg1;
- (id)vodExParams;
- (void)setVodExParams:(id)arg1;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (id)currentStep;
- (void)setCurrentStep:(id)arg1;
- (id)playFlowId;
- (void)setPlayFlowId:(id)arg1;
- (unsigned long long)playScene;
- (void)setPlayScene:(unsigned long long)arg1;
- (BOOL)hasReportedComplete;
- (void)setHasReportedComplete:(BOOL)arg1;
- (id)playerRecord;
- (void)setPlayerRecord:(id)arg1;
- (id)downloadRecord;
- (void)setDownloadRecord:(id)arg1;
- (id)mediaRecord;
- (void)setMediaRecord:(id)arg1;
- (id)errorCode;
- (void)setErrorCode:(id)arg1;
- (double)playedDuration;
- (void)setPlayedDuration:(double)arg1;
- (id)bufferedRecord;
- (void)setBufferedRecord:(id)arg1;
- (id)seekRecord;
- (void)setSeekRecord:(id)arg1;
- (id)liveRecord;
- (void)setLiveRecord:(id)arg1;
- (void)setDiskReadWrite:(id)arg1;
- (double)samplingRate;
- (void)setSamplingRate:(double)arg1;
- (BOOL)needReportToBeacon;
- (void)setNeedReportToBeacon:(BOOL)arg1;
- (void).cxx_destruct;
@end
