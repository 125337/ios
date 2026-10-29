@interface WABaseRecorder : NSObject <WARecordEncodeDelegate>
{
    BOOL _timerOnFire; // +0x8
    WARecorderData * _aqData; // +0x10
    NSObject<OS_dispatch_queue> * _recordQueue; // +0x18
    unsigned long long _frameRecordByteSize; // +0x20
    NSMutableData * _encodeBufferData; // +0x28
    NSURL * _url; // +0x30
    NSDictionary * _settings; // +0x38
    unsigned long long _state; // +0x40
    NSString * _audioSessionMode; // +0x48
    id <WARecorderDelegate> _delegate; // +0x50
    double _duration; // +0x58
    double _startTime; // +0x60
    double _recordTime; // +0x68
    NSObject<OS_dispatch_source> * _timer; // +0x70
    NSArray * _inputSourceArr; // +0x78
}
+ (id)recorderWithFilePath:(id)arg1 settings:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 settings:(id)arg2;
- (void)prepareToRecord;
- (void)record;
- (void)pause;
- (void)resume;
- (void)stop;
- (BOOL)isRecording;
- (BOOL)isPaused;
- (BOOL)isIdle;
- (double)currentTime;
- (void)encodePCMBufferToOutputFormat:(WARecorderData *)arg1 audioQueueRef:(OpaqueAudioQueue *)arg2 audioQueueBufferRef:(AudioQueueBuffer *)arg3 audioTimeStamp:(const AudioTimeStamp *)arg4 numPackets:(unsigned int)arg5 packetDescription:(const AudioStreamPacketDescription *)arg6;
- (void)clearRecorderState;
- (BOOL)checkErrorAndStopIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)checkErrorAndLogIfError:(int)arg1 withErrorString:(id)arg2;
- (BOOL)frameRecordByteSizeEnable;
- (id)fileHeadDataBeforeStop;
- (id)flushEncoderBeforeStop;
- (void)notifyStateChange:(unsigned long long)arg1 error:(id)arg2;
- (void)notifyFrameRecordData:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)activeAudioSession;
- (void)unActiveAudioSession;
- (void)onNotifyFrameRecordOnMainThread:(id)arg1 isLastFrame:(BOOL)arg2;
- (void)onNotifyStateChangeOnMainThread:(unsigned long long)arg1 error:(id)arg2;
- (void)handleRouteChange:(id)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)setInputSourceIfNeed;
- (BOOL)shouldForceUseBuiltinMic;
- (WARecorderData *)aqData;
- (void)setAqData:(WARecorderData *)arg1;
- (id)recordQueue;
- (void)setRecordQueue:(id)arg1;
- (unsigned long long)frameRecordByteSize;
- (void)setFrameRecordByteSize:(unsigned long long)arg1;
- (id)encodeBufferData;
- (void)setEncodeBufferData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)settings;
- (void)setSettings:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)audioSessionMode;
- (void)setAudioSessionMode:(id)arg1;
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
- (void).cxx_destruct;
@end
