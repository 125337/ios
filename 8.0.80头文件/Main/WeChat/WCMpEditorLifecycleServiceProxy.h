@interface WCMpEditorLifecycleServiceProxy : NSObject <IMpEditorLifecycleService>
+ (BOOL)navigationController:(id)arg1 containsEditor:(id)arg2;
+ (id)navigationControllerContainingEditor:(id)arg1;
+ (void)dismissArticleEditor;
@end
