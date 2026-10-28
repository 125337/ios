@interface JSC2Logger : NSObject
{
    char _placeHolder; // +0x8
    int _rawLogFD; // +0xc
    WCOSLogger * _logger; // +0x10
    NSObject<OS_dispatch_source> * _timer; // +0x18
    MemoryMappedKV * _mmkv; // +0x20
    NSString * _rawLogPath; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)start;
- (void)duplicateStderr;
- (void)internalStart;
- (void)transferCurrentLog;
- (void)routine;
- (void)transferPreviousLog:(id)arg1 offset:(long long)arg2;
- (void)processBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)readRawLogPath;
- (void)saveRawLogPath:(id)arg1;
- (long long)readRawLogOffset;
- (void)saveRawLogOffset:(long long)arg1;
- (id)logger;
- (void)setLogger:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (id)rawLogPath;
- (void)setRawLogPath:(id)arg1;
- (int)rawLogFD;
- (void)setRawLogFD:(int)arg1;
- (char)placeHolder;
- (void)setPlaceHolder:(char)arg1;
- (void).cxx_destruct;
@end
