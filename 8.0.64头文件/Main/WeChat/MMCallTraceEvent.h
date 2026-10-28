@interface MMCallTraceEvent : NSObject
{
    int _depth; // +0x8
    int _processID; // +0xc
    int _threadID; // +0x10
    NSString * _name; // +0x18
    unsigned long long _type; // +0x20
    long long _time; // +0x28
}
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)time;
- (void)setTime:(long long)arg1;
- (int)depth;
- (void)setDepth:(int)arg1;
- (int)processID;
- (void)setProcessID:(int)arg1;
- (int)threadID;
- (void)setThreadID:(int)arg1;
- (void).cxx_destruct;
@end
