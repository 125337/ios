@interface TXYHyBaseHandle : NSObject
{
    TXYLanguageHandle * _languageHandle; // +0x8
    TXYHyBaseVM * _baseVM; // +0x10
    NSBundle * _huiyanSdkUIBundle; // +0x18
    NSBundle * _userUIBundle; // +0x20
    NSBundle * _faceTrackerBundle; // +0x28
    NSBundle * _languageBundle; // +0x30
    NSString * _logId; // +0x38
    NSObject<OS_dispatch_queue> * _logProcessingQueue; // +0x40
    id /* block */ _logCallback; // +0x48
    TXYHyInnerConfig * _innerConfig; // +0x50
    UIViewController * _currentViewController; // +0x58
}
+ (void)clearCacheVideoFile;
+ (void)deleteFileWithPath:(id)arg1;
+ (long long)getInfoSize:(id)arg1;
- (BOOL)isInnerVc:(id)arg1;
- (id)setLanguageBundleString:(id)arg1;
- (BOOL)checkPrivateConfig:(id)arg1 code:(id *)arg2 msg:(id *)arg3;
- (BOOL)setBundlePath:(id)arg1 name:(id)arg2 withType:(unsigned long long)arg3;
- (id)createBundleWithName:(id)arg1 path:(id)arg2;
- (id)huiYanBundleImage:(id)arg1;
- (BOOL)containAuthVC:(id)arg1;
- (BOOL)fileExists:(id)arg1;
- (id)logProcessingQueue;
- (void)setLoggerCallback:(id /* block */)arg1 withToken:(id)arg2;
- (void)callBackLog:(id)arg1;
- (id)languageHandle;
- (BOOL)isDarkType;
- (void)turnOnFlash;
- (void)turnOffFlash;
- (void)setLanguageHandle:(id)arg1;
- (id)baseVM;
- (void)setBaseVM:(id)arg1;
- (id)huiyanSdkUIBundle;
- (void)setHuiyanSdkUIBundle:(id)arg1;
- (id)userUIBundle;
- (void)setUserUIBundle:(id)arg1;
- (id)faceTrackerBundle;
- (void)setFaceTrackerBundle:(id)arg1;
- (id)languageBundle;
- (void)setLanguageBundle:(id)arg1;
- (id)logId;
- (void)setLogId:(id)arg1;
- (void)setLogProcessingQueue:(id)arg1;
- (id /* block */)logCallback;
- (void)setLogCallback:(id /* block */)arg1;
- (id)innerConfig;
- (void)setInnerConfig:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (void).cxx_destruct;
@end
