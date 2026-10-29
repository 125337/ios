@interface VideoRecorderInfo : NSObject
{
    BOOL _isRecording; // +0x8
    FaceRecogAVRecorder * _avRecorder; // +0x10
}
- (id)avRecorder;
- (void)setAvRecorder:(id)arg1;
- (BOOL)isRecording;
- (void)setIsRecording:(BOOL)arg1;
- (void).cxx_destruct;
@end
