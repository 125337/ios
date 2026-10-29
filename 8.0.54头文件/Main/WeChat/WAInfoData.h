@interface WAInfoData : MMObject <WCTTableCoding, YYModel>
{
    BOOL _autoUpdateForPlugin; // +0x8
    BOOL _semverSatisfied; // +0x9
    BOOL _ignorePackageCheckSumOnDebugType; // +0xa
    BOOL _hasDownloadPatchData; // +0xb
    BOOL _isDownloadUrlFromConcurrentPrefetch; // +0xc
    BOOL _needForceLatestVersion; // +0xd
    BOOL _checkShouldDownloadFullPkgByInvalidateCodeCmd; // +0xe
    unsigned int _updateTime; // +0x10
    unsigned int _packageSize; // +0x14
    unsigned int _versionStatus; // +0x18
    unsigned int _appServiceType; // +0x1c
    unsigned int _templateID; // +0x20
    unsigned int _debugModeType; // +0x24
    unsigned int _oldExistVersion; // +0x28
    unsigned int _downloadDataSize; // +0x2c
    unsigned int _debugDevKey; // +0x30
    unsigned int _fromScene; // +0x34
    unsigned int _parentDebugModeType; // +0x38
    unsigned int _parentAppServiceType; // +0x3c
    NSString * _appID; // +0x40
    NSString * _username; // +0x48
    unsigned long long _version; // +0x50
    NSString * _packageCheckSum; // +0x58
    NSString * _realAppId; // +0x60
    NSString * _moduleName; // +0x68
    unsigned long long _packageType; // +0x70
    unsigned long long _encryptType; // +0x78
    NSString * _versionDesc; // +0x80
    NSString * _withoutLibMd5; // +0x88
    NSArray * _arrPluginCodeInfo; // +0x90
    NSString * _prefixPathForPluginCode; // +0x98
    NSArray * _arrWidgetInfo; // +0xa0
    NSString * _customVersion; // +0xa8
    NSString * _semver; // +0xb0
    NSString * _withoutLibUrl; // +0xb8
    NSString * _downloadUrl; // +0xc0
    NSString * _debugDownloadUrl; // +0xc8
    CommRequestSource * _requestSource; // +0xd0
    unsigned long long _startDownloadTimeStampInMs; // +0xd8
    unsigned long long _endDownloadTimeStampInMs; // +0xe0
    unsigned long long _rawDownloadSize; // +0xe8
    NSString * _parentAppid; // +0xf0
    unsigned long long _parentVersion; // +0xf8
    NSString * _needBackupDomain; // +0x100
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_version;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)packageSize;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_packageSize;
+ (const void *)packageCheckSum;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_packageCheckSum;
+ (const void *)versionStatus;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_versionStatus;
+ (const void *)realAppId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_realAppId;
+ (const void *)moduleName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_moduleName;
+ (const void *)packageType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_packageType;
+ (const void *)appServiceType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_appServiceType;
+ (const void *)encryptType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_encryptType;
+ (const void *)withoutLibMd5;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_withoutLibMd5;
+ (const void *)arrPluginCodeInfo;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_arrPluginCodeInfo;
+ (const void *)prefixPathForPluginCode;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_prefixPathForPluginCode;
+ (const void *)arrWidgetInfo;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_arrWidgetInfo;
+ (const void *)autoUpdateForPlugin;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_autoUpdateForPlugin;
+ (const void *)customVersion;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_customVersion;
+ (const void *)templateID;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_templateID;
+ (const void *)semver;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_semver;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (id)getEncryptTypeString:(unsigned long long)arg1;
+ (unsigned long long)transferServerPackageTypeToLocal:(int)arg1;
+ (int)transferLocalPackageTypeToServer:(unsigned long long)arg1;
+ (BOOL)isPackageTypeFullPkg:(unsigned long long)arg1;
+ (BOOL)isPackageTypeModulePkg:(unsigned long long)arg1;
+ (BOOL)isPackageTypePluginPkg:(unsigned long long)arg1;
+ (BOOL)isPackageTypeWithoutPluginPkg:(unsigned long long)arg1;
+ (BOOL)isPackageTypeWithoutSinglePluginPkg:(unsigned long long)arg1;
+ (BOOL)isPackageTypeWithoutMultiPluginPkg:(unsigned long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initDefaultInfoData;
- (id)initModuleInfoData:(id)arg1;
- (id)getPluginUnpackPrefixPath;
- (BOOL)isEqualToInfoData:(id)arg1;
- (BOOL)isPluginCode:(id)arg1;
- (BOOL)isFullPkgCode;
- (BOOL)isModulePkgCode;
- (BOOL)isPluginPkgCode;
- (BOOL)isWithoutPluginPkg;
- (unsigned long long)localPackageType;
- (int)serverPackageType;
- (id)pluginJsonSubPath;
- (id)darkModePluginJsonSubPath;
- (id)subPathForPluginFile:(id)arg1;
- (id)subPathPrefixForPluginFile:(id)arg1;
- (BOOL)shouldAddSubPathPrefixForPluginFile:(id)arg1;
- (BOOL)isWeAppNormalPluginPkgCode;
- (BOOL)isWeAppExtentedLibPluginPkgCode;
- (BOOL)autoUpdateOrSemverForPlugin;
- (void)resetOldExistVersionIfFileNotExist;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (unsigned int)packageSize;
- (void)setPackageSize:(unsigned int)arg1;
- (id)packageCheckSum;
- (void)setPackageCheckSum:(id)arg1;
- (unsigned int)versionStatus;
- (void)setVersionStatus:(unsigned int)arg1;
- (id)realAppId;
- (void)setRealAppId:(id)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (unsigned long long)packageType;
- (void)setPackageType:(unsigned long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned long long)encryptType;
- (void)setEncryptType:(unsigned long long)arg1;
- (id)versionDesc;
- (void)setVersionDesc:(id)arg1;
- (id)withoutLibMd5;
- (void)setWithoutLibMd5:(id)arg1;
- (id)arrPluginCodeInfo;
- (void)setArrPluginCodeInfo:(id)arg1;
- (id)prefixPathForPluginCode;
- (void)setPrefixPathForPluginCode:(id)arg1;
- (id)arrWidgetInfo;
- (void)setArrWidgetInfo:(id)arg1;
- (BOOL)autoUpdateForPlugin;
- (void)setAutoUpdateForPlugin:(BOOL)arg1;
- (id)customVersion;
- (void)setCustomVersion:(id)arg1;
- (id)semver;
- (void)setSemver:(id)arg1;
- (BOOL)semverSatisfied;
- (void)setSemverSatisfied:(BOOL)arg1;
- (unsigned int)templateID;
- (void)setTemplateID:(unsigned int)arg1;
- (id)withoutLibUrl;
- (void)setWithoutLibUrl:(id)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)oldExistVersion;
- (void)setOldExistVersion:(unsigned int)arg1;
- (BOOL)ignorePackageCheckSumOnDebugType;
- (void)setIgnorePackageCheckSumOnDebugType:(BOOL)arg1;
- (unsigned int)downloadDataSize;
- (void)setDownloadDataSize:(unsigned int)arg1;
- (BOOL)hasDownloadPatchData;
- (void)setHasDownloadPatchData:(BOOL)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)debugDownloadUrl;
- (void)setDebugDownloadUrl:(id)arg1;
- (unsigned int)debugDevKey;
- (void)setDebugDevKey:(unsigned int)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (id)requestSource;
- (void)setRequestSource:(id)arg1;
- (BOOL)isDownloadUrlFromConcurrentPrefetch;
- (void)setIsDownloadUrlFromConcurrentPrefetch:(BOOL)arg1;
- (unsigned long long)startDownloadTimeStampInMs;
- (void)setStartDownloadTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)endDownloadTimeStampInMs;
- (void)setEndDownloadTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)rawDownloadSize;
- (void)setRawDownloadSize:(unsigned long long)arg1;
- (id)parentAppid;
- (void)setParentAppid:(id)arg1;
- (unsigned long long)parentVersion;
- (void)setParentVersion:(unsigned long long)arg1;
- (unsigned int)parentDebugModeType;
- (void)setParentDebugModeType:(unsigned int)arg1;
- (unsigned int)parentAppServiceType;
- (void)setParentAppServiceType:(unsigned int)arg1;
- (BOOL)needForceLatestVersion;
- (void)setNeedForceLatestVersion:(BOOL)arg1;
- (id)needBackupDomain;
- (void)setNeedBackupDomain:(id)arg1;
- (BOOL)checkShouldDownloadFullPkgByInvalidateCodeCmd;
- (void)setCheckShouldDownloadFullPkgByInvalidateCodeCmd:(BOOL)arg1;
- (void).cxx_destruct;
@end

