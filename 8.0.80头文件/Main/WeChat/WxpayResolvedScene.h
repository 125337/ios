@interface WxpayResolvedScene : NSObject
{
    BOOL _preloadStore; // +0x8
    BOOL _preloadView; // +0x9
    BOOL _loading; // +0xa
    BOOL _forbidRightGesture; // +0xb
    BOOL _ignoreRightGesture; // +0xc
    BOOL _forceMinVersion; // +0xd
    BOOL _showOnLockScreen; // +0xe
    NSString * _name; // +0x10
    NSString * _appId; // +0x18
    NSString * _route; // +0x20
    NSString * _query; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _packagePath; // +0x38
    unsigned long long _packageLease; // +0x40
    long long _loadingStyle; // +0x48
    NSDictionary * _loadingText; // +0x50
    long long _storeAliveSeconds; // +0x58
    NSString * _minVersion; // +0x60
    NSDictionary * _initialStoreData; // +0x68
    NSSet * _requiredServices; // +0x70
    NSSet * _capabilities; // +0x78
    NSString * _presentationPolicy; // +0x80
    WxpayLaunchPresentation * _launchPresentation; // +0x88
    id /* block */ _extensionFactory; // +0x90
}
- (id)init;
- (void)dealloc;
- (id)name;
- (void)setName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)packagePath;
- (void)setPackagePath:(id)arg1;
- (unsigned long long)packageLease;
- (void)setPackageLease:(unsigned long long)arg1;
- (BOOL)preloadStore;
- (void)setPreloadStore:(BOOL)arg1;
- (BOOL)preloadView;
- (void)setPreloadView:(BOOL)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (long long)loadingStyle;
- (void)setLoadingStyle:(long long)arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (long long)storeAliveSeconds;
- (void)setStoreAliveSeconds:(long long)arg1;
- (BOOL)forbidRightGesture;
- (void)setForbidRightGesture:(BOOL)arg1;
- (BOOL)ignoreRightGesture;
- (void)setIgnoreRightGesture:(BOOL)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (BOOL)forceMinVersion;
- (void)setForceMinVersion:(BOOL)arg1;
- (BOOL)showOnLockScreen;
- (void)setShowOnLockScreen:(BOOL)arg1;
- (id)initialStoreData;
- (void)setInitialStoreData:(id)arg1;
- (id)requiredServices;
- (void)setRequiredServices:(id)arg1;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (id)presentationPolicy;
- (void)setPresentationPolicy:(id)arg1;
- (id)launchPresentation;
- (void)setLaunchPresentation:(id)arg1;
- (id /* block */)extensionFactory;
- (void)setExtensionFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
