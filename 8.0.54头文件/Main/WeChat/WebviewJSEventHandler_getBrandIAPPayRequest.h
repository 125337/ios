@interface WebviewJSEventHandler_getBrandIAPPayRequest : WebviewJSEventHandlerBase <IBrandIAPMgrExt>
{
    JSEvent * jsEvent; // +0x8
    NSString * productExtInfo; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)stopLoading:(BOOL)arg1;
- (void)OnBrandIAPPrepay:(id)arg1 GetProductID:(id)arg2 ExtInfo:(id)arg3;
- (void)OnBrandIAPPrepay:(id)arg1 FailedWithError:(int)arg2;
- (void)OnBrandIAPPayRequestForProduct:(id)arg1;
- (void)OnBrandIAPPaySuccessForProduct:(id)arg1;
- (void)OnBrandIAPPayCancelForProduct:(id)arg1;
- (void)OnBrandIAPPayFailForProduct:(id)arg1;
- (void)OnBrandIAPGetResult:(id)arg1 Error:(int)arg2;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)productExtInfo;
- (void)setProductExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

