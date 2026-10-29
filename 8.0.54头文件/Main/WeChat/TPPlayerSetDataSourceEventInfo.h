@interface TPPlayerSetDataSourceEventInfo : TPPlayerEventInfo
{
    BOOL _useProxy; // +0x20
    NSString * _url; // +0x28
    long long _urlProtocol; // +0x30
}
- (id)init;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)isUseProxy;
- (void)setUseProxy:(BOOL)arg1;
- (long long)urlProtocol;
- (void)setUrlProtocol:(long long)arg1;
- (void).cxx_destruct;
@end

