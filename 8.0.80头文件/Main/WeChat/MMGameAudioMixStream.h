@interface MMGameAudioMixStream : NSObject
{
    int _sessionId; // +0x8
    int _streamId; // +0xc
    int _channel; // +0x10
    int _samplerate; // +0x14
    BOOL _buffReady; // +0x18
    long long _format; // +0x20
    unsigned int _sampleSize; // +0x28
    unsigned int _readySize; // +0x2c
    unsigned int _maxSize; // +0x30
    NSMutableData * _nsData; // +0x38
    NSMutableData * _buffData; // +0x40
    unsigned int putTimes; // +0x48
    unsigned int putSize; // +0x4c
    unsigned int getTimes; // +0x50
    unsigned int getSize; // +0x54
    unsigned int ignoreTimes; // +0x58
    unsigned int ignoreSize; // +0x5c
}
- (id)init:(int)arg1 channel:(int)arg2 samplerate:(int)arg3 format:(long long)arg4 size:(int)arg5;
- (BOOL)putData:(int)arg1 samplerate:(int)arg2 format:(long long)arg3 data:(void *)arg4 size:(unsigned int)arg5;
- (id)getData;
- (int)sessionId;
- (void)setSessionId:(int)arg1;
- (unsigned int)size;
- (void)setSize:(unsigned int)arg1;
- (int)channel;
- (void)setChannel:(int)arg1;
- (int)samplerate;
- (void)setSamplerate:(int)arg1;
- (long long)format;
- (void)setFormat:(long long)arg1;
- (void).cxx_destruct;
@end
