@interface WAWebViewPlugin_Camera : WAWebViewPlugin_embedView <WACameraLogicControllerDelegate>
{
    WACameraLogicController * _cameraLogic; // +0x8
    unsigned int _curCameraID; // +0x10
    BOOL _bIsRecording; // +0x14
    UIView * _cameraView; // +0x18
    CGRect _cameraPreviewFrame; // +0x20
    NSString * _photoQuality; // +0x40
    id /* block */ _photoOpearateBlock; // +0x48
    id /* block */ _videoOpearateBlock; // +0x50
    unsigned long long _startRecordTime; // +0x58
    BOOL _bHasParentId; // +0x60
    int _resolution; // +0x64
    CGSize _szOutput; // +0x68
    double _frameMinLength; // +0x78
    long long _orientation; // +0x80
    CGRect _cameraViewMaskRect; // +0x88
    WAArrayBuffer * _arrayBuffer; // +0xa8
    void * _originData; // +0xb0
    void * _reflectData; // +0xb8
    void * _scaleSrcData; // +0xc0
    void * _clipSrcData; // +0xc8
    int _bufferId; // +0xd0
    BOOL _centerCrop; // +0xd4
    BOOL _cameraOpened; // +0xd5
    NSString * _appId; // +0xd8
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (CGRect)fixCameraRect:(CGRect)arg1;
- (void)setCameraViewMaskWithRect:(CGRect)arg1;
- (void)setScanArea:(id)arg1;
- (unsigned int)insertCameraWithConfig:(id)arg1 pos:(CGRect)arg2 cameraId:(unsigned int)arg3 parentId:(unsigned int)arg4 size:(CGSize *)arg5;
- (BOOL)removeChildView:(unsigned int)arg1;
- (BOOL)isCameraAppear;
- (void)resizeVideo:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)operateCamera:(id)arg1 cameraId:(unsigned int)arg2 compelete:(id /* block */)arg3;
- (void)handleUIOrientationChanged;
- (void)setCameraFront:(BOOL)arg1;
- (void)onCameraInitDone;
- (void)onCameraNeedAuthCancel;
- (void)onCameraStop;
- (void)onCameraStartRecord:(int)arg1;
- (void)onCameraStopRecord;
- (void)onCameraScanCode:(id)arg1;
- (void)onCameraFrame:(opaqueCMSampleBuffer *)arg1;
- (void)onCameraVideoRecordingWithFrameImg:(id)arg1;
- (void)onCameraPictureTaken:(id)arg1 withFrontCamera:(BOOL)arg2;
- (double)getCompressQuality;
- (void)onCameraVideoTakenSuccess:(id)arg1 thumbImg:(id)arg2 isMuted:(BOOL)arg3;
- (id)videoParamsByVideoPath:(id)arg1;
- (void)tryStopRecordAndNotifyVideoRecordEnd;
- (void)notifyRecordVideoEnd:(id)arg1 ThumbLocalID:(id)arg2 otherParams:(id)arg3;
- (void)onCameraVideoTakenFail;
- (void)onCameraDidRotate;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)changeCameraMenuState:(BOOL)arg1;
- (void).cxx_destruct;
@end
