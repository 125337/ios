@interface WCFinderCreateUserViewController : MMUIViewController <MMImagePickerManagerDelegate, UITextViewDelegate, MMGrowTextViewDelegate, WCFinderVeirfyNameTipsViewControllerDelegate, WCFinderBannerViewDelegate, MMRegionPickerViewControllerDelegate, ILinkEventExt, MMImageCropperDelegate, WCFinderCreateUserVerifyPhoneLogicDelegate, WCFinderUserPrepareExt>
{
    BOOL _loading; // +0x70
    unsigned int _createSceneUserType; // +0x74
    id <WCFinderCreateUserViewControllerDelegate> _delegate; // +0x78
    unsigned long long _createScene; // +0x80
    unsigned long long _enterScene; // +0x88
    NSString * _customTitleText; // +0x90
    NSString * _customConfirmButtonText; // +0x98
    NSString * _sourceID; // +0xa0
    NSString * _fromWxUsername; // +0xa8
    unsigned long long _createSceneFeedId; // +0xb0
    UIScrollView * _scrollView; // +0xb8
    UILabel * _titleLabel; // +0xc0
    UILabel * _descLabel; // +0xc8
    MMGrowTextView * _nameInputTextView; // +0xd0
    UIView * _secondLine; // +0xd8
    UIView * _containerView; // +0xe0
    MMGrowTextView * _sexSelectTextView; // +0xe8
    MMGrowTextView * _locationSelectTextView; // +0xf0
    double _topForLocation; // +0xf8
    UIButton * _headerImageView; // +0x100
    UIImage * _avatarImage; // +0x108
    UIButton * _confirmButton; // +0x110
    UILabel * _nameWordCountTips; // +0x118
    MMUIButton * _cleanNameWordBtn; // +0x120
    WCFinderBannerView * _bannerView; // +0x128
    WCFinderCreateUserViewModel * _viewModel; // +0x130
    NSMutableArray * _locationViews; // +0x138
    UIImageView * _locationIconView; // +0x140
    MMUIButton * _aggreCheckBox; // +0x148
    RichTextView * _aggrementView; // +0x150
    UILabel * _showInWXProfileLabel; // +0x158
    UISwitch * _showInWXProfileSwitch; // +0x160
    UIView * _showInWXProfileLine; // +0x168
    UIView * _lineForShowInWXProfile; // +0x170
    unsigned long long _createUserState; // +0x178
    WCFinderContact * _fadeContact; // +0x180
    FinderNicknameVerifyInfo * _verifyInfo; // +0x188
    unsigned long long _errorScene; // +0x190
    WCFinderGetWechatHDHeadFetcher * _wechatHDHeadFetcher; // +0x198
    NSString * _recommentNickName; // +0x1a0
    WCFinderCreateUserVerifyPhoneLogic * _verifyPhoneLogic; // +0x1a8
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (BOOL)hasMasterSvrUsername;
- (void)dealloc;
- (void)initNavigationBar;
- (void)didMoveToParentViewController:(id)arg1;
- (void)setUpUI;
- (void)fetchWeiXinHeadImage;
- (void)fetchLocation;
- (void)setupCacheData;
- (void)showRedBanner:(id)arg1 needVerify:(id)arg2;
- (void)showRedBanner:(id)arg1;
- (void)showGrayBanner:(id)arg1;
- (void)showBannerWithTips:(id)arg1 textColor:(id)arg2 backGroundColor:(id)arg3;
- (void)hideBanner;
- (void)showError:(id)arg1;
- (void)hideLocationCell;
- (void)clickLocationSelectBtn;
- (void)clickSexSelectBtn;
- (void)leftBarButtonClick;
- (BOOL)checkCanCreateUser;
- (void)reportClickCreateStateIsSuccessful:(BOOL)arg1;
- (void)updateLocationSubViewsWithSelectCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
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
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
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
- (id)locationViews;
- (id)aggreCheckBox;
- (id)aggrementView;
- (id)cleanNameWordBtn;
- (id)wechatHDHeadFetcher;
- (void)setCustomTitleText:(id)arg1;
- (void)setCustomConfirmButtonText:(id)arg1;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (int)feedViewControllerScene;
- (void)reportCreatePage:(long long)arg1;
- (void)finderUserPrepareUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)customTitleText;
- (id)customConfirmButtonText;
- (id)sourceID;
- (void)setSourceID:(id)arg1;
- (id)fromWxUsername;
- (void)setFromWxUsername:(id)arg1;
- (unsigned int)createSceneUserType;
- (void)setCreateSceneUserType:(unsigned int)arg1;
- (unsigned long long)createSceneFeedId;
- (void)setCreateSceneFeedId:(unsigned long long)arg1;
- (void)setScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)nameInputTextView;
- (void)setNameInputTextView:(id)arg1;
- (id)secondLine;
- (void)setSecondLine:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)sexSelectTextView;
- (void)setSexSelectTextView:(id)arg1;
- (id)locationSelectTextView;
- (void)setLocationSelectTextView:(id)arg1;
- (double)topForLocation;
- (void)setTopForLocation:(double)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)avatarImage;
- (void)setAvatarImage:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setNameWordCountTips:(id)arg1;
- (void)setCleanNameWordBtn:(id)arg1;
- (void)setBannerView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setLocationViews:(id)arg1;
- (id)locationIconView;
- (void)setLocationIconView:(id)arg1;
- (void)setAggreCheckBox:(id)arg1;
- (void)setAggrementView:(id)arg1;
- (id)showInWXProfileLabel;
- (void)setShowInWXProfileLabel:(id)arg1;
- (id)showInWXProfileSwitch;
- (void)setShowInWXProfileSwitch:(id)arg1;
- (id)showInWXProfileLine;
- (void)setShowInWXProfileLine:(id)arg1;
- (id)lineForShowInWXProfile;
- (void)setLineForShowInWXProfile:(id)arg1;
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
