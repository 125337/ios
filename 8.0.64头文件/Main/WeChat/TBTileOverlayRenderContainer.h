@interface TBTileOverlayRenderContainer : NSObject
{
    NSMutableArray * _tileOverlayRenders; // +0x8
}
- (id)init;
- (void)addTileOverlayView:(id)arg1;
- (id)removeForTileOverlay:(id)arg1;
- (id)tileOverlays;
- (BOOL)isEmpty;
- (id)tileOverlayViewWithTag:(int)arg1;
- (id)viewForOverlay:(id)arg1;
- (void).cxx_destruct;
@end
