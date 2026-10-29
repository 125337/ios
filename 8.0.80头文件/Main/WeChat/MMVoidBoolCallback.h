@interface MMVoidBoolCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidBoolCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
