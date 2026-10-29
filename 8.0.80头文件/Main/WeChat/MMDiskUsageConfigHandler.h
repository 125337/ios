@interface MMDiskUsageConfigHandler : NSObject
{
    BOOL _m_isDelete; // +0x8
    BOOL _m_isDeleteUnknow; // +0x9
    BOOL _m_isReportDelUnknow; // +0xa
    BOOL _m_isEnableReport; // +0xb
    BOOL _m_isEnableScan; // +0xc
    BOOL _m_isEnableDeleteEmptyFolder; // +0xd
    BOOL _m_isEnablePreForceCleanTmp; // +0xe
    unsigned int _m_timeIntervalBetweenReport; // +0x10
    unsigned int _m_timeIntervalBetweenScan; // +0x14
    unsigned int _m_timeForEachScan; // +0x18
    unsigned int _m_timeForForceCleanTmp; // +0x1c
    unsigned int _m_timeIntervalBetweenEachScanFinish; // +0x20
    unsigned int _m_timeIntervalWholeScan; // +0x24
    unsigned int _m_timeIntervalWholeScanReport; // +0x28
    unsigned int _m_timeIntervalScanCacheAndOtherDataFast; // +0x2c
}
- (id)init;
- (void)loadConfigFromX;
- (id)description;
- (BOOL)isDataValid;
- (unsigned int)m_timeIntervalBetweenReport;
- (void)setM_timeIntervalBetweenReport:(unsigned int)arg1;
- (unsigned int)m_timeIntervalBetweenScan;
- (void)setM_timeIntervalBetweenScan:(unsigned int)arg1;
- (unsigned int)m_timeForEachScan;
- (void)setM_timeForEachScan:(unsigned int)arg1;
- (unsigned int)m_timeForForceCleanTmp;
- (void)setM_timeForForceCleanTmp:(unsigned int)arg1;
- (BOOL)m_isDelete;
- (void)setM_isDelete:(BOOL)arg1;
- (BOOL)m_isDeleteUnknow;
- (void)setM_isDeleteUnknow:(BOOL)arg1;
- (BOOL)m_isReportDelUnknow;
- (void)setM_isReportDelUnknow:(BOOL)arg1;
- (BOOL)m_isEnableReport;
- (void)setM_isEnableReport:(BOOL)arg1;
- (BOOL)m_isEnableScan;
- (void)setM_isEnableScan:(BOOL)arg1;
- (BOOL)m_isEnableDeleteEmptyFolder;
- (void)setM_isEnableDeleteEmptyFolder:(BOOL)arg1;
- (BOOL)m_isEnablePreForceCleanTmp;
- (void)setM_isEnablePreForceCleanTmp:(BOOL)arg1;
- (unsigned int)m_timeIntervalBetweenEachScanFinish;
- (void)setM_timeIntervalBetweenEachScanFinish:(unsigned int)arg1;
- (unsigned int)m_timeIntervalWholeScan;
- (void)setM_timeIntervalWholeScan:(unsigned int)arg1;
- (unsigned int)m_timeIntervalWholeScanReport;
- (void)setM_timeIntervalWholeScanReport:(unsigned int)arg1;
- (unsigned int)m_timeIntervalScanCacheAndOtherDataFast;
- (void)setM_timeIntervalScanCacheAndOtherDataFast:(unsigned int)arg1;
@end
