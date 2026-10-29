@interface QServerSetting : NSObject
{
    BOOL _https; // +0x8
    int _status; // +0xc
    NSString * _name; // +0x10
    NSString * _host; // +0x18
    NSString * _host_test; // +0x20
}
- (id)initWithDict:(id)arg1;
- (id)getDomain;
- (id)checkHttpsString:(id)arg1 useHttps:(BOOL)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)https;
- (void)setHttps:(BOOL)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (id)host_test;
- (void)setHost_test:(id)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (void).cxx_destruct;
@end

