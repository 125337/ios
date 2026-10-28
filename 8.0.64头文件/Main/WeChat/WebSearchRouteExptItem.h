@interface WebSearchRouteExptItem : NSObject
{
    BOOL _preloadLiteApp; // +0x8
    BOOL _checkUpdate; // +0x9
    BOOL _syncCheckUpdate; // +0xa
    NSString * _liteAppId; // +0x10
    NSString * _liteAppPage; // +0x18
    NSString * _liteAppQuery; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _exptKey; // +0x30
    NSString * _extInfo; // +0x38
    NSString * _preloadParams; // +0x40
    NSString * _enterType; // +0x48
    NSString * _minVersion; // +0x50
    unsigned long long _keepAliveSeconds; // +0x58
}
- (id)init;
- (BOOL)useLiteApp;
- (BOOL)useLiteAppWithHitExptReport:(BOOL)arg1;
- (id)pageId;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)liteAppPage;
- (void)setLiteAppPage:(id)arg1;
- (id)liteAppQuery;
- (void)setLiteAppQuery:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)exptKey;
- (void)setExptKey:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)preloadParams;
- (void)setPreloadParams:(id)arg1;
- (BOOL)preloadLiteApp;
- (void)setPreloadLiteApp:(BOOL)arg1;
- (id)enterType;
- (void)setEnterType:(id)arg1;
- (BOOL)checkUpdate;
- (void)setCheckUpdate:(BOOL)arg1;
- (BOOL)syncCheckUpdate;
- (void)setSyncCheckUpdate:(BOOL)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (unsigned long long)keepAliveSeconds;
- (void)setKeepAliveSeconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
