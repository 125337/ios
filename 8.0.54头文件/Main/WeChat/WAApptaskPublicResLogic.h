@interface WAApptaskPublicResLogic : NSObject
{
    NSString * _appid; // +0x8
    WAPublicResModel * _model; // +0x10
    NSDictionary * _pubLibVersion; // +0x18
}
- (id)init;
- (id)description;
- (id)pubLibVersion;
- (id)getLibStringVersion;
- (BOOL)getLibFeatureSupported:(id)arg1;
- (id)getLibExptString;
- (id)getLibExptDict;
- (BOOL)getLibPruneWxConfigByPage;
- (BOOL)getLibSupportLazyCodeLoading;
- (BOOL)getLibSupportSkyline;
- (BOOL)getLibSupportGameLive;
- (BOOL)getLibSupportGameLiveInvite;
- (id)getLibStringVersionUpdateTime;
- (id)getLibStringUpdateTime;
- (BOOL)getInjectGameContextPlugin;
- (BOOL)getLibSupportInjectAppSeparatedPlugin;
- (BOOL)getLibSupportInvokeWithAppId;
- (BOOL)getLibSupportAudits;
- (BOOL)getLibSupportListenTaskStateChange;
- (BOOL)getLibSupportListenNewPerformanceMetric;
- (unsigned int)getLibPrivacyApiVersion;
- (long long)getWkFeatureVersion;
- (id)getPublicLocalCacheData:(unsigned long long)arg1;
- (id)getPublicLocalCacheDataWithRelativePath:(id)arg1;
- (id)getWAMagicBrushMainContextJS;
- (id)getWAMagicBrushSubContextJS;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setPubLibVersion:(id)arg1;
- (void).cxx_destruct;
@end

