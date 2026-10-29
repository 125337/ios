@interface WACacheVersionPreCheckerContext : NSObject
{
    BOOL _inColdLaunch; // +0x8
    BOOL _isSilentOpoen; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _syncType; // +0x10
    WAContact * _contact; // +0x18
    WAPackageConfig * _packageConfig; // +0x20
    WAAppTaskExtInfo * _taskExtInfo; // +0x28
    NSString * _relativeURL; // +0x30
    NSString * _instanceId; // +0x38
    NSArray * _entryPackages; // +0x40
    NSArray * _parallelDownloadModuleNames; // +0x48
    WACacheVersionPreCheckerContextResult * _checkResult; // +0x50
    WACacheVersionPreChecker * _preChecker; // +0x58
}
+ (id)genPreCheckerIdentifierWithAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)packageConfig;
- (void)setPackageConfig:(id)arg1;
- (id)taskExtInfo;
- (void)setTaskExtInfo:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)relativeURL;
- (void)setRelativeURL:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (BOOL)inColdLaunch;
- (void)setInColdLaunch:(BOOL)arg1;
- (BOOL)isSilentOpoen;
- (void)setIsSilentOpoen:(BOOL)arg1;
- (unsigned int)syncType;
- (void)setSyncType:(unsigned int)arg1;
- (id)entryPackages;
- (void)setEntryPackages:(id)arg1;
- (id)parallelDownloadModuleNames;
- (void)setParallelDownloadModuleNames:(id)arg1;
- (id)checkResult;
- (void)setCheckResult:(id)arg1;
- (id)preChecker;
- (void)setPreChecker:(id)arg1;
- (void).cxx_destruct;
@end
