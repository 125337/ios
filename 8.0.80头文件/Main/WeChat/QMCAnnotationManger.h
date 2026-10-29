@interface QMCAnnotationManger : NSObject
+ (void)addMarkers:(id)arg1 toMapView:(id)arg2;
+ (void)addMarkers:(id)arg1 toMapView:(id)arg2 params:(id)arg3 forceMarkerVisible:(BOOL)arg4;
+ (void)_addMarkers:(id)arg1 toMapView:(id)arg2 routeName:(id)arg3 forceVisible:(BOOL)arg4;
+ (void)removeMarkers:(id)arg1 toMapView:(id)arg2;
+ (id)_buildAnnotationFromData:(id)arg1 routeName:(id)arg2 forceVisible:(BOOL)arg3;
@end
