@interface WCMpEditorNavigationServiceProxy : NSObject <IMpNavigationService>
+ (void)openUrlRequest:(id)arg1;
+ (void)openUrlAndAwaitDismissRequest:(id)arg1 completion:(id /* block */)arg2;
+ (void)openMpAppUrl:(id)arg1;
@end
