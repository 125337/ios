@interface JSC2LoggerNew : NSObject
{
    int _pipeReadEnd; // +0x8
    int _pipeWriteEnd; // +0xc
    WCOSLogger * _logger; // +0x10
    NSThread * _thread; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)start;
- (void)internalStart;
- (void)threadEntry;
- (void)processBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)logger;
- (void)setLogger:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (void).cxx_destruct;
@end

