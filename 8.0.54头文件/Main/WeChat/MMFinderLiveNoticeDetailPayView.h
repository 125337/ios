@interface MMFinderLiveNoticeDetailPayView : MMFinderLiveGenericPayConfirmSheetView <WCCoinBuyCoinLogicDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>
{
    BOOL _isTicket; // +0x8
    id /* block */ _actionButtonBlock; // +0x10
    MMFinderLivePrepayTiersPanelViewModel * _tiersViewModel; // +0x18
    FinderLiveNoticeInfo * _noticeInfo; // +0x20
}
- (void)updateWithNoticeInfo:(id)arg1 contentHeight:(double)arg2;
- (void)updateModel:(id)arg1;
- (void)updateNoticeView;
- (void)onClickActionButton;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)customInitActionButton:(id)arg1;
- (void)customInitTipLabel:(id)arg1;
- (void)customInitMoneyLabel:(id)arg1;
- (id /* block */)actionButtonBlock;
- (void)setActionButtonBlock:(id /* block */)arg1;
- (id)tiersViewModel;
- (void)setTiersViewModel:(id)arg1;
- (BOOL)isTicket;
- (void)setIsTicket:(BOOL)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void).cxx_destruct;
@end

