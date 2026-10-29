@interface QTileOverlayInternalContext : NSObject
{
    QTileOverlayHandler * _payload; // +0x8
    id /* block */ _loadTileBlock; // +0x10
    id /* block */ _writeTileBlock; // +0x18
}
- (id)payload;
- (void)setPayload:(id)arg1;
- (id /* block */)loadTileBlock;
- (void)setLoadTileBlock:(id /* block */)arg1;
- (id /* block */)writeTileBlock;
- (void)setWriteTileBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

