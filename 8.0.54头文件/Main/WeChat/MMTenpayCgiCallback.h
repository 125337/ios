@interface MMTenpayCgiCallback : NSObject
{
    Handle<std::shared_ptr<kinda::TenpayCgiCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onError:(int)arg1 errmsg:(id)arg2;
- (void)onSuccess:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

