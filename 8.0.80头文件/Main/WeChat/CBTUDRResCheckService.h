@interface CBTUDRResCheckService : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mmkv; // +0x8
}
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)getResIdList;
- (id)getDebugResIdList;
- (id)getProjectId;
- (void)checkDebugRes;
- (void)checkClientVersionRes;
- (id)getResPath;
- (BOOL)isDebugResExist;
- (BOOL)isClientVersionResExist;
- (void)udrPostProcess:(id)arg1;
- (id)getMemoryKV;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end
