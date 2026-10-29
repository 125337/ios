@interface WCPayOfflineGetMsgCgi : WCPayBaseTenPayCgi
- (id)init;
- (void)startRequest;
- (void)startRequest:(double)arg1 withAckKey:(id)arg2 lastReqKey:(id)arg3 lastPayMsgType:(int)arg4 lastTransId:(id)arg5;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
@end

