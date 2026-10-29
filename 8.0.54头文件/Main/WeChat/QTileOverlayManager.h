@interface QTileOverlayManager : NSObject <QMapContextDelegate>
{
    QMapContext * _mapContext; // +0x8
    id <QTileOverlayManagerDelegate> _delegate; // +0x10
    QMediator * _mediator; // +0x18
    TBTileOverlayRenderContainer * _tileOverlayRenders; // +0x20
}
- (void)mapContext:(id)arg1 downloadTile:(id)arg2;
- (void)mapContext:(id)arg1 cancelDownloadTile:(id)arg2;
- (struct)pathForInternal:(id)arg1;
- (BOOL)containsTileOverlay:(id)arg1;
- (void)refresh;
- (void)setMapContext:(id)arg1;
- (id)addTileOverlay:(id)arg1;
- (void)removeTileOverlay:(id)arg1;
- (void)reloadTileOverlay:(id)arg1;
- (id)tileOverlays;
- (id)viewForOverlay:(id)arg1;
- (void)setTileOverlayPriority:(int)arg1 forPayLoad:(id)arg2;
- (void)updateReuseMultiLevelsForTileOverlayView:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)mapContext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)tileOverlayRenders;
- (void)setTileOverlayRenders:(id)arg1;
- (void).cxx_destruct;
@end

