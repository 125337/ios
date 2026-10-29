@interface IntelligentOCRPassport : NSObject
{
    BOOL m_intelligentOCRInitSuccess; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    void * ocr_api; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)getPassportModelPath;
- (void)InitModel;
- (BOOL)isEnableDataReport;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (int)detectPassportWithImage:(id)arg1 passport:(void *)arg2;
- (void)setDetectPassportWithMinArea:(int)arg1 withMinCoverArea:(int)arg2 withMinReflectArea:(int)arg3 withMinBlurArea:(int)arg4;
- (id)WarpPerspectiveRect:(id)arg1 passport:(void *)arg2 padding_border:(int)arg3;
- (id)UIImageFromCVMat:(Mat)arg1;
- (long long)PassportPitchDetectionWithPassport:(void *)arg1 minAngle:(long long)arg2;
- (void).cxx_destruct;
@end

