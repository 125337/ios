@interface CAppBrandInfo : NSObject
{
    BOOL _isMiniToolOwner; // +0x8
    BOOL _hasAppInfo; // +0x9
    BOOL _isTransparentBackgroundSupport; // +0xa
    BOOL _isUseModule; // +0xb
    BOOL _webSocketSkipPortCheck; // +0xc
    BOOL _canPreFetchData; // +0xd
    BOOL _canPeriodFetchData; // +0xe
    BOOL _prefetchDataWithLocation; // +0xf
    BOOL _TLSSkipHostnameCheck; // +0x10
    BOOL _canShowLoadingAdvert; // +0x11
    BOOL _canShowGameLoadingAdvert; // +0x12
    BOOL _isResizable; // +0x13
    unsigned int _appServiceType; // +0x14
    unsigned int _runningFlag; // +0x18
    unsigned int _canNotStarWxaBeforeTime; // +0x1c
    unsigned int _appRole; // +0x20
    unsigned int _wechatPluginApp; // +0x24
    unsigned int _profileCommentForbid; // +0x28
    unsigned int _originalFlag; // +0x2c
    unsigned int _ageAppropriateLevel; // +0x30
    unsigned int _launchFallbackMinVersion; // +0x34
    unsigned int _versionState; // +0x38
    unsigned int _maxPkgSize; // +0x3c
    unsigned int _maxUploadConcurrent; // +0x40
    unsigned int _maxDownloadConcurrent; // +0x44
    unsigned int _maxLocalstorageSize; // +0x48
    unsigned int _maxOpendataLocalstorageSize; // +0x4c
    unsigned int _maxBackgroundLifespan; // +0x50
    unsigned int _maxRequestConcurrent; // +0x54
    unsigned int _maxWebsocketConnect; // +0x58
    unsigned int _maxWebviewDepth; // +0x5c
    unsigned int _expendedMaxWebviewDepth; // +0x60
    unsigned int _actualWebviewDepth; // +0x64
    unsigned int _expiresAtList; // +0x68
    unsigned int _maxFileStorageSize; // +0x6c
    unsigned int _maxOpendataFileStorageSize; // +0x70
    unsigned int _maxTempFileStorageSize; // +0x74
    unsigned int _minTempFileAvailableSpace; // +0x78
    unsigned int _maxWxPrivateFileStorageSize; // +0x7c
    unsigned int _backgroundNetworkInterruptedTimeout; // +0x80
    unsigned int _lifeSpanBeforeSuspend; // +0x84
    unsigned int _lifeSpanAfterSuspend; // +0x88
    unsigned int _maxWorkerConcurrent; // +0x8c
    unsigned int _periodFetchDataHours; // +0x90
    unsigned int _periodFetchDataDay; // +0x94
    unsigned int _videoTaskTimeout; // +0x98
    unsigned int _batchPreFetchBusiFlag; // +0x9c
    unsigned int _openWxaWaitUpdateMaxMicSec; // +0xa0
    unsigned int _openWxaWaitUpdateMaxMicSecForWeakNet; // +0xa4
    unsigned int _templateID; // +0xa8
    unsigned int _brandOfficialFlag; // +0xac
    unsigned int _relievedBuyFlag; // +0xb0
    unsigned int _flagshipFlag; // +0xb4
    unsigned int _financialLicenseFlag; // +0xb8
    unsigned int _systemAuthBizScene; // +0xbc
    unsigned int _systemAuthFrequencyLimitFlag; // +0xc0
    NSString * _regitserBody; // +0xc8
    NSString * _passThroughInfo; // +0xd0
    NSString * _stablePassThroughInfo; // +0xd8
    NSString * _appid; // +0xe0
    NSString * _shortNickName; // +0xe8
    NSString * _runningOpenForbbidenUrl; // +0xf0
    NSArray * _templateList; // +0xf8
    NSString * _fromBusinessUserName; // +0x100
    NSArray * _versionList; // +0x108
    NSArray * _requestDomain; // +0x110
    NSArray * _wsRequestDomain; // +0x118
    NSArray * _uploadDomain; // +0x120
    NSArray * _downloadDomain; // +0x128
    NSArray * _udpDomain; // +0x130
    NSArray * _tcpDomain; // +0x138
    NSArray * _prefetchDNSDomain; // +0x140
    NSArray * _preconnectRequestDomain; // +0x148
    NSArray * _bizDomain; // +0x150
    NSDictionary * _dicPluginInfo; // +0x158
    NSString * _originalRedirectUrl; // +0x160
    NSArray * _gameIconFlagList; // +0x168
    NSArray * _launchFallbackMinVersionBlackScenes; // +0x170
    NSString * _migrateTargetAppid; // +0x178
    unsigned long long _appVersion; // +0x180
    NSString * _customVersion; // +0x188
    NSString * _versionPkgMD5; // +0x190
    NSString * _deviceOrientation; // +0x198
    NSString * _loadingImgUrl; // +0x1a0
    NSString * _loadingImgProgressbarColor; // +0x1a8
    NSDictionary * _loadingStyleWhite; // +0x1b0
    NSDictionary * _loadingStyleBlack; // +0x1b8
    NSString * _sheetModeTemplateNavStyle; // +0x1c0
    NSArray * _arrModuleList; // +0x1c8
    NSString * _entranceModule; // +0x1d0
    NSArray * _arrChatToolList; // +0x1d8
    NSDictionary * _dicClientJsExtInfo; // +0x1e0
    NSString * _withoutLibMd5; // +0x1e8
    NSArray * _arrPluginCodeInfo; // +0x1f0
    NSArray * _arrWidgetInfo; // +0x1f8
    NSString * _preCgiCallByteBeforeLaunch; // +0x200
    NSData * _abTestControlBytes; // +0x208
    NSString * _abTestControlBytesAsNSString; // +0x210
    NSArray * _categories; // +0x218
    NSArray * _parallelDownloadInfo; // +0x220
    NSArray * _bizEntryInfo; // +0x228
}
+ (id)appBrandInfoWithExternalInfoDicionary:(id)arg1;
- (id)regitserBody;
- (void)setRegitserBody:(id)arg1;
- (id)passThroughInfo;
- (void)setPassThroughInfo:(id)arg1;
- (id)stablePassThroughInfo;
- (void)setStablePassThroughInfo:(id)arg1;
- (BOOL)isMiniToolOwner;
- (void)setIsMiniToolOwner:(BOOL)arg1;
- (BOOL)hasAppInfo;
- (void)setHasAppInfo:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)shortNickName;
- (void)setShortNickName:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)runningFlag;
- (void)setRunningFlag:(unsigned int)arg1;
- (id)runningOpenForbbidenUrl;
- (void)setRunningOpenForbbidenUrl:(id)arg1;
- (unsigned int)canNotStarWxaBeforeTime;
- (void)setCanNotStarWxaBeforeTime:(unsigned int)arg1;
- (unsigned int)appRole;
- (void)setAppRole:(unsigned int)arg1;
- (id)templateList;
- (void)setTemplateList:(id)arg1;
- (unsigned int)wechatPluginApp;
- (void)setWechatPluginApp:(unsigned int)arg1;
- (unsigned int)profileCommentForbid;
- (void)setProfileCommentForbid:(unsigned int)arg1;
- (id)fromBusinessUserName;
- (void)setFromBusinessUserName:(id)arg1;
- (id)versionList;
- (void)setVersionList:(id)arg1;
- (id)requestDomain;
- (void)setRequestDomain:(id)arg1;
- (id)wsRequestDomain;
- (void)setWsRequestDomain:(id)arg1;
- (id)uploadDomain;
- (void)setUploadDomain:(id)arg1;
- (id)downloadDomain;
- (void)setDownloadDomain:(id)arg1;
- (id)udpDomain;
- (void)setUdpDomain:(id)arg1;
- (id)tcpDomain;
- (void)setTcpDomain:(id)arg1;
- (id)prefetchDNSDomain;
- (void)setPrefetchDNSDomain:(id)arg1;
- (id)preconnectRequestDomain;
- (void)setPreconnectRequestDomain:(id)arg1;
- (id)bizDomain;
- (void)setBizDomain:(id)arg1;
- (id)dicPluginInfo;
- (void)setDicPluginInfo:(id)arg1;
- (unsigned int)originalFlag;
- (void)setOriginalFlag:(unsigned int)arg1;
- (id)originalRedirectUrl;
- (void)setOriginalRedirectUrl:(id)arg1;
- (id)gameIconFlagList;
- (void)setGameIconFlagList:(id)arg1;
- (unsigned int)ageAppropriateLevel;
- (void)setAgeAppropriateLevel:(unsigned int)arg1;
- (unsigned int)launchFallbackMinVersion;
- (void)setLaunchFallbackMinVersion:(unsigned int)arg1;
- (id)launchFallbackMinVersionBlackScenes;
- (void)setLaunchFallbackMinVersionBlackScenes:(id)arg1;
- (id)migrateTargetAppid;
- (void)setMigrateTargetAppid:(id)arg1;
- (unsigned int)versionState;
- (void)setVersionState:(unsigned int)arg1;
- (unsigned long long)appVersion;
- (void)setAppVersion:(unsigned long long)arg1;
- (id)customVersion;
- (void)setCustomVersion:(id)arg1;
- (id)versionPkgMD5;
- (void)setVersionPkgMD5:(id)arg1;
- (id)deviceOrientation;
- (void)setDeviceOrientation:(id)arg1;
- (id)loadingImgUrl;
- (void)setLoadingImgUrl:(id)arg1;
- (id)loadingImgProgressbarColor;
- (void)setLoadingImgProgressbarColor:(id)arg1;
- (id)loadingStyleWhite;
- (void)setLoadingStyleWhite:(id)arg1;
- (id)loadingStyleBlack;
- (void)setLoadingStyleBlack:(id)arg1;
- (id)sheetModeTemplateNavStyle;
- (void)setSheetModeTemplateNavStyle:(id)arg1;
- (BOOL)isTransparentBackgroundSupport;
- (void)setIsTransparentBackgroundSupport:(BOOL)arg1;
- (id)arrModuleList;
- (void)setArrModuleList:(id)arg1;
- (BOOL)isUseModule;
- (void)setIsUseModule:(BOOL)arg1;
- (id)entranceModule;
- (void)setEntranceModule:(id)arg1;
- (id)arrChatToolList;
- (void)setArrChatToolList:(id)arg1;
- (id)dicClientJsExtInfo;
- (void)setDicClientJsExtInfo:(id)arg1;
- (id)withoutLibMd5;
- (void)setWithoutLibMd5:(id)arg1;
- (id)arrPluginCodeInfo;
- (void)setArrPluginCodeInfo:(id)arg1;
- (id)arrWidgetInfo;
- (void)setArrWidgetInfo:(id)arg1;
- (unsigned int)maxPkgSize;
- (void)setMaxPkgSize:(unsigned int)arg1;
- (unsigned int)maxUploadConcurrent;
- (void)setMaxUploadConcurrent:(unsigned int)arg1;
- (unsigned int)maxDownloadConcurrent;
- (void)setMaxDownloadConcurrent:(unsigned int)arg1;
- (unsigned int)maxLocalstorageSize;
- (void)setMaxLocalstorageSize:(unsigned int)arg1;
- (unsigned int)maxOpendataLocalstorageSize;
- (void)setMaxOpendataLocalstorageSize:(unsigned int)arg1;
- (unsigned int)maxBackgroundLifespan;
- (void)setMaxBackgroundLifespan:(unsigned int)arg1;
- (unsigned int)maxRequestConcurrent;
- (void)setMaxRequestConcurrent:(unsigned int)arg1;
- (unsigned int)maxWebsocketConnect;
- (void)setMaxWebsocketConnect:(unsigned int)arg1;
- (unsigned int)maxWebviewDepth;
- (void)setMaxWebviewDepth:(unsigned int)arg1;
- (unsigned int)expendedMaxWebviewDepth;
- (void)setExpendedMaxWebviewDepth:(unsigned int)arg1;
- (unsigned int)actualWebviewDepth;
- (void)setActualWebviewDepth:(unsigned int)arg1;
- (unsigned int)expiresAtList;
- (void)setExpiresAtList:(unsigned int)arg1;
- (unsigned int)maxFileStorageSize;
- (void)setMaxFileStorageSize:(unsigned int)arg1;
- (unsigned int)maxOpendataFileStorageSize;
- (void)setMaxOpendataFileStorageSize:(unsigned int)arg1;
- (unsigned int)maxTempFileStorageSize;
- (void)setMaxTempFileStorageSize:(unsigned int)arg1;
- (unsigned int)minTempFileAvailableSpace;
- (void)setMinTempFileAvailableSpace:(unsigned int)arg1;
- (unsigned int)maxWxPrivateFileStorageSize;
- (void)setMaxWxPrivateFileStorageSize:(unsigned int)arg1;
- (unsigned int)backgroundNetworkInterruptedTimeout;
- (void)setBackgroundNetworkInterruptedTimeout:(unsigned int)arg1;
- (unsigned int)lifeSpanBeforeSuspend;
- (void)setLifeSpanBeforeSuspend:(unsigned int)arg1;
- (unsigned int)lifeSpanAfterSuspend;
- (void)setLifeSpanAfterSuspend:(unsigned int)arg1;
- (BOOL)webSocketSkipPortCheck;
- (void)setWebSocketSkipPortCheck:(BOOL)arg1;
- (unsigned int)maxWorkerConcurrent;
- (void)setMaxWorkerConcurrent:(unsigned int)arg1;
- (BOOL)canPreFetchData;
- (void)setCanPreFetchData:(BOOL)arg1;
- (BOOL)canPeriodFetchData;
- (void)setCanPeriodFetchData:(BOOL)arg1;
- (BOOL)prefetchDataWithLocation;
- (void)setPrefetchDataWithLocation:(BOOL)arg1;
- (unsigned int)periodFetchDataHours;
- (void)setPeriodFetchDataHours:(unsigned int)arg1;
- (unsigned int)periodFetchDataDay;
- (void)setPeriodFetchDataDay:(unsigned int)arg1;
- (BOOL)TLSSkipHostnameCheck;
- (void)setTLSSkipHostnameCheck:(BOOL)arg1;
- (unsigned int)videoTaskTimeout;
- (void)setVideoTaskTimeout:(unsigned int)arg1;
- (BOOL)canShowLoadingAdvert;
- (void)setCanShowLoadingAdvert:(BOOL)arg1;
- (BOOL)canShowGameLoadingAdvert;
- (void)setCanShowGameLoadingAdvert:(BOOL)arg1;
- (id)preCgiCallByteBeforeLaunch;
- (void)setPreCgiCallByteBeforeLaunch:(id)arg1;
- (unsigned int)batchPreFetchBusiFlag;
- (void)setBatchPreFetchBusiFlag:(unsigned int)arg1;
- (BOOL)isResizable;
- (void)setIsResizable:(BOOL)arg1;
- (unsigned int)openWxaWaitUpdateMaxMicSec;
- (void)setOpenWxaWaitUpdateMaxMicSec:(unsigned int)arg1;
- (unsigned int)openWxaWaitUpdateMaxMicSecForWeakNet;
- (void)setOpenWxaWaitUpdateMaxMicSecForWeakNet:(unsigned int)arg1;
- (id)abTestControlBytes;
- (void)setAbTestControlBytes:(id)arg1;
- (id)abTestControlBytesAsNSString;
- (void)setAbTestControlBytesAsNSString:(id)arg1;
- (unsigned int)templateID;
- (void)setTemplateID:(unsigned int)arg1;
- (id)categories;
- (void)setCategories:(id)arg1;
- (id)parallelDownloadInfo;
- (void)setParallelDownloadInfo:(id)arg1;
- (id)bizEntryInfo;
- (void)setBizEntryInfo:(id)arg1;
- (unsigned int)brandOfficialFlag;
- (void)setBrandOfficialFlag:(unsigned int)arg1;
- (unsigned int)relievedBuyFlag;
- (void)setRelievedBuyFlag:(unsigned int)arg1;
- (unsigned int)flagshipFlag;
- (void)setFlagshipFlag:(unsigned int)arg1;
- (unsigned int)financialLicenseFlag;
- (void)setFinancialLicenseFlag:(unsigned int)arg1;
- (unsigned int)systemAuthBizScene;
- (void)setSystemAuthBizScene:(unsigned int)arg1;
- (unsigned int)systemAuthFrequencyLimitFlag;
- (void)setSystemAuthFrequencyLimitFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
