@interface QMarkerViewAnimationLayer : CALayer
{
    double _alpha; // +0x8
    double _rotation; // +0x10
    QMarkerView * _markerView; // +0x18
    CGPoint _coordinate; // +0x20
    CGPoint _scale; // +0x30
}
+ (BOOL)isMatchingKeys:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
- (void)setCoordinate:(CGPoint)arg1;
- (void)setAlpha:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setScale:(CGPoint)arg1;
- (CGPoint)coordinate;
- (double)alpha;
- (double)rotation;
- (CGPoint)scale;
- (id)markerView;
- (void)setMarkerView:(id)arg1;
- (void).cxx_destruct;
@end
