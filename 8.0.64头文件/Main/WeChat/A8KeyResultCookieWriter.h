@interface A8KeyResultCookieWriter : MMObject
{
    NSString * _domain; // +0x8
    UIView * _webView; // +0x10
    id /* block */ _block; // +0x18
    int _waitCookieCount; // +0x20
    BOOL _hasWriteCompleteMarker; // +0x24
    NSHTTPCookie * _checkAndRetryCookie; // +0x28
    unsigned int _a8KeyCookieExpireTime; // +0x30
}
- (id)initWithDomain:(id)arg1 weakWebView:(id)arg2 andCompleteBlock:(id /* block */)arg3;
- (void)writeCookieValue:(id)arg1 forKey:(id)arg2;
- (void)writeCookieValue:(id)arg1 forKey:(id)arg2 needCheckAndRetry:(BOOL)arg3;
- (void)doWriteCookie:(id)arg1;
- (void)writeCompleteMarker;
- (void)handleWriteWKCookieComplete:(id)arg1;
- (void)handleCheckCookieWrong;
- (void)callCompletedBlock:(BOOL)arg1;
- (id)buildHttpCookieWithValue:(id)arg1 forKey:(id)arg2 httpOnly:(BOOL)arg3;
- (void)reportWriteA8KeyCookieWithResult:(BOOL)arg1;
- (unsigned int)a8KeyCookieExpireTime;
- (void)setA8KeyCookieExpireTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
