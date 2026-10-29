@interface MMDeleteNotRegularContactLogic : MMObject <PBMessageObserverDelegate>
{
    NSString * m_contactsMaxLimitSortSessionid; // +0x8
    int m_responseRet; // +0x10
    id <MMDeleteNotRegularContactLogicDelegate> _delegate; // +0x18
}
- (BOOL)getNeedDeleteNotRegularContactFromNetwork:(id)arg1;
- (void)OnGetNeedDeleteNotRegularContactResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)onShouldHandleContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckFailActionDone:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactVerifyPreCheckFailActionCancel:(id)arg1 opcode:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

