@interface MMKPwdInputViewOnPasswordChangeCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onPasswordChange:(int)arg1 payPassword:(id)arg2 passwordHashData:(id)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

