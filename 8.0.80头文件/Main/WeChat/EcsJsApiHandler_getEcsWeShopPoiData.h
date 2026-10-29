@interface EcsJsApiHandler_getEcsWeShopPoiData : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (id)convertPoiDataToJson:(id)arg1 timeCost:(unsigned long long)arg2;
- (void)asyncGetPoiInfoWithService:(id)arg1 poiValidTimeSec:(int)arg2 waitingPoiUpdateResult:(BOOL)arg3 waitingPoiUpdateTimeoutSec:(int)arg4 startTime:(unsigned long long)arg5 callback:(id)arg6;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
@end
