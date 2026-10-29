@interface CBTHalfScreenCameraScanRoute : NSObject
+ (id)scanAIShortcutsListForIntentResult:(id)arg1;
+ (id)scanAIShadowQueryForIntentResult:(id)arg1;
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)prewarmHalfScreenVCWithSourceId:(id)arg1;
+ (id)optionsWithImagePath:(id)arg1 questionText:(id)arg2 triggerType:(long long)arg3 intentResult:(id)arg4 sourceId:(id)arg5 prefetchedWrap:(id)arg6 srcInfoParams:(id)arg7;
+ (void)showFromVC:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
+ (id)serializeWrapWithShortcuts:(id)arg1 intentResult:(id)arg2 shortcutItems:(id)arg3;
+ (id)serializeWrapWithShortcutsFromData:(id)arg1 intentResult:(id)arg2 shortcutItems:(id)arg3;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 sourceId:(id)arg5 completion:(id /* block */)arg6 dismissCallback:(id /* block */)arg7;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 sourceId:(id)arg6 completion:(id /* block */)arg7 dismissCallback:(id /* block */)arg8;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 sourceId:(id)arg5 prefetchedWrap:(id)arg6 completion:(id /* block */)arg7 dismissCallback:(id /* block */)arg8;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 sourceId:(id)arg6 prefetchedWrap:(id)arg7 completion:(id /* block */)arg8 dismissCallback:(id /* block */)arg9;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 sourceId:(id)arg6 prefetchedWrap:(id)arg7 didAppearCallback:(id /* block */)arg8 completion:(id /* block */)arg9 dismissCallback:(id /* block */)arg10;
@end
