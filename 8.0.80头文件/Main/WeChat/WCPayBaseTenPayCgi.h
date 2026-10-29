@interface WCPayBaseTenPayCgi : WCPayBaseCgi
- (id)init;
- (void)startTenPayRequestWithQueryDic:(id)arg1 innerDic:(id)arg2;
- (void)setupDigitalCertSign:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
@end
