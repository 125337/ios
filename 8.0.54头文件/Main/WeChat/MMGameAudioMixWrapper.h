@interface MMGameAudioMixWrapper : NSObject
{
    id <MMGameAudioMixDelegate> delegate; // +0x8
    int _outputSampleRate; // +0x10
    int _outputChannel; // +0x14
    long long _outputFormat; // +0x18
    void * _mixerHandler; // +0x20
    int _outputSize; // +0x28
    NSMutableDictionary * _nsDic; // +0x30
    shared_ptr<WAGameThreadWaitReady> _wait; // +0x38
    BOOL _ready; // +0x48
    BOOL _terminal; // +0x49
    NSThread * _thread; // +0x50
    NSMutableData * _mixData; // +0x58
}
- (id)init;
- (void)dealloc;
- (BOOL)create:(int)arg1 channel:(int)arg2 format:(long long)arg3;
- (id)getStream:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4;
- (BOOL)putData:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4 data:(void *)arg5 size:(int)arg6;
- (id)getData;
- (void)destroy;
- (void)onMixThread;
- (int)getInputSampleSize:(int)arg1 sampleRate:(int)arg2 format:(long long)arg3;
- (int)getInputSampleCount:(int)arg1 sampleRate:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (BOOL)terminal;
- (void)setTerminal:(BOOL)arg1;
- (id)mixData;
- (void)setMixData:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

