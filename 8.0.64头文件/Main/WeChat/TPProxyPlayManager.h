@interface TPProxyPlayManager : NSObject <TPDLProxyPlayDelegate, ITPPlayerProxy>
{
    BOOL _initialized; // +0x8
    BOOL _active; // +0x9
    BOOL _enableAdaptive; // +0xa
    BOOL _enableSuggestedBitrateCallBack; // +0xb
    BOOL _enableMultiNetwork; // +0xc
    BOOL _canUseProxy; // +0xd
    int _serviceType; // +0x10
    int _playId; // +0x14
    id <ITPPlayerProxyDelegate> playerProxyDelegate; // +0x18
    id <TPProxyPlayDelegate> _delegate; // +0x20
    TPDownloadProxy * _downloadProxy; // +0x28
    long long _maxBitrateBps; // +0x30
    TPLock * _definitionTaskLock; // +0x38
    TPLock * _trackTaskLock; // +0x40
    NSMutableArray * _definitionTaskArray; // +0x48
    NSMutableDictionary * _trackTaskMap; // +0x50
    long long _initializeTryCount; // +0x58
    long long _startPosMs; // +0x60
    long long _skipEndMs; // +0x68
    NSMutableSet * _resourceloaderSet; // +0x70
    long long _playState; // +0x78
}
- (id)getDownloadParamWithUrl:(id)arg1 videoInfo:(id)arg2 httpHeader:(id)arg3;
- (id)getDownloadParamWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)logTag;
- (BOOL)isAvailable;
- (BOOL)isPlayIdValid;
- (void)setPlayerOptionalParam:(id)arg1;
- (id)startPlayTaskWithUrl:(id)arg1 videoInfo:(id)arg2 httpHeader:(id)arg3;
- (BOOL)isValidResource:(id)arg1 delegate:(id)arg2 playInfo:(id)arg3;
- (void)setDataSource:(id)arg1 playInfo:(id)arg2 resourceLoader:(id)arg3 delegateQueue:(id)arg4;
- (void)switchDataSource:(id)arg1 definitionId:(long long)arg2 playInfo:(id)arg3 resourceLoader:(id)arg4 delegateQueue:(id)arg5;
- (void)cleanResourceloader:(id)arg1;
- (void)cleanResourceloaderWhenFinishSwitchWithDefinitionId:(long long)arg1;
- (id)startPlayTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (void)stopDownload;
- (id)startSwitchDefinitionTaskWithUrl:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3 httpHeader:(id)arg4;
- (id)startSwitchDefinitionTaskWithMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (void)finishSwitchDefinitionTaskWithDefinitionId:(long long)arg1;
- (id)startTrackDownloadTaskWithUrl:(id)arg1 trackType:(unsigned long long)arg2 downloadParamData:(id)arg3;
- (void)pauseTrackDownloadTaskWithUrl:(id)arg1;
- (void)resumeTrackDownloadTaskWithUrl:(id)arg1;
- (void)resetOptionParams;
- (void)resetInitProxyState;
- (void)resetStates;
- (void)stopTrackDownloadTaskWithUrl:(id)arg1;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)setProxyPlayState:(long long)arg1;
- (long long)getProxyPlayState;
- (void)setPlaySpeedRatio:(double)arg1;
- (void)setProxyServiceType:(int)arg1;
- (void)pushEvent:(long long)arg1;
- (void)updateVideoInfo:(id)arg1;
- (id)getErrorCode;
- (void)setIsActive:(BOOL)arg1;
- (id)startPlayTaskWithUrlMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)startPlayTaskWithDrmMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)startPlayTaskWithClipMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)startSwitchDefinitionTaskWithUrlMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithDrmMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (id)startSwitchDefinitionTaskWithClipMediaAsset:(id)arg1 definitionId:(long long)arg2 videoInfo:(id)arg3;
- (BOOL)isValidPlayId:(int)arg1;
- (void)setUserData;
- (void)setDownloadProxyActiveState:(BOOL)arg1 withPlayId:(int)arg2;
- (void)updateProxyTaskInfoWithPlayId:(int)arg1;
- (BOOL)initialzeProxyIfNeeded;
- (BOOL)initializeProxyImpl;
- (void)pauseDownloadWithPlayId:(int)arg1;
- (void)resumeDownloadWithPlayId:(int)arg1;
- (void)stopDownloadWithPlayId:(int)arg1;
- (void)stopCurrentPlayingTask;
- (int)startMediaAssetTaskWithMediaAsset:(id)arg1 videoInfo:(id)arg2;
- (id)getClipsByMediaAsset:(id)arg1;
- (void)onDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(id)arg5;
- (void)onDownloadFinish;
- (void)onDownloadErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (id)onPlayCallbackWithMessageType:(int)arg1 ext1:(id)arg2 ext2:(id)arg3 ext3:(id)arg4 ext4:(id)arg5;
- (void)onDownloadCdnUrlUpdate:(id)arg1;
- (void)onDownloadCdnUrlInfoUpdateWithUrl:(id)arg1 cdnIP:(id)arg2 uIP:(id)arg3 errcodeStr:(id)arg4;
- (void)onDownloadCdnUrlExpiredWithKVInfo:(id)arg1;
- (void)onDownloadStatusUpdateWithStatusCode:(int)arg1;
- (void)onDownloadProtocolUpdateWithProtocol:(id)arg1 protocolVer:(id)arg2;
- (long long)getPlayerBufferLength;
- (long long)getCurrentPosition;
- (int)getCurrentPlayClipNo;
- (long long)getAdvRemainTime;
- (id)getPlayInfo:(id)arg1;
- (long long)getCurrentPlayOffset;
- (id)buildTPProxyConfig;
- (id)playerProxyDelegate;
- (void)setPlayerProxyDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadProxy;
- (void)setDownloadProxy:(id)arg1;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (int)playId;
- (void)setPlayId:(int)arg1;
- (long long)maxBitrateBps;
- (void)setMaxBitrateBps:(long long)arg1;
- (id)definitionTaskLock;
- (void)setDefinitionTaskLock:(id)arg1;
- (id)trackTaskLock;
- (void)setTrackTaskLock:(id)arg1;
- (id)definitionTaskArray;
- (void)setDefinitionTaskArray:(id)arg1;
- (id)trackTaskMap;
- (void)setTrackTaskMap:(id)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (long long)initializeTryCount;
- (void)setInitializeTryCount:(long long)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (BOOL)enableAdaptive;
- (void)setEnableAdaptive:(BOOL)arg1;
- (BOOL)enableSuggestedBitrateCallBack;
- (void)setEnableSuggestedBitrateCallBack:(BOOL)arg1;
- (BOOL)enableMultiNetwork;
- (void)setEnableMultiNetwork:(BOOL)arg1;
- (BOOL)canUseProxy;
- (void)setCanUseProxy:(BOOL)arg1;
- (long long)startPosMs;
- (void)setStartPosMs:(long long)arg1;
- (long long)skipEndMs;
- (void)setSkipEndMs:(long long)arg1;
- (id)resourceloaderSet;
- (void)setResourceloaderSet:(id)arg1;
- (long long)playState;
- (void)setPlayState:(long long)arg1;
- (void).cxx_destruct;
@end
