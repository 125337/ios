@interface IntelligentOCRPassport : NSObject
{
    BOOL m_intelligentOCRInitSuccess; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    shared_ptr<wevision2::CertificateDetector> m_passportDetector; // +0x18
}
- (id)init;
- (id)getPassportModelPath;
- (void)InitModel;
- (BOOL)isEnableDataReport;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (int)detectPassportWithImage:(id)arg1 passport:(void *)arg2;
- (void)setDetectPassportWithMinArea:(int)arg1 withMinCoverArea:(int)arg2 withMinReflectArea:(int)arg3 withMinBlurArea:(int)arg4;
- (id)WarpPerspectiveRect:(id)arg1 passport:(const void *)arg2 padding_border:(int)arg3;
- (id)UIImageFromPixelBuffer:(shared_ptr<wevision2::PixelBuffer>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
