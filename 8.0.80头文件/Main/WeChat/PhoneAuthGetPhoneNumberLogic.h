@interface PhoneAuthGetPhoneNumberLogic : MMObject <UIViewControllerTransitioningDelegate, PBMessageObserverDelegate, MMTipsViewControllerDelegate, WAPhoneVerifyWindowDelegate, WCAccountBindPhoneControlLogicDelegate, MMUIViewControllerDelegate, PhoneAuthManagePhoneViewControllerDataSource, PhoneAuthManagePhoneviewControllerDelegate, PhoneAuthManagePhoneLogicDelegate, WAPhoneNumberAuthorizePageSheetDelegate, WAPhoneNumberAuthorizeViewControllerDelegate>
{
    BOOL _isAcceptProtocol; // +0x8
    BOOL _bindPhoneReturn; // +0x9
    unsigned int _versionType; // +0xc
    NSData * _requestData; // +0x10
    NSString * _fromUrlString; // +0x18
    unsigned long long _uiStyle; // +0x20
    WCAccountBindPhoneControlLogic * _bindLogic; // +0x28
    NSString * _appid; // +0x30
    MMUIViewController * _vc; // +0x38
    id /* block */ _completion; // +0x40
    WAPhoneNumberAuthorizeSheetInfo * _authInfo; // +0x48
    WAReportPhoneAuthActionItem * _reportAction; // +0x50
    id <IWAPhoneNumberAuthorizePageSheet> _pageSheet; // +0x58
    WAPhoneVerifyWindow * _verifyWindow; // +0x60
    PhoneAuthGetPhoneNumberLogicPhoneInfo * _chosenPhoneInfo; // +0x68
    NSString * _recordPhone; // +0x70
    unsigned long long _originInterativePopFlag; // +0x78
    NSMutableArray * _customPhoneInfos; // +0x80
}
- (id)initWithAppId:(id)arg1 vc:(id)arg2;
- (void)dealloc;
- (void)getPhoneNumberWithCompletion:(id /* block */)arg1;
- (void)startGetPhoneRequest;
- (void)startSendPhoneVerifySmsRequest;
- (void)showPhoneVerifyWindow;
- (void)closeVerifyWindow;
- (void)startCheckPhoneVerifySmsRequest:(id)arg1;
- (void)startDeletePhoneRequest:(id)arg1;
- (void)startUpdatePhoneRequestWithPhoneNumber:(id)arg1 type:(unsigned int)arg2;
- (void)beginBindPhone;
- (void)recoverInteractivePop;
- (void)removeInteractivePop;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetAllUserPhone:(id)arg1;
- (void)handleSendVerifyCodeResponse:(id)arg1;
- (void)handleCheckVerifyCodeResponse:(id)arg1;
- (void)handleUpdateUserPhoneResponse:(id)arg1;
- (void)onErrorWithErrCode:(int)arg1 msg:(id)arg2;
- (void)onSuccessWithResultDic:(id)arg1;
- (void)onPhoneStatusResponse:(id)arg1;
- (id)getPhoneInfoFromDic:(id)arg1;
- (void)showConfirmWindowOnContainer;
- (void)cancel;
- (void)_pushNewPageViewController:(id)arg1;
- (id)getDisplayPhoneInfoArray;
- (void)regenerateDisplayPhoneInfos;
- (void)saveRecordPhoneToLocal:(id)arg1;
- (id)getRecordInfoFromLocal;
- (id)getLastAuthPhone;
- (void)saveLastAuthPhone:(id)arg1;
- (void)authorizeCancel:(id)arg1;
- (void)authorizeReject:(id)arg1;
- (void)authorizeAccept:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)phoneNumberAuthorizeManagerButtonClick:(id)arg1;
- (void)phoneNumberAuthorizeAddNewButtonClick:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onComplete:(id)arg1;
- (void)onRetry;
- (void)onClose;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (id)getViewController;
- (id)phoneInfos;
- (id)fromUrlString;
- (id)fromAppid;
- (void)didDeletePhoneInfo:(id)arg1;
- (void)didAddNewPhoneInfo:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (void)setFromUrlString:(id)arg1;
- (unsigned long long)uiStyle;
- (void)setUiStyle:(unsigned long long)arg1;
- (BOOL)isAcceptProtocol;
- (void)setIsAcceptProtocol:(BOOL)arg1;
- (id)bindLogic;
- (void)setBindLogic:(id)arg1;
- (BOOL)bindPhoneReturn;
- (void)setBindPhoneReturn:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)reportAction;
- (void)setReportAction:(id)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)verifyWindow;
- (void)setVerifyWindow:(id)arg1;
- (id)chosenPhoneInfo;
- (void)setChosenPhoneInfo:(id)arg1;
- (id)recordPhone;
- (void)setRecordPhone:(id)arg1;
- (unsigned long long)originInterativePopFlag;
- (void)setOriginInterativePopFlag:(unsigned long long)arg1;
- (id)customPhoneInfos;
- (void)setCustomPhoneInfos:(id)arg1;
- (void).cxx_destruct;
@end
