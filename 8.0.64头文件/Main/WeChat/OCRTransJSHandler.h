@interface OCRTransJSHandler : WSTemplateBaseJSHandler
{
    NSString * _senderUserName; // +0x8
    NSString * _imageTransDataJsonStr; // +0x10
    long long _ocrResultType; // +0x18
    NSMutableDictionary * _imageTransDataCallbackID2RequestIDMap; // +0x20
}
- (id)init;
- (void)setImageTransDataJsonStr:(id)arg1 withOcrResultType:(long long)arg2;
- (unsigned long long)getLocalJSBusinessType;
- (void)sendJsEventOnTapTopBar;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (void)handleJSAPIGetImageTransDataWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISendWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICopyWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICollectWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISetTitleWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPIShakeWithParams:(id)arg1 callbackID:(id)arg2;
- (void)notifyImageTransDataJsonStrWithCallbackID:(id)arg1;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)imageTransDataJsonStr;
- (void)setImageTransDataJsonStr:(id)arg1;
- (long long)ocrResultType;
- (void)setOcrResultType:(long long)arg1;
- (id)imageTransDataCallbackID2RequestIDMap;
- (void)setImageTransDataCallbackID2RequestIDMap:(id)arg1;
- (void).cxx_destruct;
@end
