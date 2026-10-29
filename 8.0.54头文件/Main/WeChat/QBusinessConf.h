@interface QBusinessConf : NSObject
{
    BOOL _privacy_protection; // +0x8
    NSArray * _http_proxy; // +0x10
}
- (id)initWithDict:(id)arg1;
- (BOOL)privacy_protection;
- (void)setPrivacy_protection:(BOOL)arg1;
- (id)http_proxy;
- (void)setHttp_proxy:(id)arg1;
- (void).cxx_destruct;
@end

