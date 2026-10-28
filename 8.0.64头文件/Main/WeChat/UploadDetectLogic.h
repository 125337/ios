@interface UploadDetectLogic : MMObject <MotionDetectorDelegate>
{
    int _retryTimes; // +0x8
    CGSize _qmpSize; // +0x10
    int _motionState; // +0x20
    BOOL _isForOcr; // +0x24
    MotionDetector * _motionDetector; // +0x28
    int _uploadTimes; // +0x30
    BOOL _canUpload; // +0x34
    timeval _lastProcessTime; // +0x38
}
- (id)initWithFocusEngineSize:(CGSize)arg1 IsForOcr:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)process:(char *)arg1;
- (BOOL)canUpload;
- (void)cancelUpload;
- (void)uploadRetry;
- (void)feedbackMotionStateChanged:(int)arg1;
- (void)feedbackCameraFocused;
- (int)retryTimes;
- (void)setRetryTimes:(int)arg1;
- (int)motionState;
- (void)setMotionState:(int)arg1;
- (void).cxx_destruct;
@end
