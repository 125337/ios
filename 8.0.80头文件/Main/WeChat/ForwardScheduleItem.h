@interface ForwardScheduleItem : NSObject
{
    BOOL _isRunning; // +0x8
    NSString * _msgKey; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    unsigned long long _seq; // +0x20
    double _startTime; // +0x28
}
- (id)msgKey;
- (void)setMsgKey:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (void).cxx_destruct;
@end
