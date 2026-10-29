@interface WCTiledImageView : UIImageView
{
    WCTiledImageTask * _tiledImageTask; // +0x8
    NSMutableArray * _tiledImageInfos; // +0x10
    CGSize _tileSize; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setTileSize:(CGSize)arg1;
- (void)startTileWithImageData:(id)arg1;
- (void)onDisplayInRect:(CGRect)arg1;
- (void)_onDisplayInRect:(id)arg1;
- (void)stopDisplay;
- (id)tiledImageInfos;
- (CGSize)tileSize;
- (id)tiledImageTask;
- (void)setTiledImageTask:(id)arg1;
- (void)setTiledImageInfos:(id)arg1;
- (void).cxx_destruct;
@end
