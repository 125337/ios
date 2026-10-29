@interface SettingSayHelloTipsViewController : MMAcceptAgreementBaseViewController <MMGrowTextViewWithExtrasDelegate, CardImageBrowseViewControllerDelegate, WCActionSheetDelegate, SendVerifyMsgBusinessCardImageDelegate, MMImagePickerManagerDelegate>
{
    BOOL _hasAutoFocused; // +0x70
    BOOL _keyboardTransitioning; // +0x71
    BOOL _isShowingKeyboard; // +0x72
    unsigned long long _greetingPageSrc; // +0x78
    UIView * _containerView; // +0x80
    MMUIView * _verifyMsgEditView; // +0x88
    MMGrowTextViewWithExtras * _tfVerifyMsg; // +0x90
    UIView * _sepLine; // +0x98
    UIView * _topSepLine; // +0xa0
    MMUIButton * _addVerifyImgBtn; // +0xa8
    MMUIImageView * _verifyMsgImgView; // +0xb0
    MMUIButton * _showVerifyImgBtn; // +0xb8
    UIButton * _confirmButton; // +0xc0
    WCTableViewNormalCellManager * _verifyMsgCellInfo; // +0xc8
    double _keyboardHeight; // +0xd0
    NSString * _verifyContent; // +0xd8
    UIImage * _verifyMsgImage; // +0xe0
    NSString * _originVerifyContent; // +0xe8
    UIImage * _originVerifyMsgImage; // +0xf0
    SendVerifyMsgBusinessCardImageLogic * _businessCardImageLogic; // +0xf8
}
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (void)loadSavedHelloMsgImageIfNeeded;
- (id)businessCardImageLogic;
- (void)reloadTableData;
- (void)makeVerifyMsgCell:(id)arg1;
- (void)setupVerifyMsgEditView;
- (void)onConfirmButtonClick;
- (void)saveHelloMsgWithBusinessCardItem:(id)arg1;
- (void)onSaveSucceed;
- (void)onSaveFailed;
- (void)onShowVerifyImageBtnClick;
- (void)showVerifyImageView:(id)arg1 originFrame:(CGRect)arg2 isHiddenDeleteButton:(BOOL)arg3;
- (void)onClickVerifyImageCoverBtnClick;
- (void)onClickVerifyAddBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (CGRect)cardImgViewFrameAtIndex:(unsigned int)arg1;
- (void)onUploadBusinessCardImgFailFinish:(id)arg1 scene:(unsigned int)arg2;
- (void)onUploadBusinessCardImgSuccessFinish:(id)arg1 cardImgItemInfo:(id)arg2 scene:(unsigned int)arg3;
- (void)onDownloadBusinessCardImg:(id)arg1 success:(BOOL)arg2 scene:(unsigned int)arg3;
- (void)onMMGrowTextViewWithExtrasTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)TextViewDidChanged:(id)arg1;
- (void)updateVerifyMsgEditViewLayoutOnHeightChanged;
- (void)updateConfirmButtonEnabledState;
- (void)setupConfirmButton;
- (void)updateConfirmButtonPosition;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)updateTableContentInsetForKeyboard;
- (void)ensureContentAboveConfirmButton;
- (void)adjustContentOffsetAboveConfirmButtonAnimated:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)greetingPageSrc;
- (void)setGreetingPageSrc:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)verifyMsgEditView;
- (void)setVerifyMsgEditView:(id)arg1;
- (id)tfVerifyMsg;
- (void)setTfVerifyMsg:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)topSepLine;
- (void)setTopSepLine:(id)arg1;
- (id)addVerifyImgBtn;
- (void)setAddVerifyImgBtn:(id)arg1;
- (id)verifyMsgImgView;
- (void)setVerifyMsgImgView:(id)arg1;
- (id)showVerifyImgBtn;
- (void)setShowVerifyImgBtn:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)verifyMsgCellInfo;
- (void)setVerifyMsgCellInfo:(id)arg1;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (id)verifyMsgImage;
- (void)setVerifyMsgImage:(id)arg1;
- (id)originVerifyContent;
- (void)setOriginVerifyContent:(id)arg1;
- (id)originVerifyMsgImage;
- (void)setOriginVerifyMsgImage:(id)arg1;
- (void)setBusinessCardImageLogic:(id)arg1;
- (void).cxx_destruct;
@end
