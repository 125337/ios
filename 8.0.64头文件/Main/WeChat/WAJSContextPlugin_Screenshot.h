@interface WAJSContextPlugin_Screenshot : WAJSContextPluginBase <MMScreenShotExt, WAScreenshotExt>
{
    UIImage * _posterImage; // +0x8
    WAGetSunCodeLogic * _getSunCodeLogic; // +0x10
    WAWebViewController * _weakCurrentWebviewController; // +0x18
    WADefaultPosterViewModel * _posterViewModel; // +0x20
    id /* block */ _fetchSunCodeBlock; // +0x28
    id /* block */ _defaultPosterResolver; // +0x30
    id /* block */ _customPosterResolver; // +0x38
    MMTimer * _customPosterTimer; // +0x40
    long long _shareScene; // +0x48
    id /* block */ _processCallBack; // +0x50
    NSString * _posterTaskId; // +0x58
}
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)resetState;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (void)callbackProcessedImage:(id)arg1 errMsg:(id)arg2;
- (id)genCurrentImageKey;
- (void)fetchInformationAndGenerateDefaultPoster;
- (void)tryGenerateDefaultPoster;
- (void)onGeneratePosterImageTimeout:(id)arg1;
- (void)onGeneratePosterImage:(id)arg1 posterTaskId:(id)arg2;
- (id)getSunCodeLogic;
- (void)onFinishGetPathFromDeveloper:(id)arg1 webVC:(id)arg2;
- (id /* block */)fetchSunCodeBlock:(id)arg1;
- (BOOL)isEnableCommonScreenshotShare;
- (id)genPosterTaskId;
- (id)posterImage;
- (void)setPosterImage:(id)arg1;
- (void)setGetSunCodeLogic:(id)arg1;
- (id)weakCurrentWebviewController;
- (void)setWeakCurrentWebviewController:(id)arg1;
- (id)posterViewModel;
- (void)setPosterViewModel:(id)arg1;
- (id /* block */)fetchSunCodeBlock;
- (void)setFetchSunCodeBlock:(id /* block */)arg1;
- (id /* block */)defaultPosterResolver;
- (void)setDefaultPosterResolver:(id /* block */)arg1;
- (id /* block */)customPosterResolver;
- (void)setCustomPosterResolver:(id /* block */)arg1;
- (id)customPosterTimer;
- (void)setCustomPosterTimer:(id)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (id /* block */)processCallBack;
- (void)setProcessCallBack:(id /* block */)arg1;
- (id)posterTaskId;
- (void)setPosterTaskId:(id)arg1;
- (void).cxx_destruct;
@end
