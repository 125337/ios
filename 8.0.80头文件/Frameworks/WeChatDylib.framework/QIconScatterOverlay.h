@interface QIconScatterOverlay : QGLOverlay
{
    BOOL _enable3D; // +0x8
    NSArray * _nodes; // +0x10
    NSArray * _icons; // +0x18
    CGSize _size; // +0x20
}
- (void)setSize:(CGSize)arg1;
- (void)setIcons:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setNeedsDisplay;
- (void *)createImpl;
- (void *)createInfoData;
- (void)createBitmaps:(void *)arg1 from:(void *)arg2;
- (ScatterPlotCell * *)createScatterData;
- (void)destoryInfoData:(void *)arg1;
- (id)init;
- (void)destoryImpl;
- (void)recordGLoverlayCount:(id)arg1;
- (id)nodes;
- (id)icons;
- (CGSize)size;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (void).cxx_destruct;
@end
