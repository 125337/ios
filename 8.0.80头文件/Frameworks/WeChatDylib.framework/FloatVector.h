@interface FloatVector : NSObject
{
    vector<float, std::allocator<float>> v; // +0x8
}
+ (id)fromNative:(void *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithVector:(id)arg1;
- (long long)length;
- (float *)nativeArray;
- (id)initWithNativeArray:(float *)arg1 elements:(long long)arg2;
- (void *)nativeRef;
- (id)initWithStdVector:(void *)arg1;
- (float)get:(long long)arg1;
- (id)data;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
