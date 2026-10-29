@interface WASyncGetCodeCmd : WASyncBaseCmd <PBCoding>
{
    BOOL _isEncrypt; // +0x40
    BOOL _isRetry; // +0x41
    BOOL _needRouteNewGetCdnUrlCgi; // +0x42
    BOOL _enableDownloadResumption; // +0x43
    unsigned int _maxRetryCount; // +0x44
    unsigned int _retryInterval; // +0x48
    unsigned int _appVersion; // +0x4c
    unsigned int _currentRetryCount; // +0x50
    unsigned int _lastGetCodeTime; // +0x54
    unsigned int _packageType; // +0x58
    unsigned int _scene; // +0x5c
    unsigned long long _networkType; // +0x60
    NSString * _md5; // +0x68
    NSString * _packageKey; // +0x70
    NSString * _needBackupDomain; // +0x78
    WAInfoData * _infoData; // +0x80
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_cmdType;
+ (void)PBArrayAdd_squence;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_maxRetryCount;
+ (void)PBArrayAdd_retryInterval;
+ (void)PBArrayAdd_isEncrypt;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_isRetry;
+ (void)PBArrayAdd_currentRetryCount;
+ (void)PBArrayAdd_lastGetCodeTime;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_packageKey;
+ (void)PBArrayAdd_packageType;
+ (void)PBArrayAdd_needRouteNewGetCdnUrlCgi;
+ (void)PBArrayAdd_preDownloadRequestkey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)isAppInfoDataFromThisGetCodeCmd:(id)arg1;
- (id)packageUniqueIdentifier;
- (BOOL)canRetryNow;
- (id)getDescribableNetworkType;
- (id)description;
- (unsigned long long)networkType;
- (void)setNetworkType:(unsigned long long)arg1;
- (unsigned int)maxRetryCount;
- (void)setMaxRetryCount:(unsigned int)arg1;
- (unsigned int)retryInterval;
- (void)setRetryInterval:(unsigned int)arg1;
- (BOOL)isEncrypt;
- (void)setIsEncrypt:(BOOL)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (BOOL)isRetry;
- (void)setIsRetry:(BOOL)arg1;
- (unsigned int)currentRetryCount;
- (void)setCurrentRetryCount:(unsigned int)arg1;
- (unsigned int)lastGetCodeTime;
- (void)setLastGetCodeTime:(unsigned int)arg1;
- (id)packageKey;
- (void)setPackageKey:(id)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (BOOL)needRouteNewGetCdnUrlCgi;
- (void)setNeedRouteNewGetCdnUrlCgi:(BOOL)arg1;
- (id)needBackupDomain;
- (void)setNeedBackupDomain:(id)arg1;
- (BOOL)enableDownloadResumption;
- (void)setEnableDownloadResumption:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)infoData;
- (void)setInfoData:(id)arg1;
- (void).cxx_destruct;
@end

