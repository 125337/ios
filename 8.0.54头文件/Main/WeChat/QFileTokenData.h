@interface QFileTokenData : NSObject
{
    NSString * _host; // +0x8
    NSString * _token; // +0x10
    double _expire; // +0x18
}
- (id)initWithDict:(id)arg1;
- (id)hostUrl;
- (id)host;
- (void)setHost:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (double)expire;
- (void)setExpire:(double)arg1;
- (void).cxx_destruct;
@end

