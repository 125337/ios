@interface WCBusinessJumpMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dictCallBackInfo; // +0x8
    WAOpenSDKJSEventHandleLogic * _openSDKJSEventHandler; // +0x10
    WAOpenSDKJSEventHandleLogic * _qrCodeJSEventHandler; // +0x18
    WAOpenSDKJSEventHandleLogic * _wmpfOpenSDKJSEventHandler; // +0x20
}
+ (id)getBusinessName:(id)arg1;
+ (BOOL)isUniversalLinksBusinessJumpMiniProgram:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)handleJumpFromOpenSDK:(id)arg1 openParam:(id)arg2 parentViewController:(id)arg3 extraInfo:(id)arg4;
- (void)handleTransferApiWithURLString:(id)arg1 openParam:(id)arg2;
- (void)handleJumpFromJSAPI:(id)arg1 parentViewController:(id)arg2 scene:(unsigned int)arg3;
- (void)handleJumpFromOuter:(id)arg1 bundleId:(id)arg2 parentViewController:(id)arg3;
- (void)handleJumpFromNativeApp:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3;
- (void)handleJumpFromInner:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3 extranInfo:(id)arg4;
- (void)handleJumpFromQRCode:(id)arg1 parentViewController:(id)arg2;
- (BOOL)processQRCodeJSEvent:(id)arg1 runtimeAppid:(id)arg2 runtimeLaunchScene:(long long)arg3 qrCodeUuid:(id)arg4 invokeDic:(id)arg5 parentViewController:(id)arg6 disableAutoCloseWebview:(BOOL)arg7 delegate:(id)arg8;
- (void)processTranslateResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 originUrl:(id)arg4 translateInfo:(id)arg5 jumpViewController:(id)arg6 extParams:(id)arg7;
- (void)processTranslateRedirectUrlResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 jumpViewController:(id)arg4;
- (void)processTranslateRefreshTokenResult:(id)arg1 result:(id)arg2 parentViewController:(id)arg3 jumpViewController:(id)arg4;
- (BOOL)isBusinessJump:(id)arg1;
- (void)internalHandleJump:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (id)getNavigationControllerToPushOrPresentVC;
- (void).cxx_destruct;
@end
