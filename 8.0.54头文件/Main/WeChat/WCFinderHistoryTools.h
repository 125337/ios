@interface WCFinderHistoryTools : NSObject
+ (void)openHistory:(id /* block */)arg1;
+ (void)clearHistory:(id)arg1 complete:(id /* block */)arg2;
+ (void)deleteHistory:(id)arg1 vc:(id)arg2 complete:(id /* block */)arg3;
+ (void)_startOpLog:(int)arg1 tids:(id)arg2 complete:(id /* block */)arg3;
+ (void)showCloseConfirmOnView:(id)arg1 hasContent:(BOOL)arg2 doClose:(id /* block */)arg3 onCancel:(id /* block */)arg4;
@end

