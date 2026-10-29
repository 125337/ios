@interface WAFileSpaceTraceLogic : NSObject
{
    WAFileSpaceStatus * m_status; // +0x8
    unsigned int _updateCountSinceLastScan; // +0x10
    unsigned int _lastUpdateStatusTime; // +0x14
    NSString * _localIdPrefix; // +0x18
    id <WAFileSpaceTraceLogicScanDataSource> _scanSource; // +0x20
    unsigned long long _scanPhase; // +0x28
}
- (id)initWithLocalIdPrefix:(id)arg1;
- (void)loadStatus;
- (void)saveStatus;
- (void)saveStatusToMMKV;
- (unsigned long long)currentTotalFileSize;
- (unsigned long long)fileSizeOfAppId:(id)arg1;
- (id)getStatusAppItemWithAppId:(id)arg1;
- (void)setStatusAppItemWithAppId:(id)arg1 appItem:(id)arg2;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (id)allAppId;
- (id)arrSortAppItem;
- (id)statusFilePath;
- (id)statusKey;
- (BOOL)isTimeForSaveStatus;
- (id)getAllUsrDirList;
- (void)removeAppIdNotInArray:(id)arg1;
- (void)scanAndUpdateStatus;
- (void)reportIDKeyUsrSpaceTraceDiffWithRecordSize:(long long)arg1 actualSize:(long long)arg2;
- (void)scanDirectoryUnrecursively:(id)arg1 retFileCount:(unsigned int *)arg2 retFileSize:(unsigned long long *)arg3;
- (id)localIdPrefix;
- (id)scanSource;
- (void)setScanSource:(id)arg1;
- (unsigned long long)scanPhase;
- (void)setScanPhase:(unsigned long long)arg1;
- (unsigned int)updateCountSinceLastScan;
- (void)setUpdateCountSinceLastScan:(unsigned int)arg1;
- (unsigned int)lastUpdateStatusTime;
- (void)setLastUpdateStatusTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

