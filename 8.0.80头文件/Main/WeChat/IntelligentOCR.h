@interface IntelligentOCR : NSObject
{
    BOOL m_intelligentOCRInitSuccess; // +0x8
    BOOL m_intelligentOCRNPUInitSuccess; // +0x9
    BOOL m_intelligentOCRSMEInitSuccess; // +0xa
    BOOL m_intelligentOCRAMXInitSuccess; // +0xb
    NSRecursiveLock * m_lock; // +0x10
    shared_ptr<wevision2::TextRecognizer> _textRecognizer; // +0x18
    shared_ptr<wevision2::TextRecognizer> _textRecognizerNPU; // +0x28
    shared_ptr<wevision2::TextRecognizer> _textRecognizerSME; // +0x38
    shared_ptr<wevision2::TextRecognizer> _textRecognizerAMX; // +0x48
    shared_ptr<wevision2::PaymentCodeDetector> _paymentCodeDetector; // +0x58
    shared_ptr<wevision2::PaymentCodeClassifier> _paymentCodeClassifier; // +0x68
    shared_ptr<wevision2::OCRReporter> _ocrReporter; // +0x78
}
+ (id)generatePHashWithImage:(id)arg1;
+ (Mat)rgbaMatFromUIImage:(id)arg1 bgColor:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)isScanOcrReportModelUpgradeEnable;
- (BOOL)isEnableDataReport;
- (BOOL)checkNPUModel;
- (BOOL)canSupportNPU;
- (BOOL)canSupportSME;
- (BOOL)canSupportAMX;
- (BOOL)checkModelFilesExist;
- (BOOL)checkOCRInitSuccess;
- (BOOL)releaseXNetCache;
- (id)getOcrCopTextWithImage:(id)arg1;
- (id)getOcrTextWithImage:(id)arg1;
- (id)getOcrLineTextWithImage:(id)arg1;
- (id)batchExecuteOcrText:(id)arg1 error:(id)arg2;
- (id)locateOcrTextPointInImage:(id)arg1 searchText:(id)arg2;
- (BOOL)executeOcrForEmoticonWithImageData:(id)arg1 cpkey:(id)arg2 result:(id *)arg3 error:(id)arg4;
- (id)getCodeClassify:(id)arg1 rect:(CGRect)arg2 ocrText:(id)arg3;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)NSStringToCppString:(id)arg1;
- (void)doReportIntelligentOCR;
- (id)getIntelligentOCRPerfEveryDayId;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
