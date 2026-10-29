@interface WXAuthInternal : NSObject
{
    NSString * scope; // +0x8
    NSString * state; // +0x10
}
- (id)init;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (void).cxx_destruct;
@end
