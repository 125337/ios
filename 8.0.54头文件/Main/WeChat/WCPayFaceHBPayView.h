@interface WCPayFaceHBPayView : UIView <ShakeCheckerDelegate, WCPayFaceHBFaceViewDelegate, WCPayFaceReceiverViewDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate>
{
    id <WCPayFaceHBPayViewDelegate> m_delegate; // +0x8
    id <MMUIViewControllerDelegate> m_vcDelegate; // +0x10
    WCPayFaceHBQRCodeInfo * m_qrInfo; // +0x18
    double _oldBrightness; // +0x20
    UIView * _whiteView; // +0x28
    UIView * _hbsView; // +0x30
    UIImageView * _hbFirstView; // +0x38
    UIButton * _payBtn; // +0x40
    WCPayGoldenStatusView * _scanFanTip; // +0x48
    WCPayGoldenStatusView * _scanTip; // +0x50
    WCPayGoldenStatusView * _countTip; // +0x58
    WCPayFaceHBFaceView * _hbOnePersonView; // +0x60
    WCPayFaceHBQRCodeView * _imageQRCodeView; // +0x68
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x70
    WCPayFaceReceiverView * _receiverView; // +0x78
    UIView * _bottomSafeAreaView; // +0x80
    int m_lastTouchViewIndex; // +0x88
    int m_lastPanViewIndex; // +0x8c
    int m_lastSelectViewIndex; // +0x90
    int m_lastTouchBeginIndex; // +0x94
    NSMutableArray * m_boPlays; // +0x98
    int m_boPlayIndex; // +0xa0
    NSMutableArray * m_selectPlays; // +0xa8
    int m_selectPlayIndex; // +0xb0
    NSMutableArray * m_musicPlays; // +0xb8
    BOOL m_bShowTipAlert; // +0xc0
    CMMotionManager * m_cmManager; // +0xc8
    BOOL m_bStartManager; // +0xd0
    BOOL m_bHasMotion; // +0xd1
    MMTimer * m_motionTimer; // +0xd8
    WCPayFaceRedEnvelopesReceiverInfo * _lastReceiverInfo; // +0xe0
    MMTipsViewController * _tipsViewController; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)deviceMotion:(BOOL)arg1;
- (void)setNoMotion;
- (void)fadeAnimate;
- (void)onIKnow;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)userDidChangeScreenCapture:(id)arg1;
- (BOOL)hasValidQrCodeInfo;
- (void)handleUserStartScreenCapture;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)makeHBViews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handlePanGes:(id)arg1;
- (void)handleChangeTouch:(int)arg1 Select:(int)arg2 Pan:(int)arg3 TouchBegin:(BOOL)arg4;
- (int)changeToTouchPoint:(CGPoint)arg1;
- (void)layoutSubviews;
- (void)OnFaceHBViewDetail;
- (void)OnLoadMoreRedEnvelopesList;
- (void)layoutHBsView;
- (void)onCancel;
- (void)closeView;
- (void)onManage;
- (void)onMore;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setViewController:(id)arg1;
- (void)showLoading;
- (void)hideLoading;
- (void)showDeleteHBTips:(id)arg1;
- (void)OnBangAnimateStop;
- (void)giveHBAnimate:(id)arg1;
- (void)checkQRCode;
- (void)updateQRCode:(id)arg1;
- (void)setReceiverViewHidden:(BOOL)arg1 Animate:(BOOL)arg2;
- (void)hasOpenHBFor:(id)arg1;
- (void)clearReceiverView;
- (void)batchSetReceiverInfos:(id)arg1 balanceNum:(long long)arg2;
- (id)getReceiverInfos;
- (void)setDelegate:(id)arg1;
- (id)tipsViewController;
- (void)setTipsViewController:(id)arg1;
- (void).cxx_destruct;
@end

