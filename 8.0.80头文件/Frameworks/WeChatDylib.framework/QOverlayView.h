@interface QOverlayView : NSObject
{
    int _zIndex; // +0x8
    int _minZoomLevel; // +0xc
    int _maxZoomLevel; // +0x10
    int _strokeId; // +0x14
    int _fillId; // +0x18
    id <QOverlay> _overlay; // +0x20
    long long _displayLevel; // +0x28
    QOverlayContainer * _container; // +0x30
    long long _internalDisplayLevel; // +0x38
}
- (id)init;
- (void)setZIndex:(int)arg1;
- (void)setContainer:(id)arg1;
- (void)prepareForUse;
- (void)onDidAdd;
- (void)onWillRemove;
- (void)setDisplayLevel:(long long)arg1;
- (void)setMinZoomLevel:(int)arg1 maxZoomLevel:(int)arg2;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (int)clampZoomLevel:(int)arg1;
- (id)overlay;
- (void)setOverlay:(id)arg1;
- (long long)displayLevel;
- (int)zIndex;
- (int)minZoomLevel;
- (void)setMinZoomLevel:(int)arg1;
- (int)maxZoomLevel;
- (void)setMaxZoomLevel:(int)arg1;
- (id)container;
- (int)strokeId;
- (void)setStrokeId:(int)arg1;
- (int)fillId;
- (void)setFillId:(int)arg1;
- (long long)internalDisplayLevel;
- (void)setInternalDisplayLevel:(long long)arg1;
- (void).cxx_destruct;
@end
