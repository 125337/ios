@interface FlutterBizMeTabPlugin : NSObject <MMFlutterPlugin, BizMeTabApi>
{
    MMFlutterViewController * _viewController; // +0x8
    NSMutableSet * _setFastLoadTemplateType; // +0x10
    BizMeTabNativeToFlutterApi * _bizMeTabNativeToFlutter; // +0x18
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (void)preloadGeneralImplUrlInfoArr:(id)arg1;
- (void)openEditorFromMeTabJumpInfo:(id)arg1 error:(id *)arg2;
- (void)tryCommonPrefetchWithItemArray:(id)arg1;
- (void)openBusinessProfilePageUserName:(id)arg1 profileScene:(long long)arg2 error:(id *)arg3;
- (void)addToGeneralPreloadUrl:(id)arg1 openScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 completion:(id /* block */)arg5;
- (void)openCommonUrlUrl:(id)arg1 error:(id *)arg2;
- (void)openLiteAppScene:(long long)arg1 error:(id *)arg2;
- (void)openFansMsgWithError:(id *)arg1;
- (void)openRedDotWithError:(id *)arg1;
- (void)disposeRedDot;
- (void)triggerPreDownloadForPathAppId:(id)arg1 path:(id)arg2 scene:(long long)arg3 error:(id *)arg4;
- (void)preloadEnvForPluginAppWithError:(id *)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (id)bizMeTabNativeToFlutter;
- (void)setBizMeTabNativeToFlutter:(id)arg1;
- (void).cxx_destruct;
@end
