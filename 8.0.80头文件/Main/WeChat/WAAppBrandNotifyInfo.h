@interface WAAppBrandNotifyInfo : NSObject <PBCoding>
{
    BOOL _isAlreadyDownload; // +0x8
    BOOL _syncCheckDemoInfo; // +0x9
    unsigned int _type; // +0xc
    unsigned int _debugStartTime; // +0x10
    unsigned int _debugEndTime; // +0x14
    unsigned int _from; // +0x18
    unsigned int _debugDevKey; // +0x1c
    unsigned int _withoutToast; // +0x20
    unsigned int _checkDemoBasicInfoVersion; // +0x24
    NSString * _appid; // +0x28
    NSString * _username; // +0x30
    NSString * _debugURL; // +0x38
    NSString * _checkSum; // +0x40
    WAAppBrandNotifyModuleInfo * _moduleInfo; // +0x48
    NSString * _deviceOrientation; // +0x50
    WAAppBrandNotifyLoadingImgInfo * _loadingImgInfo; // +0x58
    NSString * _clientJsExtInfoString; // +0x60
    NSString * _withoutLibMd5; // +0x68
    NSMutableArray * _arrPluginCodeInfo; // +0x70
    NSString * _withoutLibUrl; // +0x78
    NSMutableArray * _arrWidgetInfo; // +0x80
    NSString * _checkDemoNickName; // +0x88
    unsigned long long _mtVersionId; // +0x90
}
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_debugURL;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_debugStartTime;
+ (void)PBArrayAdd_debugEndTime;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_checkSum;
+ (void)PBArrayAdd_from;
+ (void)PBArrayAdd_moduleInfo;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_deviceOrientation;
+ (void)PBArrayAdd_clientJsExtInfoString;
+ (void)PBArrayAdd_loadingImgInfo;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_withoutLibUrl;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)PBArrayAdd_syncCheckDemoInfo;
+ (void)PBArrayAdd_checkDemoNickName;
+ (void)PBArrayAdd_checkDemoBasicInfoVersion;
+ (void)PBArrayAdd_mtVersionId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isDebugPackageValidWithCurrentTime:(unsigned int)arg1;
- (void)updateInfoWithPackageExtInfo:(id)arg1;
- (void)markModule:(id)arg1 isDownloaded:(BOOL)arg2 checkSum:(id)arg3;
- (void)clearDownloadState;
- (id)arrPluginCodeInfoJSONDictionary;
- (id)arrWidgetInfoJSONDictionary;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)debugURL;
- (void)setDebugURL:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)debugStartTime;
- (void)setDebugStartTime:(unsigned int)arg1;
- (unsigned int)debugEndTime;
- (void)setDebugEndTime:(unsigned int)arg1;
- (BOOL)isAlreadyDownload;
- (void)setIsAlreadyDownload:(BOOL)arg1;
- (id)checkSum;
- (void)setCheckSum:(id)arg1;
- (unsigned int)from;
- (void)setFrom:(unsigned int)arg1;
- (id)moduleInfo;
- (void)setModuleInfo:(id)arg1;
- (unsigned int)debugDevKey;
- (void)setDebugDevKey:(unsigned int)arg1;
- (id)deviceOrientation;
- (void)setDeviceOrientation:(id)arg1;
- (id)loadingImgInfo;
- (void)setLoadingImgInfo:(id)arg1;
- (id)clientJsExtInfoString;
- (void)setClientJsExtInfoString:(id)arg1;
- (id)withoutLibMd5;
- (void)setWithoutLibMd5:(id)arg1;
- (id)arrPluginCodeInfo;
- (void)setArrPluginCodeInfo:(id)arg1;
- (id)withoutLibUrl;
- (void)setWithoutLibUrl:(id)arg1;
- (id)arrWidgetInfo;
- (void)setArrWidgetInfo:(id)arg1;
- (unsigned int)withoutToast;
- (void)setWithoutToast:(unsigned int)arg1;
- (BOOL)syncCheckDemoInfo;
- (void)setSyncCheckDemoInfo:(BOOL)arg1;
- (id)checkDemoNickName;
- (void)setCheckDemoNickName:(id)arg1;
- (unsigned int)checkDemoBasicInfoVersion;
- (void)setCheckDemoBasicInfoVersion:(unsigned int)arg1;
- (unsigned long long)mtVersionId;
- (void)setMtVersionId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
