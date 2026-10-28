@interface MMVoidI32Callback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidI32Callback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
