@interface WCPayF2FMiddlePageSubLogic : WCPaySubLogic <WCPayF2FDynamicCodeCgiDelegate>
{
    WCPayControlData * _m_data; // +0x10
    id <WCPayF2FMiddlePageSubLogicDelegate> _m_delegate; // +0x18
    WCPayF2FDynamicCodeCgi * _m_f2fDynamicCodeCgi; // +0x20
}
- (void)start;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 resp:(id)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 netWorkError:(id)arg2;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_f2fDynamicCodeCgi;
- (void)setM_f2fDynamicCodeCgi:(id)arg1;
- (void).cxx_destruct;
@end
