@interface OpenIMContactVerifyLogic : NSObject <PBMessageObserverDelegate, IOpenImContactMgrExt>
{
    NSMutableDictionary * m_dicWaitingCGIWrap; // +0x8
    id <OpenIMContactVerifyLogicDelegate> _delegate; // +0x10
}
- (void)showContactVerifyPreCheckTipWithBaseResponse:(id)arg1 userName:(id)arg2;
- (void)dealloc;
- (void)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3 spamContext:(id)arg4;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (BOOL)sendVerifyUserPreCheck:(id)arg1 antispamTicket:(id)arg2 chatContact:(id)arg3;
- (BOOL)startVerifyUserPreCheckCGIWrap:(id)arg1;
- (void)notifyVerifyUserPreCheckFailedForUserName:(id)arg1;
- (void)onSendVerifyUserPreCheck:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)genArrOpenIMVerifyReqmsgExtinfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
