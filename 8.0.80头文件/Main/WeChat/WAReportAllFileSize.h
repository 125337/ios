@interface WAReportAllFileSize : WAReportBaseItem
{
    NSArray * m_arrDirPrefixes; // +0x8
    BOOL _isTriggerSingleAppClean; // +0x10
    BOOL _isTriggerAllAppClean; // +0x11
    BOOL _runtimeSpaceStaticsEnable; // +0x12
    unsigned long long _fileSize; // +0x18
    long long _dirPrefix; // +0x20
    long long _reportFileSizeScene; // +0x28
    unsigned long long _totalFileSize; // +0x30
    long long _runtimeFileOccupation; // +0x38
}
- (id)init;
- (int)reportID;
- (id)reportString;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (long long)dirPrefix;
- (void)setDirPrefix:(long long)arg1;
- (long long)reportFileSizeScene;
- (void)setReportFileSizeScene:(long long)arg1;
- (unsigned long long)totalFileSize;
- (void)setTotalFileSize:(unsigned long long)arg1;
- (BOOL)isTriggerSingleAppClean;
- (void)setIsTriggerSingleAppClean:(BOOL)arg1;
- (BOOL)isTriggerAllAppClean;
- (void)setIsTriggerAllAppClean:(BOOL)arg1;
- (long long)runtimeFileOccupation;
- (void)setRuntimeFileOccupation:(long long)arg1;
- (BOOL)runtimeSpaceStaticsEnable;
- (void)setRuntimeSpaceStaticsEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
