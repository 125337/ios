@interface EcsPoiService : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _locationRequestList; // +0x8
    NSObject<OS_dispatch_queue> * _locationRequestQueue; // +0x10
    unsigned long long _cacheRefreshLocationTag; // +0x18
}
+ (id)createEcsPoiInfoWithErrCode:(unsigned int)arg1 longitude:(float)arg2 latitude:(float)arg3 updateTime:(unsigned long long)arg4;
- (id)init;
- (void)dealloc;
- (void)startCacheRefreshLocation;
- (void)stopCacheRefreshLocationWithTag:(unsigned long long)arg1;
- (void)stopCacheRefreshLocationWithTag:(unsigned long long)arg1 errorCode:(int)arg2 logError:(BOOL)arg3;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)printWithWrapper:(id)arg1 tagfix:(id)arg2;
- (void)addLocationRequest:(id)arg1;
- (void)removeLocationRequest:(id)arg1;
- (id)convertLocationCacheItem:(id)arg1;
- (id)syncGetAndUpdatePoiInfoWithSource:(unsigned int)arg1 poiValidTimeSec:(unsigned int)arg2;
- (void)asyncGetAndUpdatePoiInfoWithSource:(unsigned int)arg1 poiValidTimeSec:(unsigned int)arg2 waitingPoiUpdateResult:(BOOL)arg3 waitingPoiUpdateTimeoutSec:(unsigned int)arg4 callback:(id /* block */)arg5;
- (id)locationRequestList;
- (void)setLocationRequestList:(id)arg1;
- (id)locationRequestQueue;
- (void)setLocationRequestQueue:(id)arg1;
- (unsigned long long)cacheRefreshLocationTag;
- (void)setCacheRefreshLocationTag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
