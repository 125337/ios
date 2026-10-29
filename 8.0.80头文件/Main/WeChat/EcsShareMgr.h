@interface EcsShareMgr : MMUserService <MMServiceProtocol>
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)showEcsShareDialogInView:(id)arg1 menuItemLine1:(id)arg2 menuItemLine2:(id)arg3 sourceReportData:(id)arg4 callback:(id)arg5;
- (id)genEncryptUserName:(id)arg1;
- (id)genDecryptUserName:(id)arg1;
- (void)share:(id)arg1 withExtraData:(id)arg2 toEncryptUserNames:(id)arg3 callback:(id)arg4 fromView:(id)arg5 showConfirm:(BOOL)arg6;
@end
