@interface WCPlayerBufferEvent : NSObject
{
    BOOL _isEndByUserExit; // +0x8
    unsigned int _seq; // +0xc
    float _playbackTime; // +0x10
    unsigned int _recallCount; // +0x14
    float _bufferedLen; // +0x18
    NSString * _mediaIdentify; // +0x20
    unsigned long long _startTime; // +0x28
    unsigned long long _endTime; // +0x30
    unsigned long long _bufferStartDataLen; // +0x38
    unsigned long long _bufferEndDataLen; // +0x40
    unsigned long long _bufferType; // +0x48
    unsigned long long _exitType; // +0x50
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
- (BOOL)isEndByUserExit;
- (void)setIsEndByUserExit:(BOOL)arg1;
- (unsigned int)recallCount;
- (void)setRecallCount:(unsigned int)arg1;
- (float)bufferedLen;
- (void)setBufferedLen:(float)arg1;
- (void).cxx_destruct;
@end
