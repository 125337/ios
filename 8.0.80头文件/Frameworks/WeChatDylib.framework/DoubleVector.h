@interface DoubleVector : NSObject
{
    vector<double, std::allocator<double>> v; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithVector:(id)arg1;
- (unsigned long long)length;
- (double *)nativeArray;
- (id)initWithNativeArray:(double *)arg1 elements:(int)arg2;
- (void *)nativeRef;
- (id)initWithStdVector:(void *)arg1;
- (double)get:(long long)arg1;
- (id)data;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
