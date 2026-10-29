@interface QWorldTileOverlayCustomProvider : QWorldTileOverlayDataProvider
{
    QOverseaProvider * _userProvider; // +0x8
}
- (id)init;
- (id)URLForTilePath:(struct)arg1;
- (void)onStyleChanged:(unsigned long long)arg1;
- (void)resetDataWithConfig:(id)arg1;
- (id)userProvider;
- (void)setUserProvider:(id)arg1;
- (void).cxx_destruct;
@end
