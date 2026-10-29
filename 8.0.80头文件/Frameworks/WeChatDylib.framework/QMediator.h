@interface QMediator : NSObject
{
    QBasicMapView * _basicMapView; // +0x8
    QIndoorManager * _indoorManager; // +0x10
    QStyleManager * _styleManager; // +0x18
}
+ (id)mediatorWithBasicMapView:(id)arg1 indoorManager:(id)arg2 styleManager:(id)arg3;
- (id)getBasicMapView;
- (id)getActiveBuildingGuid;
- (id)getActiveLevelName;
- (long long)getKeyType;
- (BOOL)hasIndoorPrevilege;
- (id)getStyleIDString;
- (CGPoint)convertMapPoint:(struct)arg1 toPointToView:(id)arg2;
- (struct)convertPoint:(CGPoint)arg1 toMapPointFromView:(id)arg2;
- (void)updateMapToCenterCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (struct)visibleMapRect;
- (double)zoomLevel;
- (double)rotation;
- (double)skew;
- (double)scaleLevel;
- (void)makeDirty;
- (BOOL)currentMapContainsChina;
- (void)event_mapStatusChanged;
- (int)renderType;
- (struct)centerMapPoint;
- (float *)getViewMatrix;
- (float *)getProjectionMatrix;
- (CGPoint)glPointForMapPoint:(struct)arg1;
- (struct)mapPointForScreenPoint:(CGPoint)arg1;
- (CGPoint)screenPointForMapPoint:(struct)arg1;
- (float)pixelRatio;
- (float)pointRatio;
- (CGSize)viewSize;
- (void)switchGLContext;
- (void)resetGLContext;
- (id)initWithBasicMapView:(id)arg1 indoorManager:(id)arg2 styleManager:(id)arg3;
- (void *)renderEngineHandler;
- (id)configDirectoryPath;
- (void)enableL4:(BOOL)arg1;
- (id)basicMapView;
- (void)setBasicMapView:(id)arg1;
- (id)indoorManager;
- (void)setIndoorManager:(id)arg1;
- (id)styleManager;
- (void)setStyleManager:(id)arg1;
- (void).cxx_destruct;
@end
