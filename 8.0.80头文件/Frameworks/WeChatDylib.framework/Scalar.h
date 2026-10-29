@interface Scalar : NSObject
{
    Scalar_<double> native; // +0x8
}
+ (id)fromNative:(void *)arg1;
+ (id)all:(double)arg1;
- (id)val;
- (void *)nativeRef;
- (id)initWithVals:(id)arg1;
- (id)initWithV0:(double)arg1 v1:(double)arg2 v2:(double)arg3 v3:(double)arg4;
- (id)initWithV0:(double)arg1 v1:(double)arg2 v2:(double)arg3;
- (id)initWithV0:(double)arg1 v1:(double)arg2;
- (id)initWithV0:(double)arg1;
- (id)clone;
- (id)mul:(id)arg1 scale:(double)arg2;
- (id)mul:(id)arg1;
- (id)conj;
- (BOOL)isReal;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
@end
