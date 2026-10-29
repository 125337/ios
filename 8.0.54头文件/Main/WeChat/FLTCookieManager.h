@interface FLTCookieManager : NSObject <FlutterPlugin>
{
    WKHTTPCookieStore * _httpCookieStore; // +0x8
}
+ (id)instance;
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)clearCookies:(id /* block */)arg1;
- (void)setCookiesForData:(id)arg1;
- (void)setCookieForData:(id)arg1;
- (void)setCookieForResult:(id /* block */)arg1 arguments:(id)arg2;
- (id)httpCookieStore;
- (void)setHttpCookieStore:(id)arg1;
- (void).cxx_destruct;
@end

