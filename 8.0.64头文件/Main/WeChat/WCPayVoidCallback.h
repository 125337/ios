@interface WCPayVoidCallback : MMVoidCallback
{
    id <WCPayVoidCallbackDelegate> _m_delegate; // +0x8
    id _m_userInfo; // +0x10
}
- (id)initWithDelegate:(id)arg1 userInfo:(id)arg2;
- (void)call;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (void).cxx_destruct;
@end
