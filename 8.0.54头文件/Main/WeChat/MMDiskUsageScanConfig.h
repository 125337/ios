@interface MMDiskUsageScanConfig : NSObject
{
    BOOL _m_isDelete; // +0x8
    BOOL _m_isDeleteUnknow; // +0x9
    BOOL _m_isReportDelUnknow; // +0xa
    BOOL _m_isQuickScan; // +0xb
    BOOL _m_bUseCacheSize; // +0xc
    BOOL _m_bUseSharedCache; // +0xd
    BOOL _m_bSaveScanData; // +0xe
    BOOL _m_bSuspendable; // +0xf
    BOOL _m_bShouldPrintDetail; // +0x10
    BOOL _isDeleteEmptyFolder; // +0x11
    BOOL _isIgnoreCowFile; // +0x12
    BOOL _isHighPriority; // +0x13
    BOOL _isNewScanner; // +0x14
    unsigned int _m_urgentLevel; // +0x18
    NSArray * _regularExpressionsThatLogFilesToKV; // +0x20
}
- (id)init;
- (id)description;
- (BOOL)m_isDelete;
- (void)setM_isDelete:(BOOL)arg1;
- (BOOL)m_isDeleteUnknow;
- (void)setM_isDeleteUnknow:(BOOL)arg1;
- (BOOL)m_isReportDelUnknow;
- (void)setM_isReportDelUnknow:(BOOL)arg1;
- (BOOL)m_isQuickScan;
- (void)setM_isQuickScan:(BOOL)arg1;
- (BOOL)m_bUseCacheSize;
- (void)setM_bUseCacheSize:(BOOL)arg1;
- (BOOL)m_bUseSharedCache;
- (void)setM_bUseSharedCache:(BOOL)arg1;
- (BOOL)m_bSaveScanData;
- (void)setM_bSaveScanData:(BOOL)arg1;
- (unsigned int)m_urgentLevel;
- (void)setM_urgentLevel:(unsigned int)arg1;
- (BOOL)m_bSuspendable;
- (void)setM_bSuspendable:(BOOL)arg1;
- (BOOL)m_bShouldPrintDetail;
- (void)setM_bShouldPrintDetail:(BOOL)arg1;
- (id)regularExpressionsThatLogFilesToKV;
- (void)setRegularExpressionsThatLogFilesToKV:(id)arg1;
- (BOOL)isDeleteEmptyFolder;
- (void)setIsDeleteEmptyFolder:(BOOL)arg1;
- (BOOL)isIgnoreCowFile;
- (void)setIsIgnoreCowFile:(BOOL)arg1;
- (BOOL)isHighPriority;
- (void)setIsHighPriority:(BOOL)arg1;
- (BOOL)isNewScanner;
- (void)setIsNewScanner:(BOOL)arg1;
- (void).cxx_destruct;
@end

