@interface QDotScatterOverlay : QGLOverlay
{
    BOOL _enable3D; // +0x8
    BOOL _animated; // +0x9
    NSArray * _nodes; // +0x10
    NSArray * _colors; // +0x18
    double _radius; // +0x20
}
- (void)setNodes:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setColors:(id)arg1;
- (void)setNeedsDisplay;
- (void *)createImpl;
- (void *)createInfoData;
- (vector<tcmapkit::RGBColor, std::allocator<tcmapkit::RGBColor>>)processColorCopy;
- (ScatterPlotCell * *)createScatterData;
- (void)destoryImpl;
- (void)destoryInfoData:(void *)arg1;
- (id)init;
- (void)recordGLoverlayCount:(id)arg1;
- (id)nodes;
- (id)colors;
- (double)radius;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (void).cxx_destruct;
@end
