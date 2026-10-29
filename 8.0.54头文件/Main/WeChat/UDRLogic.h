@interface UDRLogic : MMUserService <MMIlinkCheckResourceMgrDelegate, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    NSMutableDictionary * _paramsMap; // +0x10
    UDRResourceDBMgr * _udrDBMgr; // +0x18
    MMIlinkCheckResourceMgr * _resourceMgr; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)alive:(id)arg1;
- (id)getAllResource;
- (id)getResource:(id)arg1 name:(id)arg2;
- (id)getResourceList:(id)arg1;
- (id)getWxResourceList:(id)arg1;
- (id)getWxResource:(id)arg1 name:(id)arg2;
- (void)removeResource:(id)arg1;
- (void)updateResource:(id)arg1;
- (void)checkResource:(id)arg1 nameList:(id)arg2 qos:(int)arg3 parameter:(id)arg4;
- (void)batchCheckResource:(id)arg1 nameMap:(id)arg2 qos:(int)arg3 parameterMap:(id)arg4;
- (void)periodCheckResource:(id)arg1 parameterMap:(id)arg2 offset:(id)arg3;
- (void)checkSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (BOOL)checkIsIntervalTime;
- (BOOL)preCheckBlockTime:(id)arg1;
- (BOOL)postCheckExpireTime:(id)arg1 node:(id)arg2;
- (void)setIntervalTime:(unsigned int)arg1;
- (void)setBlockTime:(id)arg1 block:(unsigned int)arg2;
- (id)getResourceDescriptionReqItem:(id)arg1 nameList:(id)arg2 qos:(int)arg3 parameter:(id)arg4;
- (void)dealResourceCallback:(id)arg1 infos:(id)arg2 blockTime:(unsigned int)arg3 errorType:(int)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 extInfo:(id)arg7 scene:(long long)arg8 reqItems:(id)arg9;
- (void)dealFailResourceCallback:(id)arg1 name:(id)arg2 version:(int)arg3 errorType:(int)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 scene:(long long)arg7 sampleRate:(float)arg8;
- (void)configParameters:(void *)arg1;
- (void)onCheckResource:(id)arg1 resources:(id)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 isBatch:(BOOL)arg6 timeStamp:(unsigned int)arg7;
- (void)onBatchCheckResource:(id)arg1 resourcesDic:(id)arg2 blockTimeDic:(id)arg3 noUpdateProjectIds:(id)arg4 errorProjectIds:(id)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
- (void)onPeriodCheckResource:(id)arg1 resourcesDic:(id)arg2 noUpdateProjectIds:(id)arg3 errorProjectIds:(id)arg4 errorType:(unsigned long long)arg5 errorCode:(int)arg6 timeStamp:(unsigned int)arg7 nextUpdateInterval:(int)arg8 isFinish:(int)arg9 newOffset:(id)arg10;
- (void)onSpecifiedCheckResource:(id)arg1 resources:(id)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 extInfo:(id)arg7;
- (void)onReceiveCheckResource:(id)arg1 resources:(id)arg2;
- (void)onReceiveBugFixCDN:(id)arg1;
- (void)onReceiveCheckUpdateBackend:(id)arg1 nameList:(id)arg2;
- (void)onReceiveGetSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (id)udrDBMgr;
- (void)setUdrDBMgr:(id)arg1;
- (id)resourceMgr;
- (void)setResourceMgr:(id)arg1;
- (void).cxx_destruct;
@end

