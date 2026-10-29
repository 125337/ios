@interface WCPayOpenECardCgi : WCPayBaseTenPayCgi
- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
@end

