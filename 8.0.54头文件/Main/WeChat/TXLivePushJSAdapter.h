@interface TXLivePushJSAdapter : NSObject <V2TXLivePusherJSAdapterDelegate, MMImageLoaderObserver, WMPFLivePusherAPIProtocol, WMPFAudioAPIProtocol, WeEffectBaseAdapterDelegate, MMLiveMangerPusherDelegate, WeEffectManagerResultDelegate, WCAudioModuleDelegate, TXLivePushJSAdapterProtocol>
{
    BOOL _bIsMannualPause; // +0x8
    BOOL _isVoip; // +0x9
    BOOL _isDebug; // +0xa
    BOOL _needEvent; // +0xb
    BOOL _needBGMEvent; // +0xc
    BOOL _needNetStatus; // +0xd
    BOOL _remoteMirror; // +0xe
    BOOL _enableFrontCamera; // +0xf
    BOOL _enableTorch; // +0x10
    BOOL _audioMode; // +0x11
    BOOL _autoPush; // +0x12
    BOOL _enableCustomEffect; // +0x13
    BOOL _enableVideoCustomRender; // +0x14
    BOOL _isAllowFp16; // +0x15
    unsigned int _pusherId; // +0x18
    id <TXLivePushJSAdapterDelegate> _delegate; // +0x20
    V2TXLivePusherJSAdapter * _v2LivePusher; // +0x28
    UIView * _previewView; // +0x30
    NSString * _appId; // +0x38
    NSString * _orientation; // +0x40
    NSString * _bgImageUrl; // +0x48
    NSString * _bgImageMD5; // +0x50
    NSString * _filterImageUrl; // +0x58
    NSString * _filterImageMD5; // +0x60
    NSString * _bgmAudioPath; // +0x68
    NSURLSessionDownloadTask * _bgmAudioTask; // +0x70
    NSNumber * _storedMuteStatus; // +0x78
    NSNumber * _storedEnableMic; // +0x80
    unsigned long long _localVideoMirrorType; // +0x88
    long long _videoWidth; // +0x90
    long long _videoHeight; // +0x98
    NSString * _pushUrl; // +0xa0
    MMLiveManger * _liveManagerInstance; // +0xa8
    MMWeEffectManager * _weeffectManager; // +0xb0
    NSMutableArray * _weeffectArray; // +0xb8
    NSArray * _weeffectClsArr; // +0xc0
}
- (void)dealloc;
- (void)destroyLivepusher;
- (void)registerNotification;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)initTorchState;
- (id)initLivePusherWithId:(unsigned int)arg1 configs:(id)arg2 preview:(id)arg3 appId:(id)arg4 delegate:(id)arg5;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (void)playLivePusherBgm:(id)arg1;
- (id)bgmSaveDir;
- (id)calcSavePathByUrl:(id)arg1;
- (void)loadLivePusherBgm:(id)arg1;
- (void)stopLivePusherBgm;
- (BOOL)operateLivePusherWithType:(id)arg1 param:(id)arg2;
- (BOOL)isPublishing;
- (BOOL)isPreviewing;
- (BOOL)enableMic;
- (BOOL)muted;
- (double)cameraZoomMaxRatio;
- (void)enablePureAudioPush:(BOOL)arg1;
- (void)startPreview;
- (void)stopPreview;
- (void)enterBackgroundThrowingEvent:(BOOL)arg1;
- (void)enterForeground;
- (void)orientationChange;
- (void)startPush;
- (void)stopPush;
- (void)onPushStart;
- (void)backgroundPush:(BOOL)arg1;
- (void)foregroundPush;
- (void)saveAndForceDisableMic;
- (void)restoreMicSetting;
- (void)handlePushUrl:(BOOL)arg1;
- (void)parseConfigs:(id)arg1;
- (void)parseCustomVideoCaptureConfigs:(id)arg1;
- (void)setOrientation;
- (BOOL)setAudioActive:(BOOL)arg1;
- (BOOL)enableCustomVideoCapture;
- (id)tryGetImageLocalData:(id)arg1;
- (void)loadImageWithURL:(id)arg1 imageMD5:(id)arg2 successed:(id /* block */)arg3;
- (void)onMonoServiceRejectMsg;
- (void)onConfigApplied:(BOOL)arg1;
- (void)onPushEvent:(long long)arg1 withParam:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onBGMStart:(long long)arg1;
- (void)onBGMProgress:(long long)arg1 durationMs:(long long)arg2;
- (void)onBGMComplete:(long long)arg1;
- (void)onSnapshotComplete:(id)arg1;
- (void)onLivePusherError:(long long)arg1 errMsg:(id)arg2 data:(id)arg3;
- (void)onRecordStateChanged:(id)arg1;
- (void)onCameraStateChanged:(BOOL)arg1;
- (BOOL)onAudioRecordWillUpdate;
- (void)onAudioRecordDidStop;
- (void)processImageData:(id)arg1 imageUrl:(id)arg2 imageMD5:(id)arg3 finishedBlock:(id /* block */)arg4;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)pauseLivePush;
- (void)resumeLivePush;
- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)initializeCustomVideoCapture:(id)arg1;
- (void)onResult:(int)arg1;
- (void)onResourceID:(long long)arg1;
- (void)onResourceIDVector:(id)arg1 scene:(unsigned long long)arg2;
- (void)onWeVisEffectMgrCreateCompleted;
- (id)liveManagerInstance;
- (id)weeffectClsArr;
- (void)setCameraConfigs;
- (void)snapShot:(BOOL)arg1;
- (void)updateMirrorTypeForCustomVideoCapture;
- (BOOL)updateTorchForCustomEffect;
- (void)parseWeEffect:(id)arg1 operationType:(id)arg2;
- (void)clearWeEffects;
- (void)weeffectApplicationFinishedWithObject:(id)arg1 error:(id)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (long long)sendVideoFrameData:(id)arg1 param:(id)arg2;
- (long long)sendVideoPixelBuffer:(__CVBuffer *)arg1;
- (void)onEnableCustomVideoCapture:(BOOL)arg1 width:(double)arg2 height:(double)arg3;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (id)mixListForAudioModule:(id)arg1;
- (unsigned int)pusherId;
- (BOOL)isVoip;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)v2LivePusher;
- (void)setV2LivePusher:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)orientation;
- (void)setOrientation:(id)arg1;
- (BOOL)isDebug;
- (void)setIsDebug:(BOOL)arg1;
- (BOOL)needEvent;
- (void)setNeedEvent:(BOOL)arg1;
- (BOOL)needBGMEvent;
- (void)setNeedBGMEvent:(BOOL)arg1;
- (BOOL)needNetStatus;
- (void)setNeedNetStatus:(BOOL)arg1;
- (id)bgImageUrl;
- (void)setBgImageUrl:(id)arg1;
- (id)bgImageMD5;
- (void)setBgImageMD5:(id)arg1;
- (id)filterImageUrl;
- (void)setFilterImageUrl:(id)arg1;
- (id)filterImageMD5;
- (void)setFilterImageMD5:(id)arg1;
- (id)bgmAudioPath;
- (void)setBgmAudioPath:(id)arg1;
- (id)bgmAudioTask;
- (void)setBgmAudioTask:(id)arg1;
- (id)storedMuteStatus;
- (void)setStoredMuteStatus:(id)arg1;
- (id)storedEnableMic;
- (void)setStoredEnableMic:(id)arg1;
- (BOOL)remoteMirror;
- (void)setRemoteMirror:(BOOL)arg1;
- (unsigned long long)localVideoMirrorType;
- (void)setLocalVideoMirrorType:(unsigned long long)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (BOOL)enableFrontCamera;
- (void)setEnableFrontCamera:(BOOL)arg1;
- (BOOL)enableTorch;
- (void)setEnableTorch:(BOOL)arg1;
- (BOOL)audioMode;
- (void)setAudioMode:(BOOL)arg1;
- (id)pushUrl;
- (void)setPushUrl:(id)arg1;
- (BOOL)autoPush;
- (void)setAutoPush:(BOOL)arg1;
- (BOOL)enableCustomEffect;
- (void)setEnableCustomEffect:(BOOL)arg1;
- (void)setLiveManagerInstance:(id)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id)weeffectArray;
- (void)setWeeffectArray:(id)arg1;
- (void)setWeeffectClsArr:(id)arg1;
- (BOOL)enableVideoCustomRender;
- (void)setEnableVideoCustomRender:(BOOL)arg1;
- (BOOL)isAllowFp16;
- (void)setIsAllowFp16:(BOOL)arg1;
- (void).cxx_destruct;
@end

