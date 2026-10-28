@interface WCRedEnvelopesGetTimeLimitPromoCgi : WCPayBaseCgi
{
    id <WCRedEnvelopesGetTimeLimitPromoCgiDelegate> m_delegate; // +0x8
}
+ (id)GetLastTimeLimitPromoResponse;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)saveTimeLimitPromotion:(id)arg1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;
@end
