@interface MBEventHandler_getPermissionBytes : MBEventHandlerBaseAsync
- (id)apiName;
- (void)invoke:(id)arg1;
- (id)resolveAppId;
- (id)buildPermissionBytesForRunningStatus:(id)arg1 permInfo:(id)arg2;
- (void)logPermByteForIndex:(unsigned long long)arg1 fgData:(id)arg2 bgData:(id)arg3 suspendData:(id)arg4 foregroundOnlyOut:(id)arg5;
- (id)buildPermissionBytes:(id)arg1 permInfo:(id)arg2 runningState:(unsigned long long)arg3;
- (id)getPermDicForIndex:(unsigned long long)arg1 stateDic:(id)arg2;
@end
