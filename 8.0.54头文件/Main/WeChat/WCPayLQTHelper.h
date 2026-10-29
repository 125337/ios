@interface WCPayLQTHelper : NSObject
+ (id)operateIdFromUrl:(id)arg1;
+ (id)traceInfoFromUrl:(id)arg1;
+ (BOOL)validUrl:(id)arg1;
+ (BOOL)urlForDetail:(id)arg1;
+ (BOOL)urlForSave:(id)arg1;
+ (BOOL)urlForFetch:(id)arg1;
+ (void)showLqtDialog:(id)arg1;
+ (void)showLqtDialog:(id)arg1 continueHandler:(id /* block */)arg2;
+ (void)handleDialogActionWithBtnData:(id)arg1 continueHandler:(id /* block */)arg2;
+ (void)openH5FromDialogWithUrl:(id)arg1;
+ (void)openTinyappFromDialogWithUsername:(id)arg1 path:(id)arg2;
@end

