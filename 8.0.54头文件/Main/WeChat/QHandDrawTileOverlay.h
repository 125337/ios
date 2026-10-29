@interface QHandDrawTileOverlay : QTileOverlay
{
    QHandDrawTileOverlayDataProvider * _provider; // +0x28
}
- (id)URLForTilePath:(struct)arg1;
- (void)loadTileAtPath:(struct)arg1 result:(id /* block */)arg2;
- (void)onHandDrawMapVesionCheck:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end

