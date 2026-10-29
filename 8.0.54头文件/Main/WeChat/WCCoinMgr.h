@interface WCCoinMgr : MMUserService <MMServiceProtocol>
{
    WCCoinLogger * _logger; // +0x8
    NSMutableArray * _logics; // +0x10
}
- (id)init;
- (BOOL)wechatUserShouldAuth;
- (void)startBuyCoinLogic:(id)arg1 parameter:(id)arg2;
- (void)startSubscribeLogic:(id)arg1 CompletionHandler:(id /* block */)arg2;
- (void)startConsumeLogic:(id)arg1 parameter:(id)arg2;
- (void)getWecoinBalance:(id /* block */)arg1;
- (void)startEncashLogic:(id)arg1 parameter:(id)arg2;
- (void)preload;
- (void)preFetchProducts;
- (void)removeLogic:(id)arg1;
- (BOOL)showFirstBuyCoinTips:(BOOL)arg1;
- (BOOL)showFirstBuyCoinTips:(BOOL)arg1 delegate:(id)arg2;
- (void)startCloseAuthLogic:(id /* block */)arg1;
- (id)logics;
- (id)logger;
- (void)setLogger:(id)arg1;
- (void)setLogics:(id)arg1;
- (void).cxx_destruct;
@end

