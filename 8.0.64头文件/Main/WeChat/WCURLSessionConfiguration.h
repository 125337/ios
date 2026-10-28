@interface WCURLSessionConfiguration : NSObject
{
    BOOL _useNewDns; // +0x8
    BOOL _shouldHandleRedirectBySelf; // +0x9
    BOOL _hanldeDataBySelf; // +0xa
    BOOL _enableSocketReuse; // +0xb
    BOOL _useSimpleDns; // +0xc
    BOOL _forceBindMobile; // +0xd
}
- (id)init;
- (BOOL)useNewDns;
- (void)setUseNewDns:(BOOL)arg1;
- (BOOL)shouldHandleRedirectBySelf;
- (void)setShouldHandleRedirectBySelf:(BOOL)arg1;
- (BOOL)hanldeDataBySelf;
- (void)setHanldeDataBySelf:(BOOL)arg1;
- (BOOL)enableSocketReuse;
- (void)setEnableSocketReuse:(BOOL)arg1;
- (BOOL)useSimpleDns;
- (void)setUseSimpleDns:(BOOL)arg1;
- (BOOL)forceBindMobile;
- (void)setForceBindMobile:(BOOL)arg1;
@end
