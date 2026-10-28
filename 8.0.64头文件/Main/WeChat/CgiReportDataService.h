@interface CgiReportDataService : MMUserService <IExptServiceExt, IOnCgiReportTaskEnd, MMServiceProtocol>
{
    BOOL _needRptKv; // +0x8
    BOOL _useMMKV; // +0x9
    NSMutableDictionary * _routerMap; // +0x10
    NSMutableArray * _waitingQueue; // +0x18
    NSMutableSet * _sendingQueue; // +0x20
    NSMutableDictionary * _collectMap; // +0x28
    NSMutableDictionary * _waitToReqSvrMap; // +0x30
    NSDictionary * _clientKvMap; // +0x38
    CgiReportFlowGuarder * _flowGuarder; // +0x40
    CgiReportDataSender * _sender; // +0x48
    CgiReportDataController * _controller; // +0x50
    NSMutableSet * _liteAppCustomReportBizIds; // +0x58
    NSMutableDictionary * _collectConfigs; // +0x60
    CgiCollectConfig * _defaultCollectConfig; // +0x68
    CgiReportItemConfiger * _configer; // +0x70
}
+ (id)sharedSerialQueue;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)checkToReturnCollectMapItem:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
- (BOOL)sendLiteAppCustomBatchReportData:(unsigned int)arg1 andIsBatchReport:(BOOL)arg2 andJsonArray:(id)arg3;
- (BOOL)sendLiteAppReportData:(unsigned int)arg1 andIsBatchReport:(BOOL)arg2 andJsonArray:(id)arg3;
- (BOOL)sendH5AppReportData:(unsigned int)arg1 andIsBatchReport:(BOOL)arg2 andJsonArray:(id)arg3;
- (BOOL)sendReportData:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
- (BOOL)sendReportDataAutoCollect:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
- (void)checkToReportAllCollectMap:(id)arg1;
- (void)collectToSend:(id)arg1;
- (id)createCollectKey:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
- (BOOL)sendReportData:(id)arg1;
- (void)putToQueue:(id)arg1;
- (void)checkToSend;
- (void)onCgiTaskEnd:(int)arg1 andTask:(id)arg2;
- (void)sendFail:(id)arg1;
- (void)sendSuccess:(id)arg1;
- (id)getAndRemoveWaitingData;
- (BOOL)isSendingQueueFull;
- (void)readExptConfig;
- (id)checkToGetRouteInfo:(unsigned int)arg1;
- (id)createDefaultRouterInfo:(unsigned int)arg1;
- (void)onExptItemListChange;
- (void)setUnReqSvrItem:(id)arg1;
- (void)removeUnReqItemBySendSuccess:(id)arg1;
- (void)saveToMMKV:(id)arg1 andTrace:(id)arg2;
- (id)readFromMMKV;
- (id)mmkvMapID;
- (void)clientKvReport:(id)arg1 andBusinessId:(unsigned int)arg2;
- (id)compressReportData:(id)arg1 andMaxLength:(unsigned int)arg2;
- (id)checkToReturnCollectConfig:(unsigned int)arg1;
- (id)routerMap;
- (void)setRouterMap:(id)arg1;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (id)sendingQueue;
- (void)setSendingQueue:(id)arg1;
- (id)collectMap;
- (void)setCollectMap:(id)arg1;
- (id)waitToReqSvrMap;
- (void)setWaitToReqSvrMap:(id)arg1;
- (BOOL)needRptKv;
- (void)setNeedRptKv:(BOOL)arg1;
- (BOOL)useMMKV;
- (void)setUseMMKV:(BOOL)arg1;
- (id)clientKvMap;
- (void)setClientKvMap:(id)arg1;
- (id)flowGuarder;
- (void)setFlowGuarder:(id)arg1;
- (id)sender;
- (void)setSender:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)liteAppCustomReportBizIds;
- (void)setLiteAppCustomReportBizIds:(id)arg1;
- (id)collectConfigs;
- (void)setCollectConfigs:(id)arg1;
- (id)defaultCollectConfig;
- (void)setDefaultCollectConfig:(id)arg1;
- (id)configer;
- (void)setConfiger:(id)arg1;
- (void).cxx_destruct;
@end
