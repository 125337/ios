@interface ImageTranslateService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    ConfigMode _configMode; // +0x8
    ImageTranslateRequest * _currentRequest; // +0x38
}
+ (void)reportIDKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (BOOL)isForbidOCREntry;
- (BOOL)checkWordDetectSwitch:(unsigned int)arg1;
- (BOOL)checkWordDetectSwitchInOCR:(unsigned int)arg1;
- (BOOL)isPicTranslationAvaliable:(unsigned int)arg1;
- (BOOL)isPicTranslationSupportUserLanguage;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)asyncDetectWord:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)detectImage:(id)arg1;
- (unsigned int)indexOfWordDetectLang:(unsigned int)arg1;
- (void)getDetectWordDebugInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)translateImage:(id)arg1 statInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearCurrentRequest;
- (id)currentRequest;
- (void)setCurrentRequest:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

