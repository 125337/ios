@interface XNetInferenceTensorDescription : NSObject
{
    TensorDesc _underlying; // +0x8
}
- (id)initWithUnderlying:(const void *)arg1;
- (const void *)underlying;
- (id)initWithShape:(id)arg1 dataType:(id)arg2;
- (id)shape;
- (id)dataType;
- (long long)stride;
- (id).cxx_construct;
@end
