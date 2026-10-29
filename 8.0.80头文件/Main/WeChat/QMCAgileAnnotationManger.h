@interface QMCAgileAnnotationManger : NSObject
+ (void)addAgileMarkers:(id)arg1 toMapView:(id)arg2;
+ (void)removeAgileMarkers:(id)arg1 toMapView:(id)arg2;
+ (void)updateSmallDotAgileMarkersVisibilityForMapView:(id)arg1;
+ (void)clearSmallDotAgileMarkerCacheForMapView:(id)arg1;
+ (void)_showAllCachedSmallDotAgileMarkersOnMapView:(id)arg1 isDark:(BOOL)arg2;
+ (void)_removeSmallDotAgileMarkersFromMapView:(id)arg1;
+ (void)_addSmallDotAgileAnnotationsFromData:(id)arg1 toMapView:(id)arg2 isDark:(BOOL)arg3;
@end
