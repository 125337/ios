@interface QMCPolylineManger : NSObject
+ (void)addPolylines:(id)arg1 toMapView:(id)arg2;
+ (id)trafficColorForLevel:(long long)arg1 speed:(long long)arg2;
+ (id)trafficBorderColorForLevel:(long long)arg1 speed:(long long)arg2;
+ (id)buildTrafficSegmentColors:(id)arg1 lineColor:(id)arg2 borderColor:(id)arg3;
+ (id)createDashLineFromCoord:(id)arg1 toCoord:(id)arg2 identifier:(id)arg3 suffix:(id)arg4 polylineData:(id)arg5;
+ (void)removePolylines:(id)arg1 toMapView:(id)arg2;
@end
