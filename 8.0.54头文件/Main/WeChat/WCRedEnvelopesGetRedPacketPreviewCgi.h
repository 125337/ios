@interface WCRedEnvelopesGetRedPacketPreviewCgi : WCPayBaseCgi
{
    id <WCRedEnvelopesGetRedPacketPreviewCgiDelegate> m_delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;
@end

