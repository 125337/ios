@interface MJSegmentLayerSpatialInfo : NSObject
{
    float _layerRotation; // +0x8
    CGPoint _layerPosition; // +0x10
    CGPoint _layerScale; // +0x20
}
- (id)initWithLayerPosition:(CGPoint)arg1 layerScale:(CGPoint)arg2 layerRotation:(float)arg3;
- (CGPoint)layerPosition;
- (void)setLayerPosition:(CGPoint)arg1;
- (CGPoint)layerScale;
- (void)setLayerScale:(CGPoint)arg1;
- (float)layerRotation;
- (void)setLayerRotation:(float)arg1;
@end

