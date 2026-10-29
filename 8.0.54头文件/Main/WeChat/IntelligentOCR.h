@interface IntelligentOCR : NSObject
{
    BOOL m_intelligentOCRInitSuccess; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    void * ocr_api; // +0x18
    void * ocr_api_NPU; // +0x20
    BOOL m_intelligentOCRNPUInitSuccess; // +0x28
    void * ocr_api_AMX; // +0x30
    BOOL m_intelligentOCRAMXInitSuccess; // +0x38
}
+ (id)generatePHashWithImage:(id)arg1;
+ (Mat)rgbaMatFromUIImage:(id)arg1 bgColor:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)isEnableDataReport;
- (BOOL)checkNPUModel;
- (BOOL)isCanSupportNPU;
- (BOOL)isCanSupportAMX;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (id)getNPUOcrTextWithImage:(id)arg1;
- (id)getAMXOcrTextWithImage:(id)arg1;
- (id)getOcrTextWithImage:(id)arg1;
- (id)batchExecuteOcrText:(id)arg1 error:(id)arg2;
- (id)locateOcrTextPointInImage:(id)arg1 searchText:(id)arg2;
- (BOOL)executeOcrForEmoticonWithImageData:(id)arg1 cpkey:(id)arg2 result:(id *)arg3 error:(id)arg4;
- (id)getCodeClassify:(id)arg1;
- (void)doReportIntelligentOCR;
- (id)getIntelligentOCRPerfEveryDayId;
- (void).cxx_destruct;
@end

