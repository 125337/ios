@interface MMVoidStringBoolCallback : NSObject
{
    Handle<std::shared_ptr<kinda::VoidStringBoolCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)call:(id)arg1 value2:(BOOL)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

