@interface CContactVerifyPreCheckBusinessLogic : MMObject <ContactVerifyPreCheckLogicDelegate, MMDeleteNotRegularContactLogicDelegate>
{
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x8
    MMDeleteNotRegularContactLogic * m_deleteNotRegularContactLogic; // +0x10
    id <ContactVerifyPreCheckBusinessLogicDelegate> _delegate; // +0x18
}
- (id)getContactVerifyLogic;
- (BOOL)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (BOOL)onShouldHandleContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFailActionDone:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFailActionCancel:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (id)getViewController;
- (BOOL)checkIsDeleteNotRegularContactBusiness:(int)arg1;
- (id)getDeleteNotRegularContactLogic;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

