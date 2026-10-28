@interface WCBizControlLogic : WCBaseControlLogic
{
    WCBizLoadingView * m_loadView; // +0x20
    BOOL m_isLoading; // +0x28
}
- (id)init;
- (BOOL)isLoading;
- (void)initLoadView;
- (void)dealloc;
- (void)startLoading:(BOOL)arg1;
- (void)startWCPayLoading:(BOOL)arg1;
- (void)startWCPayLoading;
- (void)startWCPayLoadingBlocked;
- (void)stopWCPayLoading;
- (void)startLoading;
- (void)startLoadingBlocked;
- (void)startLoadingWithTip:(id)arg1;
- (void)startLoadingBlockedWithTip:(id)arg1;
- (void)stopLoading;
- (void)showLoadingOK:(id)arg1;
- (void)stopLoadingOnMainWindow;
- (void)startLoadingOnMainWindow;
- (void)startCommonLoading;
- (void)stopCommonLoading;
- (void)startCommonLoadingWithTips:(id)arg1;
- (void).cxx_destruct;
@end
