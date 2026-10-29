@interface CgiReportDataSender : NSObject <IExptServiceExt, WCSessionFlowMonitorExt, IOnCgiReportTaskEnd>
{
    BOOL _useMMKV; // +0x8
    unsigned int _lastReadCacheFileTimeSec; // +0xc
    NSMutableDictionary * _sendingMaps; // +0x10
    unsigned long long _mmkvReportItemCount; // +0x18
    NSMutableDictionary * _routerMap; // +0x20
    unsigned long long _lastMMKVTrimTimeMs; // +0x28
}
- (id)init;
- (void)initDefaultConfig;
- (void)putCgiRouter:(unsigned int)arg1 andCmdId:(unsigned int)arg2 andTryCount:(unsigned int)arg3 andCgiPath:(id)arg4;
- (void)onEnterForeground;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)putToQueue:(id)arg1;
- (void)checkToSend;
- (void)onCgiTaskEnd:(int)arg1 andTask:(id)arg2;
- (void)sendFail:(id)arg1;
- (void)sendSuccess:(id)arg1;
- (BOOL)isSendingQueueFull;
- (id)getReportDataFromMMKV;
- (void)saveToMMKV:(id)arg1;
- (void)removeFromMMKV:(id)arg1;
- (void)readMMKVCount;
- (id)mmkvMapID;
- (id)getRouteInfo:(unsigned int)arg1;
- (id)createDefaultRouterInfo:(unsigned int)arg1;
- (void)onExptItemListChange;
- (void)readExptConfig;
- (void)checkMMKVSize;
- (id)mmCgiReportPath:(id)arg1;
- (id)mmkvFileMapID;
- (id)saveDataToFile:(id)arg1;
- (id)readDataFromFile:(id *)arg1;
- (id)sendingMaps;
- (void)setSendingMaps:(id)arg1;
- (unsigned long long)mmkvReportItemCount;
- (void)setMmkvReportItemCount:(unsigned long long)arg1;
- (id)routerMap;
- (void)setRouterMap:(id)arg1;
- (BOOL)useMMKV;
- (void)setUseMMKV:(BOOL)arg1;
- (unsigned long long)lastMMKVTrimTimeMs;
- (void)setLastMMKVTrimTimeMs:(unsigned long long)arg1;
- (unsigned int)lastReadCacheFileTimeSec;
- (void)setLastReadCacheFileTimeSec:(unsigned int)arg1;
- (void).cxx_destruct;
@end

