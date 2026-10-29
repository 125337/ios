@interface WCPayQRCodeRewardReceiverDetailViewController : WCPayBaseViewController <WCPayQRCodeRewardCodeViewDelegate, WCActionSheetDelegate>
{
    id <WCPayQRCodeRewardReceiverDetailViewControllerDelegate> _delegate; // +0x90
    WCPayQRCodeRewardCodeView * _codeView; // +0x98
    WCPayNoticeItemView * _noticeItemView; // +0xa0
}
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)refreshNavigationBar;
- (void)setupIntrolView;
- (void)setupDetailViewContent;
- (void)setupFooterView;
- (id)getDetailView;
- (void)leftBarButtonClick;
- (void)settingBtnClick;
- (void)confirmSetupBtnClick;
- (void)saveCodeBtnClick;
- (id)getImageFromCodeView;
- (void)detailBtnClick;
- (void)updateViewAfterGetSetWordingResult:(BOOL)arg1;
- (void)updateViewAfterGetRemoveWordingResult:(BOOL)arg1;
- (void)onRewardCodeViewClickBoxButtonWithCodeDisplayMode:(long long)arg1;
- (void)onRewardCodeViewConfirmToSetWording:(id)arg1;
- (void)onRewardCodeViewConfirmToRemoveWording;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)delegate;
- (id)codeView;
- (void)setCodeView:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

