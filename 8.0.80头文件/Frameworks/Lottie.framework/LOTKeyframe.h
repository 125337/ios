@interface LOTKeyframe : NSObject
{
    BOOL _isHold; // +0x8
    NSNumber * _keyframeTime; // +0x10
    double _floatValue; // +0x18
    UIColor * _colorValue; // +0x20
    LOTBezierData * _pathData; // +0x28
    NSArray * _arrayValue; // +0x30
    CGPoint _inTangent; // +0x38
    CGPoint _outTangent; // +0x48
    CGPoint _spatialInTangent; // +0x58
    CGPoint _spatialOutTangent; // +0x68
    CGPoint _pointValue; // +0x78
    CGSize _sizeValue; // +0x88
}
- (id)initWithKeyframe:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithLOTKeyframe:(id)arg1;
- (id)copyWithData:(id)arg1;
- (void)setData:(id)arg1;
- (void)remapValueWithBlock:(id /* block */)arg1;
- (void)setupOutputWithData:(id)arg1;
- (CGPoint)_pointFromValueArray:(id)arg1;
- (CGPoint)_pointFromValueDict:(id)arg1;
- (id)_colorValueFromArray:(id)arg1;
- (id)keyframeTime;
- (BOOL)isHold;
- (CGPoint)inTangent;
- (CGPoint)outTangent;
- (CGPoint)spatialInTangent;
- (CGPoint)spatialOutTangent;
- (double)floatValue;
- (CGPoint)pointValue;
- (CGSize)sizeValue;
- (id)colorValue;
- (id)pathData;
- (id)arrayValue;
- (void).cxx_destruct;
@end
