@interface TingAudioRecorderImpl : MMUserService <SimpleRecordBufferDelegate, WCAudioSessionExt, MMServiceProtocol, TingAudioRecorder>
{
    BOOL _isRunning; // +0x8
    BOOL _didStopRecorder; // +0x9
    BOOL _getFinalBuffer; // +0xa
    BOOL _receiveFirstBuffer; // +0xb
    int _state; // +0xc
    unsigned long long _bufferId; // +0x10
    NSDate * _lastBufferTime; // +0x18
    double _minBufferInterval; // +0x20
    NSDate * _lastRetryTime; // +0x28
    double _minRetryInterval; // +0x30
    NSDate * _lastNotifyLogTime; // +0x38
    NSMutableSet * _listeners; // +0x40
    NSMutableArray * _bufferQueue; // +0x48
    NSTimer * _engineStatusTimer; // +0x50
    AVAudioEngine * _audioEngine; // +0x58
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x60
    SimpleAudioRecorder * _audioRecorder; // +0x68
}
- (id)init;
- (void)onServiceClearData;
- (id)createSimpleAudioRecorder;
- (id)prepareAudioSession:(BOOL)arg1;
- (void)deinitAudioSession;
- (void)prepare;
- (void)start:(id /* block */)arg1;
- (void)startAsync:(id /* block */)arg1;
- (void)errorToast;
- (id)startInner;
- (void)stop;
- (void)stopRunning:(BOOL)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)notifyStarted;
- (void)notifyListeners:(id)arg1;
- (id)retrieveBuffer:(unsigned long long)arg1;
- (void)enqueueRecorderBuffer:(id)arg1;
- (id)nextBuffer:(id)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)outputPeakPower:(float)arg1;
- (void)onAudioBufferRecordEnd;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionSetActive:(BOOL)arg1;
- (BOOL)isPreloadState;
- (void)preloadAudioSession;
- (void)preloadAudioRecorder;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)didStopRecorder;
- (void)setDidStopRecorder:(BOOL)arg1;
- (BOOL)getFinalBuffer;
- (void)setGetFinalBuffer:(BOOL)arg1;
- (unsigned long long)bufferId;
- (void)setBufferId:(unsigned long long)arg1;
- (id)lastBufferTime;
- (void)setLastBufferTime:(id)arg1;
- (double)minBufferInterval;
- (void)setMinBufferInterval:(double)arg1;
- (id)lastRetryTime;
- (void)setLastRetryTime:(id)arg1;
- (double)minRetryInterval;
- (void)setMinRetryInterval:(double)arg1;
- (id)lastNotifyLogTime;
- (void)setLastNotifyLogTime:(id)arg1;
- (id)listeners;
- (void)setListeners:(id)arg1;
- (id)bufferQueue;
- (void)setBufferQueue:(id)arg1;
- (id)engineStatusTimer;
- (void)setEngineStatusTimer:(id)arg1;
- (id)audioEngine;
- (void)setAudioEngine:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (BOOL)receiveFirstBuffer;
- (void)setReceiveFirstBuffer:(BOOL)arg1;
- (id)audioRecorder;
- (void)setAudioRecorder:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (void).cxx_destruct;
@end
