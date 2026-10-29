@interface MMLiveNameVerifyViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMWebViewDelegate, MMLiveTaskMgrExt>
{
    BOOL _needAutoRotateToPortrait; // +0x68
    BOOL _isVerify; // +0x69
    id <MMLiveNameVerifyViewControllerDelegate> _delegate; // +0x70
    long long _currDeviceOrientation; // +0x78
    NSString * _verifyUrl; // +0x80
    MMLiveTaskId * _taskId; // +0x88
    long long _entryType; // +0x90
    MMAcceptAgreementCommonHeadView * _nameVerifyHeadView; // +0x98
    UIButton * _nameVerifyButton; // +0xa0
}
- (id)initWithVerifyUrl:(id)arg1 taskId:(id)arg2 withEntryType:(long long)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (long long)getCurrentOrientation;
- (void)dealloc;
- (void)intUI;
- (void)onNameVerifyButtonClicked;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewReturn:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)checkVerifyStatus;
- (void)onFaceVerifyFailed;
- (void)onFaceVerifySucceeded;
- (void)OnRealnameVerfitySuccessNotification:(id)arg1;
- (BOOL)useWepayNameVerify;
- (void)forceRotateToPortrait;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (id)verifyUrl;
- (void)setVerifyUrl:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)entryType;
- (void)setEntryType:(long long)arg1;
- (BOOL)isVerify;
- (void)setIsVerify:(BOOL)arg1;
- (id)nameVerifyHeadView;
- (void)setNameVerifyHeadView:(id)arg1;
- (id)nameVerifyButton;
- (void)setNameVerifyButton:(id)arg1;
- (void).cxx_destruct;
@end

