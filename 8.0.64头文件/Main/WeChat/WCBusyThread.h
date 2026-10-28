@interface WCBusyThread : NSObject
{
    unsigned int _thread; // +0x8
    float _usage; // +0xc
    int _depth; // +0x10
    unsigned long long * _callstack; // +0x18
}
- (id)initWithThread:(unsigned int)arg1 usage:(float)arg2 depth:(int)arg3 callstack:(unsigned long long *)arg4;
- (void)dealloc;
- (unsigned int)thread;
- (void)setThread:(unsigned int)arg1;
- (float)usage;
- (void)setUsage:(float)arg1;
- (int)depth;
- (void)setDepth:(int)arg1;
- (unsigned long long *)callstack;
- (void)setCallstack:(unsigned long long *)arg1;
@end
