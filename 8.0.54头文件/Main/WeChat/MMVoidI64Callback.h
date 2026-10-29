@interface MMVoidI64Callback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidI64Callback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

