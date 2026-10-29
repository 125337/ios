@interface LVLiteAppAuthInfo : NSObject
{
    NSString * _host; // +0x8
    NSString * _url; // +0x10
    NSString * _authInfo; // +0x18
}
- (id)host;
- (void)setHost:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (void).cxx_destruct;
@end
