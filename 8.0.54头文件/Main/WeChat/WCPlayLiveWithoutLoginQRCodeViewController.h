@interface WCPlayLiveWithoutLoginQRCodeViewController : WCAccountBaseViewController
{
    id /* block */ _cancelCompletion; // +0x78
    id /* block */ _didAppearCompletion; // +0x80
    id /* block */ _refreshQrcodeCompletion; // +0x88
    UIImageView * _qrCodeImgView; // +0x90
    UILabel * _descriptionLabel; // +0x98
    MMUIActivityIndicatorView * _loadingView; // +0xa0
    UIButton * _refreshButton; // +0xa8
}
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)layoutUI;
- (void)updateQRCode:(id)arg1;
- (void)onCancel;
- (void)onRefreshBtnClicked:(id)arg1;
- (void)showLoadingView;
- (void)stopLoadingView;
- (void)cleanQrcode;
- (void)showRefreshView;
- (void)willEnterForeground;
- (id)qrCodeImgView;
- (id)descriptionLabel;
- (id)loadingView;
- (id)refreshButton;
- (id /* block */)cancelCompletion;
- (void)setCancelCompletion:(id /* block */)arg1;
- (id /* block */)didAppearCompletion;
- (void)setDidAppearCompletion:(id /* block */)arg1;
- (id /* block */)refreshQrcodeCompletion;
- (void)setRefreshQrcodeCompletion:(id /* block */)arg1;
- (void)setQrCodeImgView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setRefreshButton:(id)arg1;
- (void).cxx_destruct;
@end

