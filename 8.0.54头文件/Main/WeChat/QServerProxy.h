@interface QServerProxy : NSObject
{
    NSString * _domain; // +0x8
    NSString * _proxy_domain; // +0x10
}
- (id)initWithDict:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)proxy_domain;
- (void)setProxy_domain:(id)arg1;
- (void).cxx_destruct;
@end

