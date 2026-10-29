@interface WCFDMonitor : NSObject
{
    unsigned long long[2560] _types; // +0x8
    shared_ptr<WCFDMonitorThreadInfo>[2560] _threadInfos; // +0x5008
}
+ (id)shareInstance;
- (id)init;
- (void)updateRlimit;
- (void)setup;
- (void)updateExpt;
- (void)recordInfo:(int)arg1 type:(unsigned long long)arg2 threadInfo:(shared_ptr<WCFDMonitorThreadInfo>)arg3;
- (void)clearInfo:(int)arg1;
- (id)threadInfo:(int)arg1;
- (void)reportTooManyOpenFiles;
- (void)printEMFILE:(const char *)arg1;
- (id)shortenPath:(const char *)arg1;
- (BOOL)isMMKVPath:(id)arg1;
- (BOOL)isWCDBPath:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

