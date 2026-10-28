@interface OpenIMContactVerifyLogic : NSObject <PBMessageObserverDelegate, IOpenImContactMgrExt>
{
    NSMutableDictionary * m_dicWaitingCGIWrap; // +0x8
    id <OpenIMContactVerifyLogicDelegate> _delegate; // +0x10
}
- (void)dealloc;
- (void)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3 spamContext:(id)arg4;
- (void)onOpenImGetContactDone:(id)arg1 contact:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
