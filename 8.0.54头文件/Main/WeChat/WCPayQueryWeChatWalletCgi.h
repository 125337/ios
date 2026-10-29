@interface WCPayQueryWeChatWalletCgi : WCPayBaseCgi
{
    BOOL _m_isServerResponse; // +0x8
    id <WCPayQueryWeChatWalletCgiDelegate> _m_delegate; // +0x10
}
- (void)startRequest:(id)arg1;
- (BOOL)isDcepAppInstalled;
- (id)getInstalledAppList;
- (id)getWalletLocationInfo;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)getLocalBalanceInfo;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_isServerResponse;
- (void)setM_isServerResponse:(BOOL)arg1;
- (void).cxx_destruct;
@end

