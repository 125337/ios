@interface WAReportPackageDeleteActionItem : WAReportBaseItem
{
    unsigned int _deleteReason; // +0x8
    unsigned int _debugType; // +0xc
    unsigned int _deleteCount; // +0x10
    unsigned int _abtestStatus; // +0x14
    unsigned int _lruDeleteSize; // +0x18
    unsigned int _weappDirSizeBeforeLRUDelete; // +0x1c
    unsigned int _weappDirSizePercentBeforeLRUDelete; // +0x20
    unsigned int _weappDirSizeAfterLRUDelete; // +0x24
    unsigned int _weappDirSizePercentAfterLRUDelete; // +0x28
    unsigned int _expiredDeleteSize; // +0x2c
    NSString * _appidList; // +0x30
}
- (id)reportString;
- (unsigned int)deleteReason;
- (void)setDeleteReason:(unsigned int)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (unsigned int)deleteCount;
- (void)setDeleteCount:(unsigned int)arg1;
- (unsigned int)abtestStatus;
- (void)setAbtestStatus:(unsigned int)arg1;
- (unsigned int)lruDeleteSize;
- (void)setLruDeleteSize:(unsigned int)arg1;
- (unsigned int)weappDirSizeBeforeLRUDelete;
- (void)setWeappDirSizeBeforeLRUDelete:(unsigned int)arg1;
- (unsigned int)weappDirSizePercentBeforeLRUDelete;
- (void)setWeappDirSizePercentBeforeLRUDelete:(unsigned int)arg1;
- (unsigned int)weappDirSizeAfterLRUDelete;
- (void)setWeappDirSizeAfterLRUDelete:(unsigned int)arg1;
- (unsigned int)weappDirSizePercentAfterLRUDelete;
- (void)setWeappDirSizePercentAfterLRUDelete:(unsigned int)arg1;
- (unsigned int)expiredDeleteSize;
- (void)setExpiredDeleteSize:(unsigned int)arg1;
- (id)appidList;
- (void)setAppidList:(id)arg1;
- (void).cxx_destruct;
@end
