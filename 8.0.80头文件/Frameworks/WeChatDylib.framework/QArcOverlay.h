@interface QArcOverlay : QGLOverlay
{
    BOOL _enable3D; // +0x8
    NSArray * _curves; // +0x10
    QArcStyle * _style; // +0x18
    QArcOverlayAnimation * _animation; // +0x20
}
- (id)init;
- (void *)loadArcLineInfo:(ArcLineData *)arg1;
- (void)setDisplayLevel:(long long)arg1;
- (void)setStyle:(id)arg1;
- (void *)createImpl;
- (id)getType;
- (void)setNeedsDisplay;
- (void)updateArcLineData:(void *)arg1;
- (void)setArcLineData:(void *)arg1 info:(ArcLineData *)arg2;
- (vector<tcmapkit::ArcLineCell *, std::allocator<tcmapkit::ArcLineCell *>>)createArcLineCells;
- (Gradient *)createGradient;
- (id)makeUpGradientColor;
- (void)destoryImpl;
- (RGBColor)rgbColor:(id)arg1;
- (BOOL)checkDrawStatus;
- (void)recordGLoverlayCount:(id)arg1;
- (id)curves;
- (void)setCurves:(id)arg1;
- (id)style;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (BOOL)enable3D;
- (void)setEnable3D:(BOOL)arg1;
- (void).cxx_destruct;
@end
