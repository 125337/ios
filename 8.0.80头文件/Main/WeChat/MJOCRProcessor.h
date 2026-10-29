@interface MJOCRProcessor : NSObject
{
    BOOL _isInitSuccess; // +0x8
    NSRecursiveLock * _lock; // +0x10
    shared_ptr<wevision2::TextRecognizer> _textRecognizer; // +0x18
    NSObject<OS_dispatch_queue> * _ocrQueue; // +0x28
}
+ (id)convertToSDRWithImage:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkIfInitSuccess;
- (double)detectTextWithImage:(id)arg1;
- (id)extractTextWithImage:(id)arg1;
- (void)asyncDetectTextWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncExtractTextWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
