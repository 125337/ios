@interface WCPayGetTransferWordingCgi : WCPayBaseTenPayCgi
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
@end

