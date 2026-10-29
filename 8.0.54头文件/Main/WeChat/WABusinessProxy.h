@interface WABusinessProxy : NSObject <PBMessageObserverDelegate, IWABusinessService>
{
    NSMutableArray * _uploadingInfos; // +0x8
}
+ (id)sharedInstance;
+ (void)showUserGuide;
+ (void)onWeAppNavigateToMiniProgramFromAppId:(id)arg1 toAppId:(id)arg2 pagePath:(id)arg3 fromScene:(unsigned long long)arg4 fromSceneNote:(id)arg5 adInfo:(id)arg6;
+ (void)onWeAppNavigateToMiniProgramSuccessFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppNavigateToMiniProgramFailFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppNavigateToMiniProgramCancelledFromAppId:(id)arg1 toAppId:(id)arg2;
+ (void)onWeAppDidPresentWithPresentingViewController:(id)arg1;
+ (id)genWebViewController:(id)arg1;
+ (id)saveExposeSnapShot:(id)arg1;
+ (void)clearExposeSnapShot:(id)arg1;
+ (void)didUserSelectCopyMPShortLinkSuccess:(id)arg1 inWebViewController:(id)arg2 processCompletion:(id /* block */)arg3;
+ (id)getMMHeadImageViewWithUsername:(id)arg1 imageSize:(CGSize)arg2;
+ (id)genProfileWithParameter:(id)arg1;
+ (id)genAppAuthSettingWithWeAppContact:(id)arg1;
+ (BOOL)isLogin;
+ (id)getLoginUsrInfo;
+ (void)onMPShortLinkGlobalHightLightSwitchDidChanged;
+ (void)updateAppServiceConfigRes;
+ (void)showUserGuideDialog:(id)arg1;
- (void)dealloc;
- (void)uploadMPShortLink:(id)arg1 snapShotForWebVC:(id)arg2 completion:(id /* block */)arg3;
- (void)OnCdnUpload:(id)arg1;
- (id)uploadingInfos;
- (void)setUploadingInfos:(id)arg1;
- (void).cxx_destruct;
@end

