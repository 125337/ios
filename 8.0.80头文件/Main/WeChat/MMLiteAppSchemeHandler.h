@interface MMLiteAppSchemeHandler : NSObject <WKURLSchemeHandler>
{
    NSString * _baseLibPath; // +0x8
    NSString * _pkgPath; // +0x10
}
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)safeFilePathForPath:(id)arg1 root:(id)arg2;
- (id)baseLibPath;
- (void)setBaseLibPath:(id)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (void).cxx_destruct;
@end
