@interface UDRCleaner : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)dealloc;
- (void)regist:(id)arg1;
- (BOOL)resourceStillValid:(id)arg1;
- (void)doCleanUDR;
- (void)doCleanBizUDR:(id)arg1 lastResource:(id)arg2;
- (void)cmdCleanAllUDR;
- (void)callBizHasBeenCleared;
- (unsigned long long)preCleanGetUDRSize;
- (void)deepCleanUDRResource;
@end
