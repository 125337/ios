@interface BrandJumpMpAppService : NSObject <MMTipsViewControllerDelegate>
+ (id)defaultAppURL;
+ (BOOL)isMpAppInstalled;
+ (BOOL)openMpAppURL:(id)arg1 hostController:(id)arg2 scene:(unsigned long long)arg3;
+ (void)presentAppIntroController:(id)arg1 title:(id)arg2 desc:(id)arg3 operationTitle:(id)arg4 cancelTitle:(id)arg5 url:(id)arg6;
+ (void)presentAppIntroController:(id)arg1 title:(id)arg2 desc:(id)arg3 operationTitle:(id)arg4 cancelTitle:(id)arg5 url:(id)arg6 completion:(id /* block */)arg7;
+ (void)openMpAppStorePage;
+ (id)convertToAppURL:(id)arg1;
+ (BOOL)openMpAppURL:(id)arg1 hostController:(id)arg2 title:(id)arg3 downloadTitle:(id)arg4 operationTitle:(id)arg5 cancelTitle:(id)arg6 completion:(id /* block */)arg7;
+ (BOOL)profileMessageMore_openMpAppURL:(id)arg1 hostController:(id)arg2;
+ (BOOL)profileMessageEdit_openMpAppURL:(id)arg1 hostController:(id)arg2;
+ (BOOL)flutterComment_openMpAppURL:(id)arg1 hostController:(id)arg2;
+ (BOOL)flutterUserProfile_openMpAppURL:(id)arg1 hostController:(id)arg2;
@end
