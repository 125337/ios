@interface WCAdFormWebViewJSFunctionHandler : NSObject <LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate, WCAdConfirmHalfScreenAdapterDelegate, WCAdWheelPickerLogicDelegate>
{
    id <WCAdFormWebViewJSFunctionHandlerDelegate> _delegate; // +0x8
    WKWebView<YYWebViewInterface> * _webView; // +0x10
    WCAdDynamicCanvasPageInfo * _pageInfo; // +0x18
    NSString * _componentId; // +0x20
    NSString * _qrExtInfo; // +0x28
    NSDictionary * _params; // +0x30
    NSString * _callbackID; // +0x38
    LocationRetriever * _locationRetriever; // +0x40
    WCAdDetermineHalfScreenView * _determineHalfScreenView; // +0x48
    WCAdConfirmHalfScreenAdapter * _phoneNumAdapter; // +0x50
    WCAdWheelPickerLogic * _wheelPickerLogic; // +0x58
}
- (id)initWithWebView:(id)arg1 pageInfo:(id)arg2 componentId:(id)arg3 qrExtInfo:(id)arg4;
- (BOOL)dispatchFunction:(id)arg1 callbackID:(id)arg2;
- (void)sendCallback:(id)arg1 ret:(int)arg2 error:(id)arg3 data:(id)arg4;
- (BOOL)dispatchQRScan:(id)arg1 callbackID:(id)arg2;
- (BOOL)dispatchUpdateContentHeight:(id)arg1 callbackID:(id)arg2;
- (void)onUpdateContentHeight:(id)arg1;
- (BOOL)getLocation:(id)arg1 callbackID:(id)arg2;
- (void)tryToRetrieveLocationForGeoType:(id)arg1;
- (void)retrieveLocationForGeoType:(id)arg1;
- (void)showLocationPermissionViewWithUserInfo:(id)arg1;
- (BOOL)jumpToAppStore:(id)arg1 callbackID:(id)arg2;
- (BOOL)getDeviceInfo:(id)arg1 callbackID:(id)arg2;
- (BOOL)requestBindPhoneNumberWithParams:(id)arg1 callbackID:(id)arg2;
- (BOOL)getCanAutoFillDataWithParams:(id)arg1 callbackID:(id)arg2;
- (BOOL)setCanAutoFillDataWithParams:(id)arg1 callbackID:(id)arg2;
- (BOOL)checkDomain:(id)arg1;
- (id)validAuthDomainArray;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)reportLocationAuthResultWithName:(id)arg1 status:(id)arg2;
- (void)confirmAdapterClosedWithResult:(long long)arg1 extInfo:(id)arg2;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)onDetermineViewDidClose:(BOOL)arg1;
- (void)showGuideAlertForLocationAuthorization;
- (void)onLocationAuthorizationCancelled;
- (void)goToSettingLocationAuthorization;
- (BOOL)showPickerWithParams:(id)arg1 callbackID:(id)arg2;
- (void)onConfirmButtonClickWithResultInfo:(id)arg1;
- (void)onCancelButtonClick;
- (BOOL)openFinderProfile:(id)arg1 callbackID:(id)arg2;
- (BOOL)finderFollow:(id)arg1 callbackID:(id)arg2;
- (BOOL)queryFinderFollowState:(id)arg1 callbackID:(id)arg2;
- (BOOL)controlFloatComponent:(id)arg1 callbackID:(id)arg2;
- (void)reportControlFloatComponentWithAction:(id)arg1 result:(id)arg2;
- (BOOL)requestAppointment:(id)arg1 callbackID:(id)arg2;
- (BOOL)performAction:(id)arg1 callbackID:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)callbackID;
- (void)setCallbackID:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id)determineHalfScreenView;
- (void)setDetermineHalfScreenView:(id)arg1;
- (id)phoneNumAdapter;
- (void)setPhoneNumAdapter:(id)arg1;
- (id)wheelPickerLogic;
- (void)setWheelPickerLogic:(id)arg1;
- (void).cxx_destruct;
@end

