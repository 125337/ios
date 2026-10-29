@interface WePkgNonAtomicSingleFileConfig : MMObject
{
    BOOL _bClearAllPkgExceptCurrentEnabledVersion; // +0x8
    BOOL _bIsReadyForOperationAfterCheckUpdate; // +0x9
    unsigned int _uiPkgType; // +0xc
    unsigned int _uiLastUnusedSeconds; // +0x10
    unsigned int _uiCheckIntervalSeconds; // +0x14
    unsigned int _controlCommand; // +0x18
    unsigned int _uiNonAtomicSingleFileCount; // +0x1c
    unsigned int _uiCheckUpdateSuccessTime; // +0x20
    NSString * _nsPkgId; // +0x28
    NSString * _nsAppId; // +0x30
    NSString * _nsEnteranceDomain; // +0x38
    NSString * _nsCurrentEnabledVersion; // +0x40
    NSString * _nsCheckResonseMd5; // +0x48
    NSString * _nsCharSet; // +0x50
    NSMutableArray * _nonAtomicSingleFileListNeedDownload; // +0x58
    NSMutableArray * _nonAtomicSingleFileListDownloadSuccessed; // +0x60
    NSMutableDictionary * _file2DownloadFailCount; // +0x68
}
+ (id)nonAtomicSingleFileConfigFromTableItem:(id)arg1;
- (id)generateTableItem;
- (id)debugDescription;
- (id)nsPkgId;
- (void)setNsPkgId:(id)arg1;
- (id)nsAppId;
- (void)setNsAppId:(id)arg1;
- (unsigned int)uiPkgType;
- (void)setUiPkgType:(unsigned int)arg1;
- (id)nsEnteranceDomain;
- (void)setNsEnteranceDomain:(id)arg1;
- (id)nsCurrentEnabledVersion;
- (void)setNsCurrentEnabledVersion:(id)arg1;
- (unsigned int)uiLastUnusedSeconds;
- (void)setUiLastUnusedSeconds:(unsigned int)arg1;
- (unsigned int)uiCheckIntervalSeconds;
- (void)setUiCheckIntervalSeconds:(unsigned int)arg1;
- (BOOL)bClearAllPkgExceptCurrentEnabledVersion;
- (void)setBClearAllPkgExceptCurrentEnabledVersion:(BOOL)arg1;
- (id)nsCheckResonseMd5;
- (void)setNsCheckResonseMd5:(id)arg1;
- (id)nsCharSet;
- (void)setNsCharSet:(id)arg1;
- (unsigned int)controlCommand;
- (void)setControlCommand:(unsigned int)arg1;
- (BOOL)bIsReadyForOperationAfterCheckUpdate;
- (void)setBIsReadyForOperationAfterCheckUpdate:(BOOL)arg1;
- (unsigned int)uiNonAtomicSingleFileCount;
- (void)setUiNonAtomicSingleFileCount:(unsigned int)arg1;
- (id)nonAtomicSingleFileListNeedDownload;
- (void)setNonAtomicSingleFileListNeedDownload:(id)arg1;
- (id)nonAtomicSingleFileListDownloadSuccessed;
- (void)setNonAtomicSingleFileListDownloadSuccessed:(id)arg1;
- (id)file2DownloadFailCount;
- (void)setFile2DownloadFailCount:(id)arg1;
- (unsigned int)uiCheckUpdateSuccessTime;
- (void)setUiCheckUpdateSuccessTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

