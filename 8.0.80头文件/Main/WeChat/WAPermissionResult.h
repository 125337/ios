@interface WAPermissionResult : MMObject
{
    BOOL _useTempPermission; // +0x8
    BOOL _needDelayExecute; // +0x9
    BOOL _resultHasPermission; // +0xa
    unsigned int _permissionState; // +0xc
    unsigned int _runningState; // +0x10
    NSString * _runningStateDescription; // +0x18
    NSString * _permissionMsg; // +0x20
    NSString * _resultMsg; // +0x28
}
+ (id)getFailedResult;
+ (id)getSucceedResult;
- (unsigned int)permissionState;
- (void)setPermissionState:(unsigned int)arg1;
- (BOOL)useTempPermission;
- (void)setUseTempPermission:(BOOL)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (id)runningStateDescription;
- (void)setRunningStateDescription:(id)arg1;
- (BOOL)needDelayExecute;
- (void)setNeedDelayExecute:(BOOL)arg1;
- (id)permissionMsg;
- (void)setPermissionMsg:(id)arg1;
- (id)resultMsg;
- (void)setResultMsg:(id)arg1;
- (BOOL)resultHasPermission;
- (void)setResultHasPermission:(BOOL)arg1;
- (void).cxx_destruct;
@end
