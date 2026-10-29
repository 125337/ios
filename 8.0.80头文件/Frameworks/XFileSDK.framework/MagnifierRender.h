@interface MagnifierRender : XFileRenderer
{
    vector<xfile::FrameTileInfo, std::allocator<xfile::FrameTileInfo>> _tiles; // +0x10
    double _magScale; // +0x28
    CGPoint _transform; // +0x30
}
- (vector<xfile::FrameTileInfo, std::allocator<xfile::FrameTileInfo>>)getFrameTiles;
- (void)setTransform:(CGPoint)arg1;
- (CGPoint)transform;
- (double)magScale;
- (void)setMagScale:(double)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
