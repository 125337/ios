@interface MMVoidBoolI32Callback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidBoolI32Callback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(BOOL)arg1 value2:(int)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
