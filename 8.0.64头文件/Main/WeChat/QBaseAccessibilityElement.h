@interface QBaseAccessibilityElement : UIAccessibilityElement
{
    int _flickcount; // +0x8
    QMapView * _baseMapView; // +0x10
}
- (id)description;
- (void)setMapZoomLevelDelta:(int)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)buildZoomRotor;
- (id)buildPOIRotor;
- (id)createRotorItemWithNextDirection:(id)arg1;
- (id)createRotorItemWithPreviousDirection:(id)arg1;
- (CGPoint)makeMovementPoint:(double)arg1 withYRatio:(double)arg2;
- (void)changeMapCenter:(CGPoint)arg1;
- (void)resetFlickCount;
- (id)baseMapView;
- (void)setBaseMapView:(id)arg1;
- (int)flickcount;
- (void)setFlickcount:(int)arg1;
- (void).cxx_destruct;
@end
