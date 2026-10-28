@interface WCPayTransferPhoneChangeSwitchCgi : WCPayBaseCgi
{
    id <WCPayTransferPhoneChangeSwitchCgiDelegate> _m_delegate; // +0x8
}
- (id)init;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
