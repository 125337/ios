@interface WCAdCouponLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    id <WCAdCouponLogicDelegate> _delegate; // +0x8
    WCAdCouponInfo * _adCouponInfo; // +0x10
    WCAdConfirmHalfScreenBaseView * _halfScreenView; // +0x18
    WCCanvasDynamicDataLoader * _dataLoader; // +0x20
    WCAdvertiseInfo * _adData; // +0x28
    NSString * _snsId; // +0x30
}
- (id)initWithCouponInfo:(id)arg1 adAdData:(id)arg2 andSnsId:(id)arg3;
- (void)start;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)showLoadingView;
- (void)hideLoadingView;
- (id)fetchMMViewController;
- (void)onGetCouponWithResult:(long long)arg1 errMsg:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adCouponInfo;
- (void)setAdCouponInfo:(id)arg1;
- (id)halfScreenView;
- (void)setHalfScreenView:(id)arg1;
- (id)dataLoader;
- (void)setDataLoader:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (void).cxx_destruct;
@end

