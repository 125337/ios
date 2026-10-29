@interface WePkgNonAtomicSingleFileConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    BOOL _isReadyForOperationAfterCheckUpdate; // +0x8
    BOOL _isClearAllPkgExceptCurrentEnabledVersion; // +0x9
    unsigned int _lastUnusedSeconds; // +0xc
    unsigned int _checkIntervalSeconds; // +0x10
    unsigned int _nonAtomicSingleFileCount; // +0x14
    unsigned int _checkUpdateSuccessTime; // +0x18
    unsigned int _controlCommand; // +0x1c
    NSString * _checkResponseMd5; // +0x20
    NSMutableArray * _nonAtomicSingleFileListNeedDownload; // +0x28
    NSMutableArray * _nonAtomicSingleFileListDownloadSuccessed; // +0x30
    NSMutableDictionary * _file2DownloadFailCount; // +0x38
}
+ (void)PBArrayAdd_isReadyForOperationAfterCheckUpdate;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_nonAtomicSingleFileCount;
+ (void)PBArrayAdd_nonAtomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_nonAtomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_controlCommand;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (BOOL)isReadyForOperationAfterCheckUpdate;
- (void)setIsReadyForOperationAfterCheckUpdate:(BOOL)arg1;
- (BOOL)isClearAllPkgExceptCurrentEnabledVersion;
- (void)setIsClearAllPkgExceptCurrentEnabledVersion:(BOOL)arg1;
- (unsigned int)lastUnusedSeconds;
- (void)setLastUnusedSeconds:(unsigned int)arg1;
- (unsigned int)checkIntervalSeconds;
- (void)setCheckIntervalSeconds:(unsigned int)arg1;
- (id)checkResponseMd5;
- (void)setCheckResponseMd5:(id)arg1;
- (unsigned int)nonAtomicSingleFileCount;
- (void)setNonAtomicSingleFileCount:(unsigned int)arg1;
- (id)nonAtomicSingleFileListNeedDownload;
- (void)setNonAtomicSingleFileListNeedDownload:(id)arg1;
- (id)nonAtomicSingleFileListDownloadSuccessed;
- (void)setNonAtomicSingleFileListDownloadSuccessed:(id)arg1;
- (id)file2DownloadFailCount;
- (void)setFile2DownloadFailCount:(id)arg1;
- (unsigned int)checkUpdateSuccessTime;
- (void)setCheckUpdateSuccessTime:(unsigned int)arg1;
- (unsigned int)controlCommand;
- (void)setControlCommand:(unsigned int)arg1;
- (void).cxx_destruct;
@end
