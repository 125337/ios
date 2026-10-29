@interface COpenIMContactVerifyPreCheckBusinessLogic : CContactVerifyPreCheckBusinessLogic <ContactVerifyPreCheckLogicDelegate>
{
    CContactVerifyLogic * m_oOpenIMContactVerifyLogic; // +0x8
}
- (id)getOpenIMContactVerifyLogic;
- (BOOL)sendVerifyUserPreCheck:(id)arg1 antispamTicket:(id)arg2 chatContact:(id)arg3;
- (void)onContactVerifyPreCheckFail:(id)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void).cxx_destruct;
@end
