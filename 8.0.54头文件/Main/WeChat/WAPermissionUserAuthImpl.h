@interface WAPermissionUserAuthImpl : NSObject <WAPermissionUserAuthTaskDelegate>
{
    unsigned int _debugModeType; // +0x8
    WxaExternalInfo * _externalInfo; // +0x10
    NSMutableArray * _arrAuthTaskWaitQueue; // +0x18
    WAPermissionUserAuthTask * _runningTask; // +0x20
    NSMutableDictionary * _dicAuthInfo; // +0x28
    id <WAPermissionUserAuthImplDelegate> _delegate; // +0x30
}
- (id)initWithDebugModeType:(unsigned int)arg1 externalInfo:(id)arg2;
- (void)dealloc;
- (void)checkUserAuthWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(id /* block */)arg5 failHandler:(id /* block */)arg6 transferHandler:(id /* block */)arg7 scene:(unsigned long long)arg8;
- (void)resetAuthInfo;
- (void)mainThread_resetAuthInfo;
- (void)mainThread_checkUserAuthWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(id /* block */)arg5 failHandler:(id /* block */)arg6 transferHandler:(id /* block */)arg7 scene:(unsigned long long)arg8;
- (void)addAuthWaitQueue:(id)arg1;
- (id)popAuthTaskInWaitQueue;
- (void)checkUserAuthWaitQueue;
- (void)removeRunningAuthTask:(id)arg1;
- (void)asyncRemoveRunningAuthTask:(id)arg1;
- (void)updateAuthInfoOKForJSAPI:(id)arg1 source:(unsigned long long)arg2;
- (id)getAuthInfoWithJSAPI:(id)arg1;
- (void)saveAuthInfo:(id)arg1 withJSAPI:(id)arg2;
- (void)authOKWithJSAPI:(id)arg1 handler:(id /* block */)arg2 scene:(unsigned long long)arg3;
- (void)authFailWithJSAPI:(id)arg1 failHandler:(id /* block */)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)authTaskComplete:(id)arg1;
- (void)onTransferAuthDidCompelete:(id)arg1 jsapiName:(id)arg2 transferHandler:(id /* block */)arg3 result:(id)arg4 scene:(unsigned long long)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

