@interface WAMemoryStatMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _appid2MemStatInfo; // +0x8
    NSMutableDictionary * _appid2KillInfo; // +0x10
}
- (void)onServiceInit;
- (void)weappStartLaunch:(id)arg1 appVersion:(unsigned int)arg2 debugMode:(unsigned long long)arg3 isCache:(BOOL)arg4;
- (void)weappEnterBackground:(id)arg1;
- (void)weappBeenKilled:(id)arg1 reason:(unsigned int)arg2;
- (void)reportWhenMemoryWarning:(unsigned int)arg1;
- (long long)getProcessMemUsed;
- (unsigned long long)getDeviceFreeMem;
- (void).cxx_destruct;
@end

