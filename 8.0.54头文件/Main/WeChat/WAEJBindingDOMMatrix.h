@interface WAEJBindingDOMMatrix : WAEJBindingBase
{
    vector<float, std::allocator<float>> _data; // +0x20
}
+ (void *)_ptr_to_get_a;
+ (void *)_ptr_to_get_b;
+ (void *)_ptr_to_get_c;
+ (void *)_ptr_to_get_d;
+ (void *)_ptr_to_get_e;
+ (void *)_ptr_to_get_f;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (OpaqueJSValue *)_get_a:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_b:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_c:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_d:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_e:(OpaqueJSContext *)arg1;
- (OpaqueJSValue *)_get_f:(OpaqueJSContext *)arg1;
- (vector<float, std::allocator<float>>)data;
- (void)setData:(vector<float, std::allocator<float>>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

