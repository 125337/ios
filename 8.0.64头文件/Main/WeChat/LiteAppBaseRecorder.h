@interface LiteAppBaseRecorder : NSObject <LiteAppRecordEncodeDelegate>
{
    BOOL _isCheckEnvironment; // +0x8
    BOOL _timerOnFire; // +0x9
    LiteAppRecorderData * _aqData; // +0x10
    NSObject<OS_dispatch_queue> * _recordQueue; // +0x18
    unsigned long long _frameRecordByteSize; // +0x20
    NSMutableData * _encodeBufferData; // +0x28
    NSURL * _url; // +0x30
    NSDictionary * _settings; // +0x38
    unsigned long long _state; // +0x40
    id <LiteAppRecorderDelegate> _delegate; // +0x48
    double _duration; // +0x50
    double _startTime; // +0x58
    double _recordTime; // +0x60
    NSObject<OS_dispatch_source> * _timer; // +0x68
    NSArray * _inputSourceArr; // +0x70
    NSString * _errMsg; // +0x78
}
+ (id)recorderWithFilePath:(id)arg1 settings:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 settings:(id)arg2;
- (void)prepareToRecord;
- (id)record;
- (id)pause;
- (id)resume;
- (id)stop;
- (BOOL)isRecording;
- (BOOL)isPaused;
- (BOOL)isIdle;
- (double)currentTime;
- (void)encodePCMBufferToOutputFormat:(LiteAppRecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (void)clearRecorderState;
- (BOOL)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)frameRecordByteSizeEnable;
- (id)fileHeadDataBeforeStop;
- (void)activeAudioSession;
- (void)onNotifyFrameRecordOnMainThread:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (void)handleRouteChange:(id)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)setInputSourceIfNeed;
- (BOOL)shouldForceUseBuiltinMic;
- (LiteAppRecorderData *)aqData;
- (void)setAqData:(LiteAppRecorderData *)arg1;
- (id)recordQueue;
- (void)setRecordQueue:(id)arg1;
- (unsigned long long)frameRecordByteSize;
- (void)setFrameRecordByteSize:(unsigned long long)arg1;
- (id)encodeBufferData;
- (void)setEncodeBufferData:(id)arg1;
- (BOOL)isCheckEnvironment;
- (void)setIsCheckEnvironment:(BOOL)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)settings;
- (void)setSettings:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)recordTime;
- (void)setRecordTime:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)inputSourceArr;
- (void)setInputSourceArr:(id)arg1;
- (BOOL)timerOnFire;
- (void)setTimerOnFire:(BOOL)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (void).cxx_destruct;
@end
