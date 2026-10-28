@interface WCFinderVideoBufferingUnit : NSObject
{
    NSString * _tid; // +0x8
    unsigned long long _startBufferingTimestampInMS; // +0x10
    unsigned long long _endBufferingTimestampInMS; // +0x18
}
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)startBufferingTimestampInMS;
- (void)setStartBufferingTimestampInMS:(unsigned long long)arg1;
- (unsigned long long)endBufferingTimestampInMS;
- (void)setEndBufferingTimestampInMS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
