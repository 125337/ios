@interface WCCpuStackFrame : NSObject
{
    unsigned int _cpu_thread; // +0x8
    float _cpu_value; // +0xc
}
- (id)initWithThread:(unsigned int)arg1 andCpuValue:(float)arg2;
- (unsigned int)cpu_thread;
- (void)setCpu_thread:(unsigned int)arg1;
- (float)cpu_value;
- (void)setCpu_value:(float)arg1;
@end
