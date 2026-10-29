@interface MMVoidBoolOptionCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidBoolOptionCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(BOOL)arg1 value2:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

