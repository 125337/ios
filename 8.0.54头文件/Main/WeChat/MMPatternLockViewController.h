@interface MMPatternLockViewController : MMUIViewController <MMPatternLockViewDelegate>
{
    BOOL _isConfirm; // +0x68
    BOOL _isOpSuccess; // +0x69
    BOOL _isNeedSvrVerify; // +0x6a
    BOOL _isBlock2Root; // +0x6b
    id <MMPatternLockViewControllerDelegate> _delegate; // +0x70
    long long _curScene; // +0x78
    MMPatternLockView * _lockView; // +0x80
    MMPatternLockView * _confirmLockView; // +0x88
    MMPatternLockTipsView * _tipsView; // +0x90
    MMPatternLockTipsView * _confirmTipsView; // +0x98
    MMUIButton * _forgetPwdBtn; // +0xa0
    WCBizLoadingView * _loadingView; // +0xa8
    NSString * _firstResult; // +0xb0
    NSString * _confirmResult; // +0xb8
    long long _retryTime; // +0xc0
}
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)setDelegate:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)initData;
- (void)initLoadingView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupNewPatternLockPwdSuccess;
- (void)setupNewPatternLockPwdFail;
- (void)verifyPatternLockPwdCorrect:(id)arg1;
- (void)verifyPatternLockPwdError;
- (void)verifyPatternLockPwdFail;
- (void)modifyPatternLockPwdSuccess;
- (void)modifyPatternLockPwdFail;
- (void)closePatternLockPwdSuccess;
- (void)closePatternLockPwdFail;
- (id)getDisplayTitle;
- (void)onForgetPwdBtnPress:(id)arg1;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(BOOL)arg2;
- (void)handlePatternLockViewConfirmTransform;
- (void)handlePatternLockViewConfirmErrorTransform;
- (void)handleDidGetPatternPwd:(id)arg1;
- (void)onPwdErrorAlertViewClickCancel;
- (void)onAlertViewClickCancel;
- (void)onAlertViewClickForgetPwd;
- (void)resetViewPosition;
- (void)onOpCancel;
- (void)onOpSucess;
- (void)onPwdErrorBeyondLimit;
- (void)lockView:(id)arg1 didEndWithPattern:(id)arg2;
- (BOOL)isContinueWhenlockViewResultInValid:(id)arg1;
- (void)onCancelPress:(id)arg1;
- (void)fadeShowEnd;
- (id)delegate;
- (long long)curScene;
- (void)setCurScene:(long long)arg1;
- (id)lockView;
- (void)setLockView:(id)arg1;
- (id)confirmLockView;
- (void)setConfirmLockView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)confirmTipsView;
- (void)setConfirmTipsView:(id)arg1;
- (id)forgetPwdBtn;
- (void)setForgetPwdBtn:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isConfirm;
- (void)setIsConfirm:(BOOL)arg1;
- (id)firstResult;
- (void)setFirstResult:(id)arg1;
- (id)confirmResult;
- (void)setConfirmResult:(id)arg1;
- (long long)retryTime;
- (void)setRetryTime:(long long)arg1;
- (BOOL)isOpSuccess;
- (void)setIsOpSuccess:(BOOL)arg1;
- (BOOL)isNeedSvrVerify;
- (void)setIsNeedSvrVerify:(BOOL)arg1;
- (BOOL)isBlock2Root;
- (void)setIsBlock2Root:(BOOL)arg1;
- (void).cxx_destruct;
@end

