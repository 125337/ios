@interface WCPayPaidSuccessLogic : WCPayControlLogic <WCPayOrderDetailHistoryViewControllerDelegate>
{
    long long m_eWCPayPaidSuccessLogicWCPaySituationType; // +0x38
}
- (void)setPayPaidSuccessLogicSituationType:(long long)arg1;
- (void)convertIAPOrderDetailToWCPayOrderDetailStruct;
- (void)startLogic;
- (void)stopLogic;
- (void)OnHistoryOrderDetailBack:(BOOL)arg1;
- (void)OnHistoryOrderDetailRightActionBack:(BOOL)arg1;
- (void)OnClickedBrandAppUserName:(id)arg1 NickName:(id)arg2;
- (void)OnSelectedSuccessBtnDown;
@end

