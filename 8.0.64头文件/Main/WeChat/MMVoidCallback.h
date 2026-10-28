@interface MMVoidCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
