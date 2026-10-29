@interface FavWebCacheContext : MMObject
{
    NSURL * _currentUrl; // +0x8
    NSMutableString * _htmlString; // +0x10
    NSMutableDictionary * _fileSrcMap; // +0x18
    NSMutableDictionary * _ajaxCacheData; // +0x20
    NSMutableDictionary * _ajaxCacheHeaders; // +0x28
    NSDictionary * _localStorage; // +0x30
    NSDictionary * _sessionStorage; // +0x38
    NSString * _cookie; // +0x40
}
- (id)init;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;
- (id)fileSrcMap;
- (void)setFileSrcMap:(id)arg1;
- (id)ajaxCacheData;
- (void)setAjaxCacheData:(id)arg1;
- (id)ajaxCacheHeaders;
- (void)setAjaxCacheHeaders:(id)arg1;
- (id)localStorage;
- (void)setLocalStorage:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (void).cxx_destruct;
@end

