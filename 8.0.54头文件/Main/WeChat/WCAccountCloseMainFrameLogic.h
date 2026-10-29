@interface WCAccountCloseMainFrameLogic : WCAccountBaseControlLogic
{
    unsigned int m_uiScene; // +0x30
    unsigned long long m_lastAutoAuthTime; // +0x38
    unsigned long long m_startCloseTime; // +0x40
    id <WCAccountCloseMainFrameLogicDelegate> _delegate; // +0x48
}
- (void)startLogic:(unsigned int)arg1 lastAutoAuthTime:(unsigned long long)arg2;
- (void)endCloseMainFrame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

