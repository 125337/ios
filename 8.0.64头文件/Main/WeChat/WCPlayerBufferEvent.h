@interface WCPlayerBufferEvent : NSObject
{
    unsigned int _seq; // +0x8
    float _playbackTime; // +0xc
    float _bufferedLen; // +0x10
    NSString * _mediaIdentify; // +0x18
    unsigned long long _startTime; // +0x20
    unsigned long long _endTime; // +0x28
    unsigned long long _bufferStartDataLen; // +0x30
    unsigned long long _bufferEndDataLen; // +0x38
    unsigned long long _bufferType; // +0x40
    unsigned long long _exitType; // +0x48
}
- (id)initWithBufferType:(unsigned long long)arg1;
- (unsigned long long)getBufferedTime;
- (unsigned long long)getBufferLen;
- (id)getBufferEventDesc;
- (id)getBufferReportVal;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)mediaIdentify;
- (void)setMediaIdentify:(id)arg1;
- (float)playbackTime;
- (void)setPlaybackTime:(float)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned long long)bufferStartDataLen;
- (void)setBufferStartDataLen:(unsigned long long)arg1;
- (unsigned long long)bufferEndDataLen;
- (void)setBufferEndDataLen:(unsigned long long)arg1;
- (unsigned long long)bufferType;
- (void)setBufferType:(unsigned long long)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (float)bufferedLen;
- (void)setBufferedLen:(float)arg1;
- (void).cxx_destruct;
@end
