@interface SendAuthReq : BaseReq
{
    NSString * scope; // +0x18
    NSString * state; // +0x20
}
- (id)init;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (void).cxx_destruct;
@end
