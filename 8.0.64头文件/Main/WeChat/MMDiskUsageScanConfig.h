@interface MMDiskUsageScanConfig : NSObject
{
    BOOL _m_isDelete; // +0x8
    BOOL _m_isDeleteUnknow; // +0x9
    BOOL _m_isReportDelUnknow; // +0xa
    BOOL _m_isDeleteExpireFileForDebug; // +0xb
    BOOL _m_isQuickScan; // +0xc
    BOOL _useFolderCache; // +0xd
    BOOL _m_bSaveReportData; // +0xe
    BOOL _m_bSuspendable; // +0xf
    BOOL _isDeleteEmptyFolder; // +0x10
    BOOL _isIgnoreCowFile; // +0x11
    BOOL _isHighPriority; // +0x12
    BOOL _willScanWholeWechat; // +0x13
    BOOL _willScanMidImgWxam; // +0x14
    BOOL _willConvertMidImgWxam; // +0x15
    BOOL _willReportExistC2CFile; // +0x16
    unsigned int _m_urgentLevel; // +0x18
    int _concurrentCount; // +0x1c
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
- (BOOL)m_isDeleteExpireFileForDebug;
- (void)setM_isDeleteExpireFileForDebug:(BOOL)arg1;
- (BOOL)m_isQuickScan;
- (void)setM_isQuickScan:(BOOL)arg1;
- (BOOL)useFolderCache;
- (void)setUseFolderCache:(BOOL)arg1;
- (BOOL)m_bSaveReportData;
- (void)setM_bSaveReportData:(BOOL)arg1;
- (unsigned int)m_urgentLevel;
- (void)setM_urgentLevel:(unsigned int)arg1;
- (BOOL)m_bSuspendable;
- (void)setM_bSuspendable:(BOOL)arg1;
- (id)regularExpressionsThatLogFilesToKV;
- (void)setRegularExpressionsThatLogFilesToKV:(id)arg1;
- (BOOL)isDeleteEmptyFolder;
- (void)setIsDeleteEmptyFolder:(BOOL)arg1;
- (BOOL)isIgnoreCowFile;
- (void)setIsIgnoreCowFile:(BOOL)arg1;
- (BOOL)isHighPriority;
- (void)setIsHighPriority:(BOOL)arg1;
- (int)concurrentCount;
- (void)setConcurrentCount:(int)arg1;
- (BOOL)willScanWholeWechat;
- (void)setWillScanWholeWechat:(BOOL)arg1;
- (BOOL)willScanMidImgWxam;
- (void)setWillScanMidImgWxam:(BOOL)arg1;
- (BOOL)willConvertMidImgWxam;
- (void)setWillConvertMidImgWxam:(BOOL)arg1;
- (BOOL)willReportExistC2CFile;
- (void)setWillReportExistC2CFile:(BOOL)arg1;
- (void).cxx_destruct;
@end
