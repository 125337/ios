@interface XNetInferenceTensorShape : NSObject
{
    TensorShape _underlying; // +0x8
}
- (id)initWithUnderlying:(const void *)arg1;
- (const void *)underlying;
- (id)initWithData:(id)arg1;
- (id)data;
- (long long)dimension;
- (long long)length;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (id).cxx_construct;
@end

