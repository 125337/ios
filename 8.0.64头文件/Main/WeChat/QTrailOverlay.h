@interface QTrailOverlay : QGLOverlay
{
    int _linesCount; // +0x8
    NSArray * _lines; // +0x10
    QTrailLineStyle * _style; // +0x18
}
- (void)setStyle:(id)arg1;
- (id)initWithTrailData:(id)arg1;
- (void)setNeedsDisplay;
- (void *)createImpl;
- (void)destoryImpl;
- (void)destoryInfoData:(TrailData *)arg1;
- (void)updateTrailData:(TrailData *)arg1;
- (TrailCell * *)getNodeData;
- (TrailCell * *)buildDataByCustomTime:(id)arg1;
- (TrailCell *)constructTrailCellWithTimestamp:(id)arg1;
- (BOOL)validateTrailData:(id)arg1;
- (Gradient *)createGradient;
- (vec2)convertCoordToMapCoord:(CLLocationCoordinate2D)arg1;
- (RGBColor)rgbColor:(id)arg1;
- (int)getTrailType;
- (void)recordGLoverlayCount:(id)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)style;
- (int)linesCount;
- (void)setLinesCount:(int)arg1;
- (void).cxx_destruct;
@end
