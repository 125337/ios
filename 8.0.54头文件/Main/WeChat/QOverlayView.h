@interface QOverlayView : NSObject
{
    int _zIndex; // +0x8
    int _strokeId; // +0xc
    int _fillId; // +0x10
    id <QOverlay> _overlay; // +0x18
    long long _displayLevel; // +0x20
    QOverlayContainer * _container; // +0x28
}
- (id)init;
- (void)setZIndex:(int)arg1;
- (void)setContainer:(id)arg1;
- (void)prepareForUse;
- (void)onDidAdd;
- (void)onWillRemove;
- (void)setDisplayLevel:(long long)arg1;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (id)overlay;
- (void)setOverlay:(id)arg1;
- (long long)displayLevel;
- (int)zIndex;
- (id)container;
- (int)strokeId;
- (void)setStrokeId:(int)arg1;
- (int)fillId;
- (void)setFillId:(int)arg1;
- (void).cxx_destruct;
@end

