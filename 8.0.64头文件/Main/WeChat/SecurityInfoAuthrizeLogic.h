@interface SecurityInfoAuthrizeLogic : MMObject <AuthorizeUserIdSMSConfirmDelegate, WCPayJSApiVerifyDelegate, UIViewControllerTransitioningDelegate, WAPopInteractiveTransitionDelegate, PhoneAuthManagePhoneLogicDelegate, PhoneAuthManagePhoneviewControllerDelegate, PhoneAuthManagePhoneViewControllerDataSource, PBMessageObserverDelegate>
{
    id /* block */ _completion; // +0x8
    BOOL _forbidShowPrivacyInfo; // +0x10
    unsigned int _authType; // +0x14
    NSMutableArray * _categoryId; // +0x18
    unsigned long long _step; // +0x20
    NSString * _customAuthTitle; // +0x28
    NSString * _customRealnameWording; // +0x30
    NSString * _customPrivacyUrl; // +0x38
    NSString * _appid; // +0x40
    MMUIViewController * _vc; // +0x48
    NSMutableDictionary * _payParams; // +0x50
    NSString * _ticket; // +0x58
    NSString * _payToken; // +0x60
    WAAuthorizeUserIdPageSheet * _pageSheet; // +0x68
    UINavigationController * _nextNav; // +0x70
    WAMenuPopInteractiveTransition * _interactiveTransition; // +0x78
    UIScreenEdgePanGestureRecognizer * _popBackGesture; // +0x80
    UserIdAuthorizePageInfo * _pageInfo; // +0x88
    WXAPhoneInfo * _selectedPhoneInfo; // +0x90
}
- (id)initWithAppId:(id)arg1 vc:(id)arg2;
- (void)getUserIdTokenWithCompletion:(id /* block */)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)enablePopGesture:(BOOL)arg1;
- (void)processErrCode:(int)arg1 errMsg:(id)arg2;
- (id)parseUserIdPageInfoFromResponse:(id)arg1;
- (id)parseSMSPageInfoFromResponse:(id)arg1;
- (void)showAlarmBoxWithTitle:(id)arg1 desc:(id)arg2;
- (void)showToast:(id)arg1;
- (void)onConfirmAuthorizeInfo;
- (void)onConfirmWithPayToken:(id)arg1;
- (void)onConfirmWithAuthToken:(id)arg1;
- (void)onCancelVerifySMS;
- (void)onConfirmPageBePoped;
- (void)onCancel;
- (void)sendRequest:(id)arg1;
- (void)onVerifyResult:(id)arg1;
- (id)getParam;
- (id)getCurrentURL;
- (void)constructPayParams:(id)arg1;
- (void)_pushNewPageViewController:(id)arg1;
- (void)_presentNewPageViewController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)showAuthorizeInfo:(id)arg1 withHeight:(double)arg2;
- (void)didAddNewPhoneInfo:(id)arg1;
- (void)didDeletePhone:(id)arg1;
- (void)startDeletePhoneRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)phoneInfos;
- (id)fromAppid;
- (id)fromUrlString;
- (void)didDeletePhoneInfo:(id)arg1;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (unsigned int)authType;
- (void)setAuthType:(unsigned int)arg1;
- (unsigned long long)step;
- (void)setStep:(unsigned long long)arg1;
- (id)customAuthTitle;
- (void)setCustomAuthTitle:(id)arg1;
- (id)customRealnameWording;
- (void)setCustomRealnameWording:(id)arg1;
- (id)customPrivacyUrl;
- (void)setCustomPrivacyUrl:(id)arg1;
- (BOOL)forbidShowPrivacyInfo;
- (void)setForbidShowPrivacyInfo:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)payParams;
- (void)setPayParams:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)payToken;
- (void)setPayToken:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)nextNav;
- (void)setNextNav:(id)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (id)popBackGesture;
- (void)setPopBackGesture:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (id)selectedPhoneInfo;
- (void)setSelectedPhoneInfo:(id)arg1;
- (void).cxx_destruct;
@end
