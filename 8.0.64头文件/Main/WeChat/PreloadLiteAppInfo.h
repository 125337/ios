@interface PreloadLiteAppInfo : NSObject
{
    BOOL _allowPreloadWhenOpen; // +0x8
    BOOL _keepAliveWhenVcDealloc; // +0x9
    BOOL _exclusive; // +0xa
    BOOL _keepAlive; // +0xb
    NSString * _appId; // +0x10
    NSString * _page; // +0x18
}
- (id)init:(id)arg1 page:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (BOOL)allowPreloadWhenOpen;
- (void)setAllowPreloadWhenOpen:(BOOL)arg1;
- (BOOL)keepAliveWhenVcDealloc;
- (void)setKeepAliveWhenVcDealloc:(BOOL)arg1;
- (BOOL)exclusive;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)keepAlive;
- (void)setKeepAlive:(BOOL)arg1;
- (void).cxx_destruct;
@end
