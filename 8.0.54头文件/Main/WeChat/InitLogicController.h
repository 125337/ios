@interface InitLogicController : MMObject <ContactInitLogicExt, INewInitExt>
{
    id <initLogicControllerDelegate> m_delegate; // +0x8
    BOOL m_bIsIniting; // +0x10
    BOOL m_bFromReg; // +0x11
    MMTimer * m_percenTimer; // +0x18
    unsigned int m_curPercent; // +0x20
    unsigned int m_uiEventID; // +0x24
    ContactInitLogic * m_contactInitLogic; // +0x28
}
- (id)init;
- (BOOL)isNeedInit;
- (BOOL)initInternal;
- (unsigned int)getCurNetworkStatus;
- (void)percentIniting;
- (void)onPercentTimer;
- (void)startPercentTimer;
- (void)stopPercentTimer;
- (BOOL)startInit;
- (void)appFirstBecomeActive;
- (void)stopIniting:(unsigned int)arg1;
- (void)onNewInitConnectFail;
- (void)onNewInitFail;
- (void)onNewInitOK;
- (void)tryInitContact;
- (void)retryInitContact;
- (void)onContactInitProcessUpdate:(unsigned int)arg1;
- (void)onContactInitFail;
- (void)onContactInitSuccess;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bIsIniting;
- (BOOL)m_bFromReg;
- (void)setM_bFromReg:(BOOL)arg1;
- (void).cxx_destruct;
@end

