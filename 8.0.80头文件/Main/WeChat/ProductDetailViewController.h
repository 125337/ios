@interface ProductDetailViewController : MMUIViewController <MMWebImageViewDelegate, ProductDetailLogicHelperDelegate, ProductTableViewDelegate, WCActionSheetDelegate, SendAppMsgHandleDelegate, IScanBookMgrExt>
{
    BOOL _canShareToFriend; // +0x70
    BOOL _canShareToWC; // +0x71
    BOOL _canAddToFav; // +0x72
    BOOL _canEditTag; // +0x73
    BOOL _canDelete; // +0x74
    UIView * _infoView; // +0x78
    double _infoViewHeight; // +0x80
    MMWebImageView * _infoBgView; // +0x88
    UIImageView * _blurView; // +0x90
    UIImage * _snapShotImg; // +0x98
    UIView * _maskView; // +0xa0
    MMWebImageView * _thumbImgView; // +0xa8
    UIButton * _containView; // +0xb0
    ScanProductItem * _productItem; // +0xb8
    NSString * _qrcodeUrl; // +0xc0
    ProductTableView * _productTableView; // +0xc8
    SendAppMsgHandler * _sendAppMsgHandler; // +0xd0
    ProductDetailLogicHelper * _logicHelper; // +0xd8
    unsigned int _fromScene; // +0xe0
    UIImageView * _disclosureBtn; // +0xe8
    int _functionType; // +0xf0
    double beginTime; // +0xf8
    id <ProductDetailViewControllerDelegate> _delegate; // +0x100
}
- (id)initWithScanItem:(id)arg1 FunctionType:(int)arg2;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned int)arg2;
- (void)startAsyncGetActionInfo;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)onAsyncDataRefreshed:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)initInfoView;
- (void)headerTouchDown:(id)arg1;
- (void)headerTouchUp:(id)arg1;
- (void)initTableView;
- (void)setTableFooterView;
- (unsigned int)getGetA8KeyScenceFromFunctionType;
- (unsigned int)getJumpProfileScenceFromFunctionType;
- (void)initView;
- (void)OnReturn;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)onIntroTitleClick;
- (void)onExposeClick;
- (void)onHeaderClick;
- (void)onCertificationClick;
- (void)onAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getUpLoadTask:(id)arg1;
- (id)getMessageWrap:(id)arg1;
- (id)getThumbImageData;
- (void)updateInfoViewSnapshot;
- (void)onProuductTableViewDidScroll:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onDeleteProduct;
- (void)onEditProductTag;
- (void)onLoadImageOK:(id)arg1;
- (BOOL)canShareToFriend;
- (void)setCanShareToFriend:(BOOL)arg1;
- (BOOL)canShareToWC;
- (void)setCanShareToWC:(BOOL)arg1;
- (BOOL)canAddToFav;
- (void)setCanAddToFav:(BOOL)arg1;
- (BOOL)canEditTag;
- (void)setCanEditTag:(BOOL)arg1;
- (BOOL)canDelete;
- (void)setCanDelete:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
