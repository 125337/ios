@interface WSComplianceChecker : NSObject
+ (void)ReportPopupWindowForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 action:(unsigned long long)arg3;
- (void)requestAuthorizationForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)storageKeyForInteraction:(unsigned long long)arg1;
- (BOOL)isAuthorizdForInteraction:(unsigned long long)arg1;
- (id)genDialogWowHaokanGrantNew:(unsigned long long)arg1;
- (id)genDialogCommentHaokanGrantNew:(unsigned long long)arg1;
- (id)genDialogForInteraction:(unsigned long long)arg1 scene:(unsigned long long)arg2;
@end
