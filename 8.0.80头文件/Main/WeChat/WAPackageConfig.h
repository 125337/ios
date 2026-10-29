@interface WAPackageConfig : NSObject
{
    BOOL _isServerAllowUseModule; // +0x8
    unsigned int _appServiceType; // +0xc
    unsigned int _debugModeType; // +0x10
    unsigned int _appVersion; // +0x14
    unsigned int _debugFrom; // +0x18
    unsigned int _debugDevKey; // +0x1c
    unsigned int _templateID; // +0x20
    NSString * _appId; // +0x28
    NSString * _userName; // +0x30
    NSString * _packageMd5; // +0x38
    NSString * _loadingImgUrl; // +0x40
    NSString * _loadingImgUrlProgressbarColor; // +0x48
    NSString * _debugPackageUrl; // +0x50
    NSString * _deviceOrientation; // +0x58
    NSArray * _arrModuleList; // +0x60
    NSString * _entranceModule; // +0x68
    NSDictionary * _dicClientJsExtInfo; // +0x70
    NSString * _withoutLibMd5; // +0x78
    NSArray * _arrPluginCodeInfo; // +0x80
    NSArray * _arrWidgetInfo; // +0x88
    NSString * _withoutLibUrl; // +0x90
}
+ (BOOL)isModuleInfoValid:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithDebugNotifyInfo:(id)arg1;
- (id)description;
- (BOOL)isWeAppUseModule;
- (id)getModuleInfoWithName:(id)arg1;
- (id)validModuleNameFromPagePath:(id)arg1;
- (id)parallelDownloadOnLaunchModuleNames;
- (BOOL)isPathInIndependentModule:(id)arg1;
- (BOOL)isModuleNameIndependentModule:(id)arg1;
- (BOOL)isUnspecificedFileNameWithPagePath:(id)arg1;
- (BOOL)isPagePath:(id)arg1 matchModuleName:(id)arg2;
- (BOOL)isPagePath:(id)arg1 matchAliasName:(id)arg2;
- (id)pathComponentsWithoutFileSeperator:(id)arg1;
- (id)entranceModuleName;
- (BOOL)isUseGameSeperatedPluginCodes;
- (BOOL)isUseWeappSeperatedPluginCodes;
- (BOOL)isUseMultiSeperatedPluginCodes;
- (BOOL)isModuleUseMultiPluginCodes:(id)arg1;
- (BOOL)isModuleUseGameSeperatedPluginCodes:(id)arg1;
- (BOOL)isModuleUseWeappSeperatedPluginCodes:(id)arg1;
- (BOOL)isModuleUseSeperatedPluginCodes:(id)arg1;
- (BOOL)isModuleUseSeperatedMultiPluginCodes:(id)arg1;
- (id)separatedPluginsWithModuleName:(id)arg1;
- (id)separatedPluginsInfoWithPluginList:(id)arg1 moduleName:(id)arg2;
- (BOOL)isGameApp;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (id)packageMd5;
- (void)setPackageMd5:(id)arg1;
- (id)loadingImgUrl;
- (void)setLoadingImgUrl:(id)arg1;
- (id)loadingImgUrlProgressbarColor;
- (void)setLoadingImgUrlProgressbarColor:(id)arg1;
- (unsigned int)debugFrom;
- (void)setDebugFrom:(unsigned int)arg1;
- (id)debugPackageUrl;
- (void)setDebugPackageUrl:(id)arg1;
- (unsigned int)debugDevKey;
- (void)setDebugDevKey:(unsigned int)arg1;
- (id)deviceOrientation;
- (void)setDeviceOrientation:(id)arg1;
- (BOOL)isServerAllowUseModule;
- (void)setIsServerAllowUseModule:(BOOL)arg1;
- (id)arrModuleList;
- (void)setArrModuleList:(id)arg1;
- (id)entranceModule;
- (void)setEntranceModule:(id)arg1;
- (id)dicClientJsExtInfo;
- (void)setDicClientJsExtInfo:(id)arg1;
- (id)withoutLibMd5;
- (void)setWithoutLibMd5:(id)arg1;
- (id)arrPluginCodeInfo;
- (void)setArrPluginCodeInfo:(id)arg1;
- (id)arrWidgetInfo;
- (void)setArrWidgetInfo:(id)arg1;
- (id)withoutLibUrl;
- (void)setWithoutLibUrl:(id)arg1;
- (unsigned int)templateID;
- (void)setTemplateID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
