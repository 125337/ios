@interface QMCPolygonManger : NSObject
+ (void)cachePolygons:(id)arg1 forMapView:(id)arg2;
+ (void)showPolygonForMarkerId:(id)arg1 onMapView:(id)arg2;
+ (void)hideCurrentPolygonOnMapView:(id)arg1;
+ (void)clearCacheForMapView:(id)arg1;
+ (id)cachedPolygonDataForMarkerId:(id)arg1 onMapView:(id)arg2;
+ (id)createPolygonsFromData:(id)arg1 mapView:(id)arg2;
+ (id)buildPolygonWithLatLngs:(id)arg1 identifier:(id)arg2 themeDict:(id)arg3 polygonData:(id)arg4;
+ (void)addPolygons:(id)arg1 toMapView:(id)arg2;
+ (void)removePolygons:(id)arg1 toMapView:(id)arg2;
@end
