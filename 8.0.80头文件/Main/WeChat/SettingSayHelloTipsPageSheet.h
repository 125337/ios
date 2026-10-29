@interface SettingSayHelloTipsPageSheet : MMPageSheetBaseView <MMGrowTextViewWithExtrasDelegate, CardImageBrowseViewControllerDelegate, WCActionSheetDelegate, SendVerifyMsgBusinessCardImageDelegate, ILinkEventExt>
{
    BOOL _isShowingKeyboard; // +0x8
    BOOL _hasEditHelloMsg; // +0x9
    UIView * _containerView; // +0x10
    MMUIView * _verifyMsgEditView; // +0x18
    MMGrowTextViewWithExtras * _tfVerifyMsg; // +0x20
    UIView * _sepLine; // +0x28
    MMUIButton * _addVerifyImgBtn; // +0x30
    MMUIImageView * _verifyMsgImgView; // +0x38
    MMUIButton * _showVerifyImgBtn; // +0x40
    MMUIButton * _verifyCoverBtn; // +0x48
    RichTextView * _savedHelloMsgView; // +0x50
    UIButton * _confirmButton; // +0x58
    double _keyboardHeight; // +0x60
    CBaseContact * _chatContact; // +0x68
    NSString * _verifyContent; // +0x70
    UIImage * _verifyMsgImage; // +0x78
    SendVerifyMsgBusinessCardImageLogic * _businessCardImageLogic; // +0x80
}
- (id)initWithChatContact:(id)arg1;
- (void)layoutSubviews;
- (void)updateUI;
- (void)layoutUI;
- (void)initData;
- (void)initConfig;
- (void)initView;
- (void)setupVerifyMsgEditView;
- (void)updateSavedHelloMsgView;
- (void)pageSheetDidShow;
- (void)pageSheetDidAppear;
- (id)businessCardImageLogic;
- (void)updateDetailViewHeightAnimated:(BOOL)arg1;
- (void)pageSheetDidRotation;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onConfirmButtonClick;
- (void)onShowVerifyImageBtnClick;
- (void)showVerifyImageView:(id)arg1 originFrame:(CGRect)arg2 isHiddenDeleteButton:(BOOL)arg3;
- (void)onClickVerifyImageCoverBtnClick;
- (void)onClickVerifyAddBtnClick;
- (void)onUploadBusinessCardImgFailFinish:(id)arg1 scene:(unsigned int)arg2;
- (void)onUploadBusinessCardImgSuccessFinish:(id)arg1 cardImgItemInfo:(id)arg2 scene:(unsigned int)arg3;
- (void)onDownloadBusinessCardImg:(id)arg1 success:(BOOL)arg2 scene:(unsigned int)arg3;
- (void)clickToSaveHelloMsg;
- (void)clickToSaveHelloMsgWithBusinessCardItem:(id)arg1;
- (void)MMGrowTextViewWithExtrasBeginEditing:(id)arg1;
- (void)onMMGrowTextViewWithExtrasTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewWithExtrasHeightDidChanged:(id)arg1;
- (void)updateVerifyMsgEditViewWithExtrasHeightDidChanged;
- (void)onCardImageBrowseViewControllerDidDeleteImageAtIndex:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onMsgImgPickerViewControllerDidFinishSelectWithImageList:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onClickRichTextViewImageIcon:(id)arg1 imageIconSrc:(id)arg2 imageIconFrame:(CGRect)arg3 richTextView:(id)arg4;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)verifyMsgEditView;
- (void)setVerifyMsgEditView:(id)arg1;
- (id)tfVerifyMsg;
- (void)setTfVerifyMsg:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)addVerifyImgBtn;
- (void)setAddVerifyImgBtn:(id)arg1;
- (id)verifyMsgImgView;
- (void)setVerifyMsgImgView:(id)arg1;
- (id)showVerifyImgBtn;
- (void)setShowVerifyImgBtn:(id)arg1;
- (id)verifyCoverBtn;
- (void)setVerifyCoverBtn:(id)arg1;
- (id)savedHelloMsgView;
- (void)setSavedHelloMsgView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)hasEditHelloMsg;
- (void)setHasEditHelloMsg:(BOOL)arg1;
- (id)chatContact;
- (void)setChatContact:(id)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (id)verifyMsgImage;
- (void)setVerifyMsgImage:(id)arg1;
- (void)setBusinessCardImageLogic:(id)arg1;
- (void).cxx_destruct;
@end
