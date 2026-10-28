@interface MMKPwdInputViewOnEndEnterPasswordCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KPwdInputViewOnEndEnterPasswordCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onEndEnterPassword:(id)arg1 passwordHashData:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
