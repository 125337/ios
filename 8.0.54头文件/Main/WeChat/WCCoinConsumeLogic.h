@interface WCCoinConsumeLogic : MMObject <WCCoinPrepareConsumeCgiDelegate, WCCoinConsumeCGIDelegate, WCCoinConsumePanelDelegate, WCCoinBuyCoinLogicDelegate, WCCoinConsumeTipsViewDelegate>
{
    id <WCCoinConsumeLogicDelegate> _delegate; // +0x8
    WCCoinInterceptLogic * _interceptLogic; // +0x10
    WCCoinConsumeParameter * _parameter; // +0x18
    PrepareWecoinConsumeResponse * _prepareConsumeResponse; // +0x20
    WCCoinConsumePanel * _consumePanel; // +0x28
}
- (void)startWith:(id)arg1;
- (void)showConsumePanel;
- (void)showConsumePanel:(long long)arg1;
- (void)directConsume;
- (void)startBuyCoin:(id)arg1 startByConsume:(BOOL)arg2;
- (void)handleBuff:(id)arg1;
- (void)handlePrepareResp:(id)arg1;
- (void)callPrepareCgi;
- (void)callConsumeCgi:(id)arg1;
- (void)callSuccess:(id)arg1;
- (void)callFail:(id)arg1;
- (void)callCancel;
- (void)startConsumeLoading:(BOOL)arg1;
- (void)endConsumeLoading;
- (id)getTopVC;
- (void)handleIntercept:(id)arg1;
- (id)errorWithCgiErrorCode:(int)arg1;
- (id)prepareErrorWith:(id)arg1;
- (void)prepareConsumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareConsumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)consumeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)consumeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)panelDidClickConsume:(id)arg1;
- (void)panelDidClickBalanceButton:(id)arg1;
- (void)panelDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)panelDidClickConsumeTips:(id)arg1;
- (void)didClose:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)interceptLogic;
- (void)setInterceptLogic:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)prepareConsumeResponse;
- (void)setPrepareConsumeResponse:(id)arg1;
- (id)consumePanel;
- (void)setConsumePanel:(id)arg1;
- (void).cxx_destruct;
@end

