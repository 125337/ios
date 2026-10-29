@interface LinkBizSchemeWrap : MMObject
{
    NSString * _url; // +0x8
    long long _serviceType; // +0x10
    NSString * _sourceUrl; // +0x18
}
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end
