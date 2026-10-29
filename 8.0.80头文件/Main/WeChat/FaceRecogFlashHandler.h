@interface FaceRecogFlashHandler : FaceRecogBaseHandler <YtDeviceDelegate, CameraVideoDeviceDelegate, FaceRecogConfigLogicDelegate, WCCameraModuleDelegate, ISysCallCheckExt>
{
    BOOL _isRecogingFace; // +0x8
    BOOL _isPipelineInited; // +0x9
    BOOL _hasDetectFace; // +0xa
    BOOL _canShowNextTips; // +0xb
    BOOL _didStartRecordVideoForPay; // +0xc
    NSString * _bioId; // +0x10
    NSString * _bioIdForPayRecorder; // +0x18
    NSString * _verifyInfo; // +0x20
    double _faceDetectRatio; // +0x28
    FaceRecogFlashParamProcessor * _paramProcessor; // +0x30
    long long _fakeFlashTime; // +0x38
    long long _workMode; // +0x40
    CameraReflectDevice * _cameraDevice; // +0x48
    FaceRecogAVRecorder * _avRecorder; // +0x50
    id /* block */ _configResponseCallback; // +0x58
    id /* block */ _verifyResponseCallback; // +0x60
    long long _resetCount; // +0x68
    NSString * _lastTipId; // +0x70
    MMTimer * _tipsTimer; // +0x78
    double _tipsDuration; // +0x80
    CGRect _detectRect; // +0x88
}
- (id)initWithWorkMode:(long long)arg1 scene:(unsigned int)arg2;
- (id)initWithScene:(unsigned int)arg1;
- (void)dealloc;
- (void)start;
- (unsigned int)currentCheckAliveType;
- (id)cameraPreviewLayer;
- (double)cameraWidth;
- (double)cameraHeight;
- (void)registerLogCallback;
- (BOOL)supportDepthCamera;
- (void)didAccessVideo;
- (void)onCameraStart;
- (void)requestRetry;
- (void)requestStop;
- (void)initPipeline;
- (id)getSDKConfig;
- (void)mergeXLabConfig:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 depthPixelBuffer:(id)arg3;
- (id)getCaptureDevice;
- (id)getCaptureSession;
- (void)onReflectEventWithArgb:(unsigned int)arg1 withLight:(double)arg2;
- (id)getVoiceData;
- (void)onReflectStart:(long long)arg1;
- (void)didGetFlashEvent:(long long)arg1 eventDict:(id)arg2;
- (void)didSetCameraParamUIEvent:(id)arg1;
- (void)didGetFlashUIEvent:(id)arg1;
- (void)tryResetWithError:(id)arg1 errorCode:(long long)arg2;
- (void)didGetFlashTipsEvent:(id)arg1;
- (void)didGetFlashStateEvent:(id)arg1;
- (void)didGetFlashRequestUrl:(id)arg1 requests:(id)arg2 response:(id /* block */)arg3;
- (void)doUploadFlashDataToCdn:(id)arg1 voiceData:(id)arg2;
- (void)doUploadVideoToCdnForSpam;
- (BOOL)onStartRequestConfig:(id)arg1;
- (void)onStartVerifyResult:(id)arg1;
- (void)onGetConfigResponse:(id)arg1 error:(id)arg2;
- (void)setFaceBioId:(unsigned long long)arg1;
- (void)onGetBioConfig:(id)arg1 succeedForScene:(unsigned int)arg2 succeedForBioId:(unsigned long long)arg3;
- (void)onGetBioConfig:(id)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(id)arg4;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (long long)cameraModuleReportScene;
- (void)BeginInterruption;
- (void)callbackFlashWithData:(id)arg1 error:(id)arg2;
- (void)startShowTipsCountdown;
- (void)onTipsTimerEnd;
- (id)resolveString:(id)arg1;
- (void)onReflectColorChange:(unsigned int)arg1 light:(double)arg2;
- (void)onPipelineFinishWithSuccess:(BOOL)arg1;
- (void)onShowUITips:(id)arg1;
- (void)onShowUITips:(id)arg1 animated:(BOOL)arg2;
- (void)onFlashActionFinish;
- (void)onPipelineReset;
- (void)triggerDetectBegin;
- (void)startRecordAudio;
- (void)didDetectFace;
- (CGRect)getDetectRect;
- (id)getBioConfigBioIdForPayRecorder;
- (id)bioId;
- (void)setBioId:(id)arg1;
- (id)bioIdForPayRecorder;
- (void)setBioIdForPayRecorder:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (CGRect)detectRect;
- (void)setDetectRect:(CGRect)arg1;
- (double)faceDetectRatio;
- (void)setFaceDetectRatio:(double)arg1;
- (BOOL)isRecogingFace;
- (void)setIsRecogingFace:(BOOL)arg1;
- (id)paramProcessor;
- (void)setParamProcessor:(id)arg1;
- (long long)fakeFlashTime;
- (void)setFakeFlashTime:(long long)arg1;
- (long long)workMode;
- (void)setWorkMode:(long long)arg1;
- (BOOL)isPipelineInited;
- (void)setIsPipelineInited:(BOOL)arg1;
- (BOOL)hasDetectFace;
- (void)setHasDetectFace:(BOOL)arg1;
- (id)cameraDevice;
- (void)setCameraDevice:(id)arg1;
- (id)avRecorder;
- (void)setAvRecorder:(id)arg1;
- (id /* block */)configResponseCallback;
- (void)setConfigResponseCallback:(id /* block */)arg1;
- (id /* block */)verifyResponseCallback;
- (void)setVerifyResponseCallback:(id /* block */)arg1;
- (long long)resetCount;
- (void)setResetCount:(long long)arg1;
- (id)lastTipId;
- (void)setLastTipId:(id)arg1;
- (id)tipsTimer;
- (void)setTipsTimer:(id)arg1;
- (double)tipsDuration;
- (void)setTipsDuration:(double)arg1;
- (BOOL)canShowNextTips;
- (void)setCanShowNextTips:(BOOL)arg1;
- (BOOL)didStartRecordVideoForPay;
- (void)setDidStartRecordVideoForPay:(BOOL)arg1;
- (void).cxx_destruct;
@end
