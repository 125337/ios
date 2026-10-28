@interface WCCanvasPreloadWebviewComponent : WCCanvasComponent <YYWebViewDelegate, WCCanvasJSLogicDelegate, MMImageLoaderObserver, LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate, WCAdConfirmHalfScreenAdapterDelegate, WCAdWheelPickerLogicDelegate>
{
    WKWebView<YYWebViewInterface> * _webView; // +0x8
    WCCanvasJSLogic * _jsLogic; // +0x10
    NSDictionary * _params; // +0x18
    NSString * _callbackID; // +0x20
    LocationRetriever * _locationRetriever; // +0x28
    WCAdDetermineHalfScreenView * _determineHalfScreenView; // +0x30
    WCAdConfirmHalfScreenAdapter * _phoneNumAdapter; // +0x38
    WCAdWheelPickerLogic * _wheelPickerLogic; // +0x40
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)getPreInjectScriptStr;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (BOOL)onOperateOpenUrlInWebview:(id)arg1 callbackID:(id)arg2;
- (BOOL)onAdH5FuncDispatched:(id)arg1 callbackID:(id)arg2;
- (BOOL)dispatchQRScan:(id)arg1 callbackID:(id)arg2;
- (void)qrScanWithImage:(id)arg1 url:(id)arg2 directJump:(BOOL)arg3;
- (id)getLocalImageData:(id)arg1 syncQrImageDownload:(BOOL)arg2;
- (id)getCurrentMMUIViewController;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onImageDownloadFinish:(id)arg1 url:(id)arg2;
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
- (BOOL)jumpWeApp:(id)arg1 callbackID:(id)arg2;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)jsLogic;
- (void)setJsLogic:(id)arg1;
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
