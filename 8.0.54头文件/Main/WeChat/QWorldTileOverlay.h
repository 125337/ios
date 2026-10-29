@interface QWorldTileOverlay : QTileOverlay
{
    BOOL _darkEnabled; // +0x28
    int _sceneType; // +0x2c
    long long _language; // +0x30
    QUniversalMapCounter * _universalCounter; // +0x38
    QWorldTileOverlayDataProvider * _worldProvider; // +0x40
    QWorldTileOverlayDataProvider * _normalProvider; // +0x48
    QWorldTileOverlayDataProvider * _darkProvider; // +0x50
}
- (id)provider;
- (void)setDarkEnabled:(BOOL)arg1;
- (id)fakeUrlForPath:(struct)arg1;
- (id)URLForTilePath:(struct)arg1;
- (void)loadTileAtPath:(struct)arg1 result:(id /* block */)arg2;
- (void)onWorldVesionCheck:(id)arg1;
- (void)dealloc;
- (id)init;
- (long long)language;
- (void)setLanguage:(long long)arg1;
- (BOOL)darkEnabled;
- (id)universalCounter;
- (void)setUniversalCounter:(id)arg1;
- (id)worldProvider;
- (void)setWorldProvider:(id)arg1;
- (id)normalProvider;
- (void)setNormalProvider:(id)arg1;
- (id)darkProvider;
- (void)setDarkProvider:(id)arg1;
- (int)sceneType;
- (void)setSceneType:(int)arg1;
- (void).cxx_destruct;
@end

