@interface MpEditorLifecyclePlugin : NSObject
+ (void)registerWithRegistrar:(id)arg1;
+ (BOOL)shouldInterceptSystemBack;
+ (void)notifySystemBack;
+ (void)notifySystemBackWithSource:(long long)arg1;
@end
