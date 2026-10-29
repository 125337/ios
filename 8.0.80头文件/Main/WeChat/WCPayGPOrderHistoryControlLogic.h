@interface WCPayGPOrderHistoryControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderHistoryControllerDelegate, WCPayGPOrderStatusControlLogicDelegate>
{
    BOOL _bIsFromTop; // +0x38
    unsigned long long _curHistoryScene; // +0x40
    unsigned long long _reqestingHistoryScene; // +0x48
    AAQueryListRes * _lastQueryListResp; // +0x50
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)onOrderHistoryViewControllerCancel;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onOrderHistoryViewControllerUserSelectRecord:(id)arg1;
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)arg1;
- (void)orderHasBeenClose:(id)arg1;
- (void)orderStatusLogicDidStop:(BOOL)arg1;
- (void)queryLaunchOrderHistoryWithOffset:(unsigned int)arg1;
- (void)onGetGroupPayOrderHistory:(id)arg1;
- (void)onGetGroupPayOrderHistoryRespBack;
- (void)onGetGroupPayOrderHistoryError;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)bIsFromTop;
- (void)setBIsFromTop:(BOOL)arg1;
- (unsigned long long)curHistoryScene;
- (void)setCurHistoryScene:(unsigned long long)arg1;
- (unsigned long long)reqestingHistoryScene;
- (void)setReqestingHistoryScene:(unsigned long long)arg1;
- (id)lastQueryListResp;
- (void)setLastQueryListResp:(id)arg1;
- (void).cxx_destruct;
@end
