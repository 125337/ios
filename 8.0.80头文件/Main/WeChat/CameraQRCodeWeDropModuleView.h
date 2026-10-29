@interface CameraQRCodeWeDropModuleView : UIView <WeDropReceiveFirstInViewDelegate, WeDropReceiveQRRetryInitViewDelegate, WeDropReceiveQRRetryRequestViewDelegate, WeDropReceiveModuleViewProvider>
{
    BOOL _hasQrCode; // +0x8
    id <CameraQRCodeWeDropModuleViewDelegate> _delegate; // +0x10
    NSString * _qrContent; // +0x18
    WeDropReceiveFirstInView * _firstInView; // +0x20
    WeDropReceiveWifiNotOnView * _wifiNotOnView; // +0x28
    WeDropReceiveLocalNetworkNoPermissionView * _localNetworkErrView; // +0x30
    WeDropReceiveLoadingView * _loadingView; // +0x38
    WeDropReceiveQRFinishView * _qrView; // +0x40
    WeDropReceiveQRRetryInitView * _qrInitFailView; // +0x48
    WeDropReceiveQRRetryRequestView * _qrRequestFailView; // +0x50
    id <WeDropReceiveFirstInCallback> _firstInCallback; // +0x58
    id <WeDropReceiveQRCodeCallback> _initFailCallback; // +0x60
    id <WeDropReceiveQRCodeCallback> _requestFailCallback; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onEnterFirstIn:(id)arg1;
- (void)onCheckPermissionFailed:(unsigned long long)arg1;
- (void)onStartGettingQRCode;
- (void)onFailedToInitQRCode:(id)arg1;
- (void)onFailedToRequestQRCode:(id)arg1;
- (void)onGetQRCode:(id)arg1;
- (void)onConfirmFirstIn;
- (void)onRetryInitQR;
- (void)onRetryRequestQR;
- (void)resetAllViews;
- (double)expandedCellHeightWithContainerWidth:(double)arg1;
- (void)setupViews;
- (void)setupWifiNotOnView;
- (void)setupLocalNetworkNotGrantedView;
- (void)setupFirstShowView;
- (void)setupQRCodeView;
- (void)setupLoadingView;
- (void)setupInitFailView;
- (void)setupRequestFailView;
- (void)prepareStateUpdate;
- (void)configureStateLoading;
- (void)configureStateRetryInit;
- (void)configureStateRetryRequest;
- (void)configureStateSuccess;
- (void)configStateFirstShow;
- (void)configureStateWifiNotOn;
- (void)configureStateLocalNetworkNotGranted;
- (void)layoutSubviews;
- (void)endButtonClicked:(id)arg1;
- (BOOL)checkIsHadQRCodeImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)qrContent;
- (void)setQrContent:(id)arg1;
- (id)firstInView;
- (void)setFirstInView:(id)arg1;
- (id)wifiNotOnView;
- (void)setWifiNotOnView:(id)arg1;
- (id)localNetworkErrView;
- (void)setLocalNetworkErrView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)qrView;
- (void)setQrView:(id)arg1;
- (id)qrInitFailView;
- (void)setQrInitFailView:(id)arg1;
- (id)qrRequestFailView;
- (void)setQrRequestFailView:(id)arg1;
- (id)firstInCallback;
- (void)setFirstInCallback:(id)arg1;
- (id)initFailCallback;
- (void)setInitFailCallback:(id)arg1;
- (id)requestFailCallback;
- (void)setRequestFailCallback:(id)arg1;
- (BOOL)hasQrCode;
- (void)setHasQrCode:(BOOL)arg1;
- (void).cxx_destruct;
@end
