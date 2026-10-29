@interface WCFinderCreateGroupViewController : MMUIViewController <MMImagePickerManagerDelegate, UITextViewDelegate, MMGrowTextViewDelegate, WCFinderVeirfyNameTipsViewControllerDelegate, WCFinderBannerViewDelegate, ILinkEventExt, MMImageCropperDelegate, WCFinderCreateUserVerifyPhoneLogicDelegate>
{
    BOOL _loading; // +0x70
    id <WCFinderCreateGroupViewControllerDelegate> _delegate; // +0x78
    unsigned long long _createScene; // +0x80
    NSString * _customTitleText; // +0x88
    NSString * _customConfirmButtonText; // +0x90
    NSString * _sourceID; // +0x98
    CContact * _chatRoomContact; // +0xa0
    UIScrollView * _scrollView; // +0xa8
    UILabel * _titleLabel; // +0xb0
    MMGrowTextView * _nameInputTextView; // +0xb8
    MMGrowTextView * _signatureTextView; // +0xc0
    UIView * _containerView; // +0xc8
    UIButton * _headerImageView; // +0xd0
    UIButton * _changeHeadImageButton; // +0xd8
    UIImage * _avatarImage; // +0xe0
    UIButton * _confirmButton; // +0xe8
    UILabel * _nameWordCountTips; // +0xf0
    MMUIButton * _cleanNameWordBtn; // +0xf8
    WCFinderBannerView * _bannerView; // +0x100
    WCFinderCreateUserViewModel * _viewModel; // +0x108
    MMUIButton * _aggreCheckBox; // +0x110
    RichTextView * _aggrementView; // +0x118
    unsigned long long _createUserState; // +0x120
    WCFinderContact * _fadeContact; // +0x128
    FinderNicknameVerifyInfo * _verifyInfo; // +0x130
    unsigned long long _errorScene; // +0x138
    WCFinderGetWechatHDHeadFetcher * _wechatHDHeadFetcher; // +0x140
    NSString * _recommentNickName; // +0x148
    WCFinderCreateUserVerifyPhoneLogic * _verifyPhoneLogic; // +0x150
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (BOOL)hasMasterSvrUsername;
- (id)getContactCache;
- (void)initNavigationBar;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)setUpHeaderView;
- (id)createNickNameView;
- (id)createSignatureView;
- (void)setUpUI;
- (id)configureInfoView:(id)arg1;
- (void)fetchWeiXinHeadImage;
- (void)setupCacheData;
- (void)showRedBanner:(id)arg1 needVerify:(id)arg2;
- (void)showRedBanner:(id)arg1;
- (void)showGrayBanner:(id)arg1;
- (void)showBannerWithTips:(id)arg1 textColor:(id)arg2 backGroundColor:(id)arg3;
- (void)hideBanner;
- (void)showError:(id)arg1;
- (void)leftBarButtonClick;
- (BOOL)checkCanCreateUser;
- (void)clickConfirmAction:(id)arg1;
- (void)verityPhoneSucces;
- (void)verityPhoneFailed;
- (void)doCreateUser;
- (void)showActionSheet;
- (void)handleImage:(id)arg1;
- (void)onAgreementCheckBoxClick:(id)arg1;
- (void)onClickCleanNameBtn:(id)arg1;
- (void)NSStringSelectViewControllerOnModifySex:(id)arg1;
- (void)onClickBannerLink:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)handleNameTextView;
- (void)updateAllWordCountTipsLabel;
- (void)TextViewDidEnter:(id)arg1;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)showImagePicker:(long long)arg1;
- (void)onSelectAvatarFromWechat;
- (void)loadImageToEditor:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)createSeparateLine;
- (id)createIntroLabel;
- (id)createGrowTextView;
- (void)updateNameWordCountTipsLabel:(int)arg1;
- (void)loadingRecommentNickName;
- (void)setErrorScene:(unsigned long long)arg1;
- (BOOL)clearErrorScene:(unsigned long long)arg1;
- (id)scrollView;
- (id)confirmButton;
- (id)nameWordCountTips;
- (id)bannerView;
- (id)aggreCheckBox;
- (id)aggrementView;
- (id)cleanNameWordBtn;
- (id)wechatHDHeadFetcher;
- (void)setCustomTitleText:(id)arg1;
- (void)setCustomConfirmButtonText:(id)arg1;
- (void)registerYReportSdk;
- (int)feedViewControllerScene;
- (void)reportCreatePage:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (id)customTitleText;
- (id)customConfirmButtonText;
- (id)sourceID;
- (void)setSourceID:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)nameInputTextView;
- (void)setNameInputTextView:(id)arg1;
- (id)signatureTextView;
- (void)setSignatureTextView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)changeHeadImageButton;
- (void)setChangeHeadImageButton:(id)arg1;
- (id)avatarImage;
- (void)setAvatarImage:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setNameWordCountTips:(id)arg1;
- (void)setCleanNameWordBtn:(id)arg1;
- (void)setBannerView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setAggreCheckBox:(id)arg1;
- (void)setAggrementView:(id)arg1;
- (unsigned long long)createUserState;
- (void)setCreateUserState:(unsigned long long)arg1;
- (id)fadeContact;
- (void)setFadeContact:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (unsigned long long)errorScene;
- (void)setWechatHDHeadFetcher:(id)arg1;
- (id)recommentNickName;
- (void)setRecommentNickName:(id)arg1;
- (id)verifyPhoneLogic;
- (void)setVerifyPhoneLogic:(id)arg1;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
