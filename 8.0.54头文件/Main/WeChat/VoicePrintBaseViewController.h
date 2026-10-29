@interface VoicePrintBaseViewController : MMUIViewController <VoicePrintRecordButtonDelegate>
{
    WCSheetView * _sheetView; // +0x68
    VoicePrintHeaderView * _headerView; // +0x70
    VoicePrintLoadingView * _loadingView; // +0x78
    VoicePrintDigitView * _digitView; // +0x80
    MMUILabel * _errorLabel; // +0x88
    VoicePrintRecordButton * _recordButton; // +0x90
    UIButton * _footerWeakButton; // +0x98
    MMUIButton * _footerLinkButton; // +0xa0
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xa8
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

