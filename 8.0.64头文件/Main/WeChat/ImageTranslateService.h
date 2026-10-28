@interface ImageTranslateService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    shared_ptr<wevision2::TextRecognizer> _text_recognizer; // +0x8
    NSObject<OS_dispatch_queue> * _asyncQueue; // +0x18
    BOOL _initOCRSuccess; // +0x20
    ImageTranslateRequest * _currentRequest; // +0x28
}
+ (void)reportIDKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (id)init;
- (BOOL)isForbidOCREntry;
- (BOOL)isOpenMobileOCR;
- (BOOL)checkWordDetectSwitch:(unsigned int)arg1;
- (BOOL)checkWordDetectSwitchInOCR:(unsigned int)arg1;
- (BOOL)isPicTranslationAvaliable:(unsigned int)arg1;
- (BOOL)isPicTranslationSupportUserLanguage;
- (long long)isMobileOCRModelExsit;
- (BOOL)initModel;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)asyncDetectWord:(id)arg1 imageId:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)detectImageWithMobileOCR:(id)arg1;
- (id)detectImage:(id)arg1;
- (void)translateImage:(id)arg1 statInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearCurrentRequest;
- (id)currentRequest;
- (void)setCurrentRequest:(id)arg1;
- (BOOL)initOCRSuccess;
- (void)setInitOCRSuccess:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
