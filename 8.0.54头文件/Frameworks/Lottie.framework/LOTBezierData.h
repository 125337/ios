@interface LOTBezierData : NSObject
{
    CGPoint * _vertices; // +0x8
    CGPoint * _inTangents; // +0x10
    CGPoint * _outTangents; // +0x18
    BOOL _closed; // +0x20
    long long _count; // +0x28
}
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (CGPoint)vertexAtIndex:(long long)arg1;
- (CGPoint)inTangentAtIndex:(long long)arg1;
- (CGPoint)outTangentAtIndex:(long long)arg1;
- (void)initializeData:(id)arg1;
- (CGPoint)_vertexAtIndex:(long long)arg1 inArray:(id)arg2;
- (long long)count;
- (BOOL)closed;
@end

