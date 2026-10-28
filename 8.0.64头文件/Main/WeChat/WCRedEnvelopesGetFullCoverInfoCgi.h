@interface WCRedEnvelopesGetFullCoverInfoCgi : WCPayBaseCgi
{
    id <WCRedEnvelopesGetFullCoverInfoCgiDelegate> _cgiDelegate; // +0x8
    CMessageWrap * _messageWrap; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1 messageWrap:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
