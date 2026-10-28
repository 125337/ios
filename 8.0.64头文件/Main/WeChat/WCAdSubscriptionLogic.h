@interface WCAdSubscriptionLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate>
{
    BOOL _btnHasBeenClicked; // +0x8
    id <WCAdSubscriptionLogicDelegate> _delegate; // +0x10
    NSString * _snsId; // +0x18
    NSString * _adTitle; // +0x20
    NSString * _adDesc; // +0x28
    NSString * _adSubmitBtnTitle; // +0x30
    NSString * _headImage; // +0x38
    NSString * _nickName; // +0x40
    WCAdConfirmHalfScreenBaseView * _halfScreenView; // +0x48
}
- (id)initWithTitle:(id)arg1 adDesc:(id)arg2 adSubmitBtnTitle:(id)arg3 headImage:(id)arg4 nickName:(id)arg5;
- (void)start;
- (void)checkParameterAndStart;
- (BOOL)isStringEmpty:(id)arg1;
- (void)callFinishedDelegateWithResult:(id)arg1 success:(BOOL)arg2 cancel:(BOOL)arg3 errorCode:(long long)arg4;
- (void)showActionSheet;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)arg1;
- (void)onConfirmViewDidDisappearWithConfirmInfo:(id)arg1;
- (void)updateSubscriptionLogicInfoWith:(id)arg1 dataItem:(id)arg2;
- (void)updateHeadInfoWithHeadUrl:(id)arg1 nickname:(id)arg2 title:(id)arg3 adDesc:(id)arg4 adSubmitBtnTitle:(id)arg5;
- (BOOL)isSubscriptionInfoAllValid;
- (id)fetchSubscriptionStateMMKVKey;
- (void)setSubscriptionStateToMMKV;
- (BOOL)hasSendSubscription;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)adTitle;
- (void)setAdTitle:(id)arg1;
- (id)adDesc;
- (void)setAdDesc:(id)arg1;
- (id)adSubmitBtnTitle;
- (void)setAdSubmitBtnTitle:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)halfScreenView;
- (void)setHalfScreenView:(id)arg1;
- (BOOL)btnHasBeenClicked;
- (void)setBtnHasBeenClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
