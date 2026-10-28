@interface QTileOverlayView : QOverlayView
{
    int _zIndex; // +0x8
    QTileOverlay * _tileOverlay; // +0x10
    QMapContext * _mapContext; // +0x18
    QTileOverlayManager * _tileOverlayManager; // +0x20
    QTileOverlayHandler * _handler; // +0x28
}
- (void)setZIndex:(int)arg1;
- (void)setTileOverlayManager:(id)arg1;
- (struct)pathForInternal:(id)arg1;
- (id)generatePayload;
- (void)startRender;
- (void)endRender;
- (void)reloadData;
- (id)fakeUrlForPath:(struct)arg1;
- (id)keyForTilePath:(const struct *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)variablesForInfluencingReusedMultiLevel;
- (void)addObserverForTileOverlay:(id)arg1;
- (void)removeObserverForTileOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (void)dealloc;
- (int)zIndex;
- (id)tileOverlay;
- (void)setTileOverlay:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (id)tileOverlayManager;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void).cxx_destruct;
@end
