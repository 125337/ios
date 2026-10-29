@interface FWFHTTPCookieStoreHostApiImpl : NSObject <FWFWKHttpCookieStoreHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)HTTPCookieStoreForIdentifier:(id)arg1;
- (void)createFromWebsiteDataStoreWithIdentifier:(id)arg1 dataStoreIdentifier:(id)arg2 error:(id *)arg3;
- (void)setCookieForStoreWithIdentifier:(id)arg1 cookie:(id)arg2 completion:(id /* block */)arg3;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

