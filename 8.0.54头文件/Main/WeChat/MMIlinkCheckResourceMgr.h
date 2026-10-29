@interface MMIlinkCheckResourceMgr : NSObject
{
    MMContext * m_context; // +0x8
    NetworkManagerBridge * network_; // +0x10
    MMIlinkCheckResourceNetworkCallback * network_callback_; // +0x18
    id <MMIlinkCheckResourceMgrDelegate> _delegate; // +0x20
    NSMutableDictionary * _checkingResourceDic; // +0x28
}
- (id)initWithReceiveCheckResourceIdentify;
- (void)dealloc;
- (void)checkResourceUpdate:(id)arg1;
- (void)batchCheckResourceUpdate:(id)arg1;
- (void)checkUDRResourceUpdate:(id)arg1;
- (void)batchCheckUDRResourceUpdate:(id)arg1;
- (void)periodCheckUDRResourceUpdate:(id)arg1 offset:(id)arg2;
- (void)specifiedCheckUDRResourceUpdate:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)createRequest:(const char *)arg1 size:(unsigned long long)arg2 scene:(int)arg3 type:(unsigned long long)arg4 extInfo:(id)arg5 projectIds:(id)arg6;
- (void)setAppParameter:(id)arg1;
- (void)setProjectParameter:(id)arg1 localProjectParams:(id)arg2;
- (void)setLocalResource:(id)arg1 localResourcesMap:(id)arg2;
- (id)getResourceList:(id)arg1;
- (void)callDelegateOnBatchCheckResource:(id)arg1 resourcesDic:(id)arg2 blockTimeDic:(id)arg3 noUpdateProjectIds:(id)arg4 errorProjectIds:(id)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
- (void)callDelegateOnPeriodCheckResource:(id)arg1 resourcesDic:(id)arg2 noUpdateProjectIds:(id)arg3 errorProjectIds:(id)arg4 errorType:(unsigned long long)arg5 errorCode:(int)arg6 timeStamp:(unsigned int)arg7 nextUpdateInterval:(int)arg8 isFinish:(int)arg9 newOffset:(id)arg10;
- (void)onCheckResourceComplete:(unsigned int)arg1 resp:(const void *)arg2 errorCode:(int)arg3;
- (void)onReceiveAppMessageEvent:(const void *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)checkingResourceDic;
- (void)setCheckingResourceDic:(id)arg1;
- (void).cxx_destruct;
@end

