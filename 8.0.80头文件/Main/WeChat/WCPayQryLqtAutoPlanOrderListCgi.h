@interface WCPayQryLqtAutoPlanOrderListCgi : WCPayBaseCgi
{
    id <WCPayQryLqtAutoPlanOrderListCgiDelegate> _m_delegate; // +0x8
    QryAutoPlanOrderListReq * _planDetailReq; // +0x10
}
- (void)clearDelegate;
- (unsigned long long)reqLimit;
- (id)init;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)planDetailReq;
- (void)setPlanDetailReq:(id)arg1;
- (void).cxx_destruct;
@end
