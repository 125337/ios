@interface WAPreGetLaunchLogic : NSObject <WAPermissionMgrExtension>
{
    NSMutableArray * _arrFetchingCmds; // +0x8
}
- (id)init;
- (void)doPreGetLaunchCmd:(id)arg1;
- (void)markFetchingCmd:(id)arg1;
- (void)unMarkFetchingCmd:(id)arg1;
- (BOOL)isFetchingAppid:(id)arg1 username:(id)arg2;
- (void)unMarkFetchingAppid:(id)arg1 username:(id)arg2;
- (id)getFetchingCmdForAppid:(id)arg1 username:(id)arg2;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(BOOL)arg2 errorCode:(int)arg3;
- (id)arrFetchingCmds;
- (void)setArrFetchingCmds:(id)arg1;
- (void).cxx_destruct;
@end

