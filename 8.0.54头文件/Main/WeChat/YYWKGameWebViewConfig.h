@interface YYWKGameWebViewConfig : NSObject
{
    BOOL _useUrlSchemeHandler; // +0x8
    BOOL _useLoadHtmlString; // +0x9
    NSString * _customScript; // +0x10
}
- (id)toDictDesc;
- (BOOL)useUrlSchemeHandler;
- (void)setUseUrlSchemeHandler:(BOOL)arg1;
- (BOOL)useLoadHtmlString;
- (void)setUseLoadHtmlString:(BOOL)arg1;
- (id)customScript;
- (void)setCustomScript:(id)arg1;
- (void).cxx_destruct;
@end

