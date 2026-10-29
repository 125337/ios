@interface WCPayCouponsLogicMgr : MMUserService <MMServiceProtocol>
{
    BOOL _bIsUserClickConfirmInCouponList; // +0x8
    WCPayTradeFavInfo * _wcPayTradeFavInfo; // +0x10
    NSMutableDictionary * _dicFavorItemInComponseInfo; // +0x18
}
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)selectComposeInfo:(id)arg1;
- (void)resetTradeFavInfo:(id)arg1;
- (id)resetComposeInfo:(id)arg1;
- (id)autoAdjustCouponsInfoForSelectedCard:(id)arg1;
- (void)clearSelectedBankFavAndReCalculateBankFavorInfo;
- (id)getWCPayTradeFavInfo;
- (id)getBankFavorItemAndCouponsInfo;
- (BOOL)isFreePaymentTradeFavInfo;
- (void)calcDefaultComposeInfoForSelectCardIfNeed:(id)arg1;
- (void)setCouponsListViewUserHasClickConfirm:(BOOL)arg1;
- (unsigned long long)getSelectedFavComposeInfoInvariableFavAmount;
- (unsigned long long)getSelectedFavComposeInfoShowFavAmount;
- (BOOL)shouldShowFavEnteranceWithBindCardArray:(id)arg1;
- (BOOL)shouldShowMoreFavEnteranceWithBindCardArray:(id)arg1;
- (id)selectTradeFavItem:(id)arg1;
- (id)deselectTradeFavItem:(id)arg1;
- (id)getFilterTradeFavListWithBindCardArray:(id)arg1;
- (id)getBindSerialBankFavorDescListWithBindSerial:(id)arg1;
- (id)getNewBindCardFavorDescList;
- (BOOL)shouldShowBankFavorRedDotWithCardList:(id)arg1 currentBindSerial:(id)arg2;
- (BOOL)hasShowBankFavRedDotInOrderConfirmView;
- (void)setBankFavReddotHasShow;
- (id)getOrderConfirmViewShowBindSerialBankFavDescListWithBindSerial:(id)arg1;
- (id)wcPayTradeFavInfo;
- (void)setWcPayTradeFavInfo:(id)arg1;
- (id)dicFavorItemInComponseInfo;
- (void)setDicFavorItemInComponseInfo:(id)arg1;
- (BOOL)bIsUserClickConfirmInCouponList;
- (void)setBIsUserClickConfirmInCouponList:(BOOL)arg1;
- (void).cxx_destruct;
@end

