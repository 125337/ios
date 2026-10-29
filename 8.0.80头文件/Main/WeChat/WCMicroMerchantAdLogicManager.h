@interface WCMicroMerchantAdLogicManager : NSObject
{
    int _carrierType; // +0x8
    WCMicroMerchantAdReportHelper * _reportHelper; // +0x10
    NSMutableDictionary * _foldAdCache; // +0x18
    NSString * _userAgent; // +0x20
    NSString * _commonDeviceInfo; // +0x28
}
+ (id)getInstance;
- (id)init;
- (void)cacheObjectForFoldAd:(id)arg1 key:(id)arg2 obj:(id)arg3;
- (id)cachedObjectForDataItem:(id)arg1 key:(id)arg2;
- (void)clearFoldAdCache;
- (void)onFoldAdClicked:(id)arg1 clickActionInfo:(id)arg2 clickPos:(long long)arg3 extInfo:(id)arg4;
- (void)jumpToAppStore:(id)arg1 clickActionInfo:(id)arg2 clickPos:(long long)arg3 extInfo:(id)arg4;
- (void)jumpToCustomerService:(id)arg1 clickActionInfo:(id)arg2 clickPos:(long long)arg3 extInfo:(id)arg4;
- (void)handleFoldKefuContactWithResult:(BOOL)arg1 contact:(id)arg2 dataItem:(id)arg3 clickActionInfo:(id)arg4 uxinfo:(id)arg5;
- (void)jumpToQrCodeScan:(id)arg1 clickActionInfo:(id)arg2 extInfo:(id)arg3;
- (void)jumpToFinderLive:(id)arg1 clickActionInfo:(id)arg2 clickPos:(long long)arg3 extInfo:(id)arg4;
- (void)jumpToFinderFeed:(id)arg1 clickActionInfo:(id)arg2 clickPos:(long long)arg3 extInfo:(id)arg4;
- (void)jumpToWeapp:(id)arg1 clickActionInfo:(id)arg2 extInfo:(id)arg3;
- (void)jumpToDynamicCanvasPage:(id)arg1 clickActionInfo:(id)arg2 extInfo:(id)arg3;
- (void)jumpToMiniShop:(id)arg1 clickActionInfo:(id)arg2 extInfo:(id)arg3;
- (void)jumpToActionLink:(id)arg1 clickActionInfo:(id)arg2 extInfo:(id)arg3;
- (void)reportOriginExposure:(id)arg1;
- (void)reportEffectiveExposure:(id)arg1;
- (void)reportFeedback:(id)arg1;
- (void)reportFeedbackWithReasonList:(id)arg1 adInfo:(id)arg2;
- (void)onEndDisplay:(id)arg1;
- (id)userAgent;
- (id)commonDeviceInfo;
- (int)carrierType;
- (id)getMicroMerchantWebViewExtraInfo:(id)arg1;
- (id)reportHelper;
- (void)setReportHelper:(id)arg1;
- (id)foldAdCache;
- (void)setFoldAdCache:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setCommonDeviceInfo:(id)arg1;
- (void)setCarrierType:(int)arg1;
- (void).cxx_destruct;
@end
