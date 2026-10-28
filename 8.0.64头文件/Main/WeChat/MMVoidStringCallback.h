@interface MMVoidStringCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidStringCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
