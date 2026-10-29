@interface LOTTransformInterpolator : NSObject
{
    LOTPointInterpolator * _positionInterpolator; // +0x8
    LOTPointInterpolator * _anchorInterpolator; // +0x10
    LOTSizeInterpolator * _scaleInterpolator; // +0x18
    LOTNumberInterpolator * _rotationInterpolator; // +0x20
    LOTNumberInterpolator * _positionXInterpolator; // +0x28
    LOTNumberInterpolator * _positionYInterpolator; // +0x30
    LOTTransformInterpolator * _inputNode; // +0x38
    NSString * _parentKeyName; // +0x40
}
+ (id)transformForLayer:(id)arg1;
- (id)initWithPosition:(id)arg1 rotation:(id)arg2 anchor:(id)arg3 scale:(id)arg4;
- (id)initWithPositionX:(id)arg1 positionY:(id)arg2 rotation:(id)arg3 anchor:(id)arg4 scale:(id)arg5;
- (void)initializeWithPositionX:(id)arg1 positionY:(id)arg2 position:(id)arg3 rotation:(id)arg4 anchor:(id)arg5 scale:(id)arg6;
- (BOOL)hasUpdateForFrame:(id)arg1;
- (CATransform3D)transformForFrame:(id)arg1;
- (id)inputNode;
- (void)setInputNode:(id)arg1;
- (id)positionInterpolator;
- (id)anchorInterpolator;
- (id)scaleInterpolator;
- (id)rotationInterpolator;
- (id)positionXInterpolator;
- (id)positionYInterpolator;
- (id)parentKeyName;
- (void)setParentKeyName:(id)arg1;
- (void).cxx_destruct;
@end

