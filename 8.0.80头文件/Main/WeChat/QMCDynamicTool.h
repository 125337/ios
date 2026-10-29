@interface QMCDynamicTool : NSObject
+ (id)formatDynamicParams:(id)arg1;
+ (BOOL)validateParams:(id)arg1;
+ (BOOL)validateAddMarkers:(id)arg1;
+ (BOOL)validateAddAgileMarkers:(id)arg1;
+ (BOOL)validateAddPolylines:(id)arg1;
+ (BOOL)validateAddPolygons:(id)arg1;
+ (BOOL)validateRemoveItems:(id)arg1 type:(id)arg2;
+ (BOOL)validateMoveCamera:(id)arg1;
+ (BOOL)validateMoveCameraWithBounds:(id)arg1;
+ (BOOL)validateLatLngs:(id)arg1;
+ (id)extractRoadMaskArray:(id)arg1;
@end
