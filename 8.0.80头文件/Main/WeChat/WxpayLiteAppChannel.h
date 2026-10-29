@interface WxpayLiteAppChannel : NSObject
+ (BOOL)isKitAddress:(id)arg1;
+ (BOOL)isValidData:(id)arg1;
+ (BOOL)sendFromWebView:(id)arg1 target:(id)arg2 data:(id)arg3 completion:(id /* block */)arg4;
+ (void)bindWebViewOpener:(id)arg1 callId:(unsigned long long)arg2;
+ (void)bindMiniProgramOpener:(id)arg1 callId:(unsigned long long)arg2;
+ (BOOL)routeMiniProgramMessage:(id)arg1 fromAppId:(id)arg2 event:(id)arg3;
+ (void)bindCallId:(unsigned long long)arg1 scene:(id)arg2 appUuid:(unsigned long long)arg3;
+ (void)rememberMiniProgram:(id)arg1 forCallId:(unsigned long long)arg2;
+ (id)sendToWebViewFromCallId:(unsigned long long)arg1 target:(id)arg2 source:(id)arg3 data:(id)arg4;
+ (id)webViewExtraInfoForCallId:(unsigned long long)arg1 scene:(id)arg2 pageId:(unsigned long long)arg3;
+ (void)releaseCallId:(unsigned long long)arg1;
@end
