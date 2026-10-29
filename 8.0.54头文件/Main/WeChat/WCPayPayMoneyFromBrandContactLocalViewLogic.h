@interface WCPayPayMoneyFromBrandContactLocalViewLogic : WCPayPayMoneyLogic <MMUseCaseCallback>
{
    NSString * m_nsHandleURL; // +0x58
}
- (void)SetHandleURL:(id)arg1;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OrderDetailAdd:(id)arg1;
- (void)OrderDetailPay:(id)arg1;
- (void)OrderDetailBack;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (void)OnHandleWCPayURL:(id)arg1 Error:(id)arg2;
- (void)call:(id)arg1;
- (void).cxx_destruct;
@end

