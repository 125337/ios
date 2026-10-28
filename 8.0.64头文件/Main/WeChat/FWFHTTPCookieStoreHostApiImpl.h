@interface FWFHTTPCookieStoreHostApiImpl : NSObject <FWFWKHttpCookieStoreHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)HTTPCookieStoreForIdentifier:(long long)arg1;
- (void)createFromWebsiteDataStoreWithIdentifier:(long long)arg1 dataStoreIdentifier:(long long)arg2 error:(id *)arg3;
- (void)setCookieForStoreWithIdentifier:(long long)arg1 cookie:(id)arg2 completion:(id /* block */)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
