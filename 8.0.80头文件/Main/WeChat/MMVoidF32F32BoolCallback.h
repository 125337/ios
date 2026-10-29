@interface MMVoidF32F32BoolCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidF32F32BoolCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(float)arg1 value2:(float)arg2 value3:(BOOL)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
