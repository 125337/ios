@interface OMCVideoTagDesc : NSObject
{
    BOOL _isPositionNormalized; // +0x8
    NSString * _text; // +0x10
    CGPoint _position; // +0x18
}
- (id)initWithText:(id)arg1 position:(CGPoint)arg2;
- (id)initWithText:(id)arg1 normalizedPosition:(CGPoint)arg2;
- (id)initWithText:(id)arg1 position:(CGPoint)arg2 isPositionNormalized:(BOOL)arg3;
- (id)description;
- (id)text;
- (CGPoint)position;
- (BOOL)isPositionNormalized;
- (void).cxx_destruct;
@end
