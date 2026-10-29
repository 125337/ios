@interface EcsActionHandler_getEcsWeShopPoiData : EcsActionHandler_Base
{
    EcsPoiPermission * _permission; // +0x8
}
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (id)convertPoiDataToJson:(id)arg1 timeCost:(unsigned long long)arg2;
- (void)asyncGetPoiInfoWithService:(id)arg1 poiValidTimeSec:(int)arg2 waitingPoiUpdateResult:(BOOL)arg3 waitingPoiUpdateTimeoutSec:(int)arg4 startTime:(unsigned long long)arg5;
- (void)handleAction:(id)arg1;
- (id)permission;
- (void)setPermission:(id)arg1;
- (void).cxx_destruct;
@end
