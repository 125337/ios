@interface PalmEntryLogicController : NSObject <CameraScannerViewDelegate>
{
    BOOL _isDectecting; // +0x8
    BOOL _isRecording; // +0x9
    BOOL _alreadyGetSuccessImage; // +0xa
    int _successAvRecorderIndex; // +0xc
    unsigned int _beepSoundId; // +0x10
    id <PalmEntryLogicControllerDelegate> _delegate; // +0x18
    YTBizPalmRegister * _palmRegister; // +0x20
    FaceRecogAVRecorder * _avRecorder; // +0x28
    NSMutableArray * _successAvRecorders; // +0x30
    NSString * _sessionId; // +0x38
    id /* block */ _m_getFaceRecordCallBack; // +0x40
}
- (id)init;
- (BOOL)initPalmRegister;
- (BOOL)checkPalmModel;
- (BOOL)setupPalmRegister;
- (id)getPalmPipelineResult;
- (id)wrapSdkResult:(id)arg1 videoPath:(id)arg2;
- (void)checkAuthoration:(id /* block */)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)startRecordVideo:(double)arg1 videoHeight:(double)arg2 sessionId:(id)arg3;
- (void)startRecordSuccessVideo:(double)arg1 videoHeight:(double)arg2 sessionId:(id)arg3;
- (void)stopRecordVideo;
- (void)cancelRecordVideo;
- (void)cancelRecordSuccessVideo;
- (void)startDetectPalm;
- (void)startFirstDetectPalmFeedBack;
- (void)lightShock;
- (void)playDetectSound;
- (void)startPalmRegisterSuccessFeedBack;
- (void)successShock;
- (void)playSuccessSound;
- (void)stopRecordAndSave:(id /* block */)arg1;
- (BOOL)isSuccessVideoRecording;
- (id)getFailVideoPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)palmRegister;
- (void)setPalmRegister:(id)arg1;
- (id)avRecorder;
- (void)setAvRecorder:(id)arg1;
- (id)successAvRecorders;
- (void)setSuccessAvRecorders:(id)arg1;
- (int)successAvRecorderIndex;
- (void)setSuccessAvRecorderIndex:(int)arg1;
- (BOOL)isDectecting;
- (void)setIsDectecting:(BOOL)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (unsigned int)beepSoundId;
- (void)setBeepSoundId:(unsigned int)arg1;
- (BOOL)alreadyGetSuccessImage;
- (void)setAlreadyGetSuccessImage:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id /* block */)m_getFaceRecordCallBack;
- (void)setM_getFaceRecordCallBack:(id /* block */)arg1;
- (void).cxx_destruct;
@end
