@interface WALaunchTimeAxisMgr : MMUserService <MMServiceProtocol>
{
    BOOL _allowKV; // +0x8
    NSObject<OS_os_log> * _osLog; // +0x10
    unsigned long long _signpostId; // +0x18
    NSObject<OS_os_log> * _osLogGlobal; // +0x20
    unsigned long long _signpostIdGlobal; // +0x28
    NSObject<OS_os_log> * _osLogWebView; // +0x30
    unsigned long long _signpostIdWebView; // +0x38
    NSObject<OS_os_log> * _osLogService; // +0x40
    unsigned long long _signpostIdService; // +0x48
    NSObject<OS_os_log> * _osLogNative; // +0x50
    unsigned long long _signpostIdNative; // +0x58
    NSMutableDictionary * _instanceId2Nodes; // +0x60
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)markLaunchTimeAxisEvent:(id)arg1;
- (void)markLaunchTimeAxisEventWithAppid:(id)arg1 parent:(id)arg2 children:(id)arg3 inCategory:(unsigned long long)arg4 eventType:(unsigned long long)arg5 option:(unsigned int)arg6 timeStamp:(unsigned long long)arg7;
- (id)osLog;
- (void)setOsLog:(id)arg1;
- (unsigned long long)signpostId;
- (void)setSignpostId:(unsigned long long)arg1;
- (id)osLogGlobal;
- (void)setOsLogGlobal:(id)arg1;
- (unsigned long long)signpostIdGlobal;
- (void)setSignpostIdGlobal:(unsigned long long)arg1;
- (id)osLogWebView;
- (void)setOsLogWebView:(id)arg1;
- (unsigned long long)signpostIdWebView;
- (void)setSignpostIdWebView:(unsigned long long)arg1;
- (id)osLogService;
- (void)setOsLogService:(id)arg1;
- (unsigned long long)signpostIdService;
- (void)setSignpostIdService:(unsigned long long)arg1;
- (id)osLogNative;
- (void)setOsLogNative:(id)arg1;
- (unsigned long long)signpostIdNative;
- (void)setSignpostIdNative:(unsigned long long)arg1;
- (id)instanceId2Nodes;
- (void)setInstanceId2Nodes:(id)arg1;
- (BOOL)allowKV;
- (void)setAllowKV:(BOOL)arg1;
- (void).cxx_destruct;
@end

