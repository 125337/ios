@interface MMVoidF32I32F32I32Callback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidF32I32F32I32Callback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(float)arg1 value2:(int)arg2 value3:(float)arg3 value4:(int)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
