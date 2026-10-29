@interface MJOCRProcessor : NSObject
{
    BOOL _isInitSuccess; // +0x8
    NSRecursiveLock * _lock; // +0x10
    unique_ptr<ocrlite::OcrApi, std::default_delete<ocrlite::OcrApi>> _ocrApi; // +0x18
}
+ (id)convertToSDRWithImage:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkIfInitSuccess;
- (double)detectTextWithImage:(id)arg1;
- (id)extractTextWithImage:(id)arg1;
- (BOOL)releaseOCRCache;
- (void)asyncDetectTextWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncExtractTextWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

