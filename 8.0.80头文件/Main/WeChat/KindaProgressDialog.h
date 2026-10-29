@interface KindaProgressDialog : NSObject <MMKProgressDialog>
{
    MMLoadingView * _topLoadingView; // +0x8
    WCBizLoadingView * _m_loadView; // +0x10
    MMUIViewController * _vc; // +0x18
    MMLoadingView * _m_normalGlobalView; // +0x20
    WCBizLoadingView * _m_payGlobalView; // +0x28
    MMLoadingView * _m_customGlobalView; // +0x30
}
- (void)dealloc;
- (void)showImpl:(id)arg1 canCancel:(BOOL)arg2 cancel:(id)arg3;
- (void)showPayProcessImpl:(BOOL)arg1 cancel:(id)arg2;
- (void)showToast:(id)arg1;
- (void)showNormalLoading:(BOOL)arg1;
- (void)showNormalGlobalLoading:(BOOL)arg1;
- (void)showPayGlobalLoading:(BOOL)arg1;
- (void)showWPHKProgressLoading:(BOOL)arg1;
- (void)showGoToWPHKProgressLoading:(BOOL)arg1;
- (void)showProgressLoadingWithTitle:(id)arg1 canCancel:(BOOL)arg2;
- (void)showWPHKPayGlobalLoading:(BOOL)arg1;
- (id)insideGetCurrentViewController;
- (void)insideInitLoadView;
- (void)dismiss;
- (void)showTopLoading:(id)arg1 block:(BOOL)arg2;
- (void)showCustomLoading:(id)arg1 block:(BOOL)arg2;
- (id)m_loadView;
- (void)setM_loadView:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)m_normalGlobalView;
- (void)setM_normalGlobalView:(id)arg1;
- (id)m_payGlobalView;
- (void)setM_payGlobalView:(id)arg1;
- (id)m_customGlobalView;
- (void)setM_customGlobalView:(id)arg1;
- (void).cxx_destruct;
@end
