@interface WebviewJSEventHandler_getH5TransactionRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayPayMoneyFromOverseaH5WalletLogicDelegate, MMUseCaseCallback>
{
    BOOL _closeWebAfterPayDetailBack; // +0x8
    WCPayPayMoneyFromOverseaH5WalletLogic * _controlLogic; // +0x10
    JSEvent * _event; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)startKindaShowOrderDetail:(id)arg1;
- (void)sendResult:(BOOL)arg1 jsEvent:(id)arg2;
- (void)showOrderDetail:(id)arg1 complete:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (id)getDiscountArray:(id)arg1;
- (id)getActivityInfo:(id)arg1;
- (void)call:(id)arg1;
- (BOOL)closeWebAfterPayDetailBack;
- (void)setCloseWebAfterPayDetailBack:(BOOL)arg1;
- (id)controlLogic;
- (void)setControlLogic:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end
