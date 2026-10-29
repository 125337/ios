@interface TXYHyBaseVM : NSObject <TXYHyVcLifeCycleDelegate, CameraVideoDeviceDelegate, TXYHyYtSDKModuleDelegate, TXYHYTuringModuleDelegate, TXYHyStageListProtocol>
{
    BOOL isStop; // +0x8
    NSString * turingErrorMsg; // +0x10
    BOOL _recodFinish; // +0x18
    BOOL _isFlashing; // +0x19
    BOOL _wbLockedDuringStage; // +0x1a
    int _countLight; // +0x1c
    float _originalTemperature; // +0x20
    TXYHyAudioPlayer * _audioPlayer; // +0x28
    TXYCameraRecordDevice * _device; // +0x30
    TXYHyYtSDKModule * _ytModule; // +0x38
    TXYHYTuringModule * _truingModule; // +0x40
    TXYAuthStateManager * _authState; // +0x48
    NSString * _userCancelStage; // +0x50
    TXYHyStageList * _stageList; // +0x58
    TXYHyInnerConfig * _config; // +0x60
    TXYOsAuthingViewController * _vc; // +0x68
    id <TXYOperateDelegate> _operate; // +0x70
    NSString * _mEextraInfo; // +0x78
    double _recordBrightness; // +0x80
    NSMutableDictionary * _allTipsDic; // +0x88
    NSDictionary * _v4CodeToTipsMap; // +0x90
    TXYVideoCropHandle * _videoCropHandle; // +0x98
    long long _restoreToken; // +0xa0
}
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)cancelClick;
- (void)exitAndAlert:(id)arg1 code:(int)arg2;
- (void)initActions;
- (void)stageListRunWith:(id)arg1;
- (void)stagePrepare:(id)arg1;
- (void)stageCheckModule:(id)arg1;
- (void)stageInitYtWith:(id)arg1;
- (void)stageGetLiveData:(id)arg1;
- (void)stageStartAuthAction:(id)arg1;
- (void)stageToLoading:(id)arg1;
- (void)stageToUpdateReflectionData:(id)arg1;
- (void)initCamera;
- (void)initYtFrameworkWithTuring:(id)arg1;
- (void)turingStart;
- (void)authEnd:(id /* block */)arg1;
- (void)resetBrightness;
- (void)needUpdateExtaTips:(id)arg1;
- (void)showErrOrGuide:(id)arg1;
- (void)doPause;
- (void)doResume;
- (void)stopAuthActionErr:(long long)arg1 errMsg:(id)arg2;
- (void)setLiveData:(id)arg1 extraInfo:(id)arg2 riskResult:(id)arg3;
- (void)cropVideoWith:(id)arg1 success:(id /* block */)arg2;
- (void)updateAllTips:(id)arg1;
- (void)saveAllTips;
- (void)cameraDeviceEvent:(unsigned long long)arg1 withAguments:(id)arg2;
- (void)camereErrorHandler:(unsigned long long)arg1 msg:(id)arg2;
- (void)turingTimeout;
- (void)turingReceiveData:(id)arg1 error:(id)arg2 duration:(double)arg3;
- (id)getCaptureDevice;
- (id)getCaptureSession;
- (void)ytInnerError:(int)arg1 errorMsg:(id)arg2;
- (void)ytStateChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)ytCameraParamsStageChanged:(long long)arg1 state:(long long)arg2 version:(long long)arg3;
- (void)recordOriginalTemperature;
- (void)clearCameraResetBaselineWithReason:(id)arg1;
- (void)markWbLockedDuringStage;
- (BOOL)needsWhiteBalanceRestore;
- (void)restoreOriginalTemperatureWithToken:(long long)arg1 completion:(id /* block */)arg2;
- (void)restoreOriginalTemperatureWithCompletion:(id /* block */)arg1;
- (void)restoreOriginalTemperature;
- (void)restoreAfterCameraParamsReset;
- (void)ytUpdateGetLiveTypeDataStr:(id)arg1;
- (void)ytUpdateActionDataStr:(id)arg1;
- (void)ytUpdateCameraResolutionStr:(id)arg1;
- (void)ytUpdateRefDataStr:(id)arg1;
- (void)ytEndEvent;
- (void)ytCameraParamsEnd;
- (void)ytCameraParamsChanged:(id)arg1;
- (id)ytGetCameraFOV:(id)arg1;
- (void)ytNeedUpdateTimeout:(id)arg1;
- (void)ytNeedUpdateUITips:(id)arg1;
- (void)ytLocalRetryDidStart:(long long)arg1;
- (void)ytLocalRetryDidFinish:(BOOL)arg1;
- (void)resetStageForLocalRetry;
- (void)ytUpdateBackgroundColorStr:(id)arg1;
- (void)ytActionChanged:(unsigned long long)arg1;
- (void)ytReflectionDurationMS:(long long)arg1;
- (int)creageCamera;
- (void)turnOnFlash;
- (void)turnOffFlash;
- (void)startCamera;
- (void)stopCamera:(id /* block */)arg1;
- (void)startDetectBrightness;
- (void)setRecodFinish:(BOOL)arg1;
- (void)callbackWithAuthAction:(long long)arg1;
- (void)callbackWithTips:(id)arg1;
- (void)updateUserCancelStageWithState:(long long)arg1;
- (void)updateUserCancelStageWithActionEvent:(unsigned long long)arg1;
- (void)updateUserCancelStageIfNeeded:(id)arg1;
- (id)stageNameForPPLState:(long long)arg1;
- (id)stageNameForActionEvent:(unsigned long long)arg1;
- (BOOL)startInitSuccBlock:(id)arg1;
- (BOOL)startInitFailBlock:(long long)arg1 errorMsg:(id)arg2;
- (BOOL)resultSuccBlock:(id)arg1 extraInfo:(id)arg2 videoPath:(id)arg3;
- (BOOL)resultFailBlock:(long long)arg1 errorMsg:(id)arg2;
- (void)handleWithBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)firstViewController;
- (id)authViewController;
- (void)systemCameraDeviceError;
- (void)quiteVcWithError:(long long)arg1 errorMsg:(id)arg2;
- (id)v4CodeToTipsMap;
- (id)videoToBase64WithoutputURL:(id)arg1;
- (BOOL)recodFinish;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)ytModule;
- (void)setYtModule:(id)arg1;
- (id)truingModule;
- (void)setTruingModule:(id)arg1;
- (id)authState;
- (void)setAuthState:(id)arg1;
- (id)userCancelStage;
- (void)setUserCancelStage:(id)arg1;
- (id)stageList;
- (void)setStageList:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)operate;
- (void)setOperate:(id)arg1;
- (id)mEextraInfo;
- (void)setMEextraInfo:(id)arg1;
- (double)recordBrightness;
- (void)setRecordBrightness:(double)arg1;
- (id)allTipsDic;
- (void)setAllTipsDic:(id)arg1;
- (int)countLight;
- (void)setCountLight:(int)arg1;
- (void)setV4CodeToTipsMap:(id)arg1;
- (id)videoCropHandle;
- (void)setVideoCropHandle:(id)arg1;
- (BOOL)isFlashing;
- (void)setIsFlashing:(BOOL)arg1;
- (float)originalTemperature;
- (void)setOriginalTemperature:(float)arg1;
- (long long)restoreToken;
- (void)setRestoreToken:(long long)arg1;
- (BOOL)wbLockedDuringStage;
- (void)setWbLockedDuringStage:(BOOL)arg1;
- (void).cxx_destruct;
@end
