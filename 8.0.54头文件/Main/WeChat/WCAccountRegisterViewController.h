@interface WCAccountRegisterViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate, WCBaseInfoItemDelegate>
{
    id <WCAccountRegisterViewControllerDelegate> m_delegate; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UIButton * _headImageButton; // +0x88
    WCRedesignTextItem * _nicknameTextItem; // +0x90
    WCFullPhoneNumInputHelper * _fullPhoneNumInputHelper; // +0x98
    MMUIButton * _passwordVisibleButton; // +0xa0
    WCRedesignTextItem * _passwordTextItem; // +0xa8
    WCAgreementCheckBox * _agreementCheckBox; // +0xb0
    MMUILabel * _privacyLabel; // +0xb8
    UIButton * _nextButton; // +0xc0
    UIImage * _headImage; // +0xc8
    CountryCodeWrap * _countryCodeWrap; // +0xd0
    NSMutableArray * _availableItems; // +0xd8
    TakeOrSelectHeadImageLogic * _headImageLogic; // +0xe0
}
+ (BOOL)verifyPassword:(id)arg1 withError:(id *)arg2;
- (BOOL)showHead;
- (BOOL)showNickName;
- (BOOL)showPwd;
- (BOOL)showPhoneNum;
- (BOOL)shouldShowAgreementView;
- (BOOL)shouldShowPrivacy;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (BOOL)canBecomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)initNavigationBar;
- (void)initView;
- (void)initData;
- (void)fillData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshView;
- (BOOL)canChangeMobile;
- (id)getTitle;
- (id)getNextButtonTitle;
- (id)regionButtonItem;
- (id)phoneNumberTextItem;
- (id)headImageLogic;
- (void)showHeadImageOption;
- (void)onTapPasswordVisibleButton;
- (void)onNext;
- (void)onGetHeadImage:(id)arg1;
- (void)checkNext;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageButton;
- (void)setHeadImageButton:(id)arg1;
- (id)nicknameTextItem;
- (void)setNicknameTextItem:(id)arg1;
- (id)fullPhoneNumInputHelper;
- (void)setFullPhoneNumInputHelper:(id)arg1;
- (id)passwordVisibleButton;
- (void)setPasswordVisibleButton:(id)arg1;
- (id)passwordTextItem;
- (void)setPasswordTextItem:(id)arg1;
- (id)agreementCheckBox;
- (void)setAgreementCheckBox:(id)arg1;
- (id)privacyLabel;
- (void)setPrivacyLabel:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)countryCodeWrap;
- (void)setCountryCodeWrap:(id)arg1;
- (id)availableItems;
- (void)setAvailableItems:(id)arg1;
- (void)setHeadImageLogic:(id)arg1;
- (void).cxx_destruct;
@end

