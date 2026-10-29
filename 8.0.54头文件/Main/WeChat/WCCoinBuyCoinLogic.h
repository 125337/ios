@interface WCCoinBuyCoinLogic : MMObject <WCCoinGetWeCoinPriceListCgiDelegate, WCCoinPrepareRechargeCgiDelegate, WCCoinBuyCoinViewDelegate, ServiceAuthExt>
{
    WCCoinBuyCoinParameter * _parameter; // +0x8
    id <WCCoinBuyCoinLogicDelegate> _delegate; // +0x10
    unsigned long long _cancelType; // +0x18
    GetWecoinPriceListResponse * _priceListResponse; // +0x20
    WCCoinBuyCoinView * _buyCoinView; // +0x28
    PrepareWecoinRechargeResponse * _prepareRechargeResponse; // +0x30
    WCCoinInterceptLogic * _interceptLogic; // +0x38
    NSString * _productId; // +0x40
    unsigned long long _startTime; // +0x48
    MMUIViewController * _loadingVC; // +0x50
}
- (id)init;
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
- (void)callFail;
- (void)callCancel;
- (void)prepareBuyCoin:(id)arg1;
- (void)buyCoin:(id)arg1;
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
- (void).cxx_destruct;
@end

