@interface NormalContactVerifyLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int m_uiNeedConfirm; // +0x8
    unsigned int _m_qrAddScene; // +0xc
    id <NormalContactVerifyLogicDelegate> _delegate; // +0x10
    NSString * _m_reportInfo; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)startVerifyContact:(id)arg1 opcode:(unsigned int)arg2 verifyMsg:(id)arg3;
- (BOOL)doubleCheckContactAntispamTickets:(id)arg1 withRequest:(id)arg2;
- (BOOL)sendVerifyUserRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetContact:(id)arg1;
- (void)HandleVerifyUser:(id)arg1;
- (BOOL)sendVerifyUserPreCheck:(id)arg1 opcode:(unsigned int)arg2;
- (void)OnSendVerifyUserPreCheck:(id)arg1;
- (unsigned int)m_uiNeedConfirm;
- (void)setM_uiNeedConfirm:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)m_qrAddScene;
- (void)setM_qrAddScene:(unsigned int)arg1;
- (id)m_reportInfo;
- (void)setM_reportInfo:(id)arg1;
- (void).cxx_destruct;
@end
