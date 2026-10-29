@interface FlutterBizPublishPlugin : NSObject <WCPayLogicMgrExt, MMFlutterPlugin, BizPublishApi, WCAccountBindPhoneControlLogicDelegate>
{
    BOOL _previewPublishRegistered; // +0x8
    MMFlutterViewController<BrandTLViewControllerProtocol> * _viewController; // +0x10
    WCAccountBindPhoneControlLogic * _bindLogic; // +0x18
    id /* block */ _bindPhoneCompletion; // +0x20
    id /* block */ _liteAppCompletion; // +0x28
    MMLiteAppViewController * _liteAppVC; // +0x30
    id /* block */ _checkWCPayIsRegCompletion; // +0x38
    BizPublishCallbackApi * _publishCallbackApi; // +0x40
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)registerPreviewPublishWithError:(id *)arg1;
- (void)unregisterPreviewPublishWithError:(id *)arg1;
- (void)clearPreviewPublishHandler;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onDetachedToViewController;
- (void)dealloc;
- (id)getBizPublishCacheDirectoryWithError:(id *)arg1;
- (id)requestPublishPicLocationPermissionWithError:(id *)arg1;
- (void)notifyBizPublishResultResult:(id)arg1 completion:(id /* block */)arg2;
- (void)openUrlArticleInfo:(id)arg1 shouldPop:(BOOL)arg2 error:(id *)arg3;
- (void)compressPublishImageDstPath:(id)arg1 origPath:(id)arg2 targetLong:(long long)arg3 targetShort:(long long)arg4 comLev:(long long)arg5 completion:(id /* block */)arg6;
- (id)_doCompressPublishImageDstPath:(id)arg1 origPath:(id)arg2 targetLong:(long long)arg3 targetShort:(long long)arg4 comLev:(long long)arg5;
- (void)setNativeEditorDebugModeMode:(long long)arg1 error:(id *)arg2;
- (id)isUserBindOpMobileWithError:(id *)arg1;
- (void)bindPhoneWithCompletion:(id /* block */)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)_finishBindPhoneFlow;
- (void)launchMapMiniProgramWithCallbackLaunchInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)openRedPacketCoverLiteAppAppId:(id)arg1 page:(id)arg2 query:(id)arg3 completion:(id /* block */)arg4;
- (void)checkWCPayIsRegWithCompletion:(id /* block */)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)bindLogic;
- (void)setBindLogic:(id)arg1;
- (id /* block */)bindPhoneCompletion;
- (void)setBindPhoneCompletion:(id /* block */)arg1;
- (id /* block */)liteAppCompletion;
- (void)setLiteAppCompletion:(id /* block */)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (id /* block */)checkWCPayIsRegCompletion;
- (void)setCheckWCPayIsRegCompletion:(id /* block */)arg1;
- (id)publishCallbackApi;
- (void)setPublishCallbackApi:(id)arg1;
- (BOOL)previewPublishRegistered;
- (void)setPreviewPublishRegistered:(BOOL)arg1;
- (void).cxx_destruct;
@end
