@interface QGlobaleDefines : NSObject
{
    BOOL _worldmapPrevilege; // +0x8
    NSString * _documentRootPath; // +0x10
    NSString * _cacheRootPath; // +0x18
    NSString * _tileOverlayCacheRootPath; // +0x20
    NSString * _offlineMapCacheRootPath; // +0x28
    NSString * _dataEngineVersion; // +0x30
    NSString * _miniProgramID; // +0x38
    NSString * _businessKey; // +0x40
    NSString * _suid; // +0x48
    NSString * _vendorDeviceId; // +0x50
    QBussinessSetting * _serverSetting; // +0x58
}
+ (id)singleton;
+ (long long)clientType;
- (void)setupNetworkStatsRules;
- (id)mapBeaconRules;
- (id)authorizationDomain;
- (id)indoordataDomain;
- (id)overseadataDomain;
- (id)mapdataDomain;
- (id)mapstyleDomain;
- (id)rttdataDomain;
- (id)sketchdataDomain;
- (id)sketchTileDomain;
- (id)satellitedataDomain;
- (id)statisticDomain;
- (id)overseaTileDomain;
- (id)visualLayerDataDomain;
- (id)brandLogoDataDomain;
- (BOOL)isNoStatisticParames;
- (void)clearServerProtocol;
- (void)loadSeverDomain:(BOOL)arg1 withJson:(id)arg2;
- (void)updateServerProtocolJsonString:(id)arg1;
- (void)updateServerProtocolDict:(id)arg1;
- (void)updateServerProtocolData:(id)arg1;
- (id)getDomainByKey:(id)arg1;
- (id)constructSensitiveCommonArguments;
- (id)getAppVersion;
- (id)DPI;
- (id)getAppIdentifier;
- (id)appName;
- (id)getRandomDeviceID;
- (id)getVendorId;
- (id)deviceType;
- (void)registerDataSafetyRuls;
- (id)generateDataSafetyRuls;
- (id)init;
- (void)saveSDKVersion;
- (BOOL)shouldClearAllLocalConfigFiles;
- (id)sdkVersion;
- (id)constructCommonArguments;
- (id)netType;
- (id)percentString:(id)arg1;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
- (id)translateUrlParamWithString:(id)arg1;
- (id)URLEncodedString:(id)arg1;
- (void)setWorldmapPrevilege:(BOOL)arg1;
- (id)handDrawMapVersion;
- (void)updateHandDrawMapVersion:(id)arg1;
- (id)imageNamed:(id)arg1;
- (BOOL)worldmapPrevilege;
- (id)documentRootPath;
- (id)cacheRootPath;
- (id)tileOverlayCacheRootPath;
- (id)offlineMapCacheRootPath;
- (id)dataEngineVersion;
- (void)setDataEngineVersion:(id)arg1;
- (id)miniProgramID;
- (void)setMiniProgramID:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (id)suid;
- (void)setSuid:(id)arg1;
- (id)vendorDeviceId;
- (void)setVendorDeviceId:(id)arg1;
- (id)serverSetting;
- (void)setServerSetting:(id)arg1;
- (void).cxx_destruct;
@end
