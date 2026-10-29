@interface VoicePrintBaseViewController : MMUIViewController <VoicePrintRecordButtonDelegate>
{
    WCSheetView * _sheetView; // +0x70
    VoicePrintHeaderView * _headerView; // +0x78
    VoicePrintLoadingView * _loadingView; // +0x80
    VoicePrintDigitView * _digitView; // +0x88
    MMUILabel * _errorLabel; // +0x90
    VoicePrintRecordButton * _recordButton; // +0x98
    UIButton * _footerWeakButton; // +0xa0
    MMUIButton * _footerLinkButton; // +0xa8
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xb0
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractiveDismiss;
- (void)initView;
- (void)initNavigationBar;
- (id)loadingView;
- (id)footerLinkButton;
- (void)onClose;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)digitView;
- (void)setDigitView:(id)arg1;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (id)footerWeakButton;
- (void)setFooterWeakButton:(id)arg1;
- (void)setFooterLinkButton:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
