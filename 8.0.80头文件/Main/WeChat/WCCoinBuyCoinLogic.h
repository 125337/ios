@interface WCCoinBuyCoinLogic : MMObject <WCCoinGetWeCoinPriceListCgiDelegate, WCCoinPrepareRechargeCgiDelegate, WCCoinBuyCoinViewDelegate, WCCoinBalancePollDelegate, ServiceAuthExt>
{
    BOOL _preBuyBalanceReady; // +0x8
    BOOL _pollHasBaseline; // +0x9
    WCCoinBuyCoinParameter * _parameter; // +0x10
    id <WCCoinBuyCoinLogicDelegate> _delegate; // +0x18
    unsigned long long _cancelType; // +0x20
    GetWecoinPriceListResponse * _priceListResponse; // +0x28
    WCCoinBuyCoinView * _buyCoinView; // +0x30
    PrepareWecoinRechargeResponse * _prepareRechargeResponse; // +0x38
    WCCoinInterceptLogic * _interceptLogic; // +0x40
    NSString * _productId; // +0x48
    unsigned long long _startTime; // +0x50
    MMUIViewController * _loadingVC; // +0x58
    long long _preBuyBalance; // +0x60
    long long _pollBaseline; // +0x68
    unsigned long long _pollStartTime; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)start;
- (void)getPriceListStartLoading;
- (void)getPriceListStopLoading;
- (void)startLoadingInTopVC;
- (void)stopLoadingInTopVC;
- (id)getTopVC;
- (void)showErrorStr:(id)arg1;
- (void)showError:(id)arg1;
- (void)showNSError:(id)arg1;
- (void)reportSuccessCostTime;
- (BOOL)isNotEnoughScene:(int)arg1;
- (void)callSuccess;
- (void)notifyDelegateBuyCoinSuccess;
- (BOOL)wccoinBalanceCgi:(id)arg1 shouldStopWithResponse:(id)arg2 success:(BOOL)arg3 attemptIndex:(long long)arg4;
- (void)wccoinBalanceCgi:(id)arg1 didFinishWithHit:(BOOL)arg2 attemptCount:(long long)arg3;
- (void)callFail;
- (void)callCancel;
- (void)prepareBuyCoin:(id)arg1;
- (void)buyCoin:(id)arg1;
- (void)fetchPreBuyBalance;
- (void)callCancelBillCgi;
- (void)handleIntercept:(id)arg1;
- (void)didClickBuyCoin:(id)arg1 info:(id)arg2;
- (void)buyCoinViewDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)getPriceListCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPriceListCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)prepareRechargeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)prepareRechargeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onCancelServiceAuth;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)cancelType;
- (void)setCancelType:(unsigned long long)arg1;
- (id)priceListResponse;
- (void)setPriceListResponse:(id)arg1;
- (id)buyCoinView;
- (void)setBuyCoinView:(id)arg1;
- (id)prepareRechargeResponse;
- (void)setPrepareRechargeResponse:(id)arg1;
- (id)interceptLogic;
- (void)setInterceptLogic:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)loadingVC;
- (void)setLoadingVC:(id)arg1;
- (long long)preBuyBalance;
- (void)setPreBuyBalance:(long long)arg1;
- (BOOL)preBuyBalanceReady;
- (void)setPreBuyBalanceReady:(BOOL)arg1;
- (long long)pollBaseline;
- (void)setPollBaseline:(long long)arg1;
- (BOOL)pollHasBaseline;
- (void)setPollHasBaseline:(BOOL)arg1;
- (unsigned long long)pollStartTime;
- (void)setPollStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
