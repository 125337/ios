@interface WAJSContextPlugin_realTimeDataOperation : WAJSContextPluginBase <WARealtimeDataOperationExt>
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)addOperation:(id)arg1;
- (void)appid:(id)arg1 operationsIdList:(id)arg2 resultWithErrCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)dispatchEvent:(id)arg1 params:(id)arg2;
@end
