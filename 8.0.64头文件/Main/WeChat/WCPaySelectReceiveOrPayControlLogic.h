@interface WCPaySelectReceiveOrPayControlLogic : WCPayControlLogic <LocationRetrieveDelegate, WCPayWalletLockVerifyLogicDelegate, IWCPayControlLogicExt>
{
    LocationRetriever * locationRetriever; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCancel;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void).cxx_destruct;
@end
