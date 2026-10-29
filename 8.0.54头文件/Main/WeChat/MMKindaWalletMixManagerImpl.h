@interface MMKindaWalletMixManagerImpl : NSObject <MMKindaWalletMixManager>
- (void)startWalletMixUseCaseImpl:(id)arg1 data:(id)arg2 successCallback:(id)arg3 cancelCallback:(id)arg4 failCallback:(id)arg5;
- (id)genWalletMixSpGenprepayRespFromUrl:(id)arg1 data:(id)arg2;
- (id)genControlDataFromTransmitKvData:(id)arg1;
@end

