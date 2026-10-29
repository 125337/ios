@interface OMJSpatialInfo : NSObject
{
    float _scale; // +0x8
    float _rotation; // +0xc
    CGPoint _position; // +0x10
    CGPoint _anchorPoint; // +0x20
}
- (id)initWithScale:(float)arg1 rotation:(float)arg2 position:(CGPoint)arg3;
- (id)initWithScale:(float)arg1 rotation:(float)arg2 position:(CGPoint)arg3 anchorPoint:(CGPoint)arg4;
- (id)description;
- (float)scale;
- (void)setScale:(float)arg1;
- (float)rotation;
- (void)setRotation:(float)arg1;
- (CGPoint)position;
- (void)setPosition:(CGPoint)arg1;
- (CGPoint)anchorPoint;
- (void)setAnchorPoint:(CGPoint)arg1;
@end

