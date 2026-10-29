@interface AutoTranslateMsgReport : NSObject
{
    unsigned int _expectCount; // +0x8
    unsigned int _handleCount; // +0xc
    unsigned long long _startTimestamp; // +0x10
    unsigned long long _endTimestamp; // +0x18
}
- (void)reset;
- (void)startAutoTraslateWithExpectCnt:(unsigned int)arg1;
- (void)reportKV;
- (unsigned int)expectCount;
- (void)setExpectCount:(unsigned int)arg1;
- (unsigned int)handleCount;
- (void)setHandleCount:(unsigned int)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)endTimestamp;
- (void)setEndTimestamp:(unsigned long long)arg1;
@end

