@interface BindMobileInfoReporter : NSObject
+ (void)reportForceBindDialogShow;
+ (void)reportForceBindDialogCancel;
+ (void)reportForceBindDialogConfirm;
+ (void)reportInternal:(unsigned long long)arg1;
@end
