@interface WCAccountLoginByQRCodeViewController : WCAccountBaseViewController <NSURLConnectionDelegate>
{
    UIView * _scanQRCodeView; // +0x78
    UIView * _qrCodeFrameView; // +0x80
    UIImageView * _qrCodeImgView; // +0x88
    MMUIActivityIndicatorView * _loadingView; // +0x90
    UIView * _qrCodeScannedView; // +0x98
    UIImageView * _headImgView; // +0xa0
    UIImage * _headImg; // +0xa8
    UILabel * _tipsLabel; // +0xb0
    UILabel * _descriptionLabel; // +0xb8
    UILabel * _nickNameLabel; // +0xc0
    UIButton * _cancelLogIn; // +0xc8
    UIButton * _refreshBtn; // +0xd0
    NSURLConnection * _downloadConnection; // +0xd8
    BOOL _isDownloading; // +0xe0
    NSMutableData * _headImgData; // +0xe8
    WCButtonListView * _bottomWatchLiveButtonView; // +0xf0
    id <WCAccountLoginByQRCodeViewControllerDelegate> m_delegate; // +0xf8
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onGetQRCodeImg:(id)arg1;
- (void)showUserInfoViewWithHeadImgURL:(id)arg1 nickName:(id)arg2;
- (void)showQRCodeScanView;
- (void)showLoginingViewWithNickName:(id)arg1 headImgURL:(id)arg2;
- (void)showFailedView;
- (void)showQRCodeFailedView;
- (void)showQRCodeExpiredView;
- (void)refreshQCodeView;
- (void)removeRefreshBtn;
- (void)createScanQRCodeView;
- (void)createQRCodeScannedView;
- (void)createHeadImgView;
- (void)createNickNameLabel;
- (void)createQRCodeFrame;
- (void)createQRCodeView;
- (void)createLoadingView;
- (void)createTipsView;
- (void)createDescriptionView;
- (void)onCancel;
- (void)onRefreshBtnClicked;
- (void)startDownloadHeadImgWithURL:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)makeViewCenterInIpad;
- (void)updateTipsLabelY;
- (void)setDelegate:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void).cxx_destruct;
@end

