@interface TingEmbedApiPlugin : NSObject <MMFlutterPlugin, TingEmbedApi>
{
    UIViewController * _currentViewController; // +0x8
    TingEmbedCallbackApi * _callbackApi; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openFinderDiscoverDiscoverLineData:(id)arg1 finderUsername:(id)arg2 sessionBuff:(id)arg3 error:(id *)arg4;
- (void)openCategoryItemCategoryItem:(id)arg1 recommendBuffer:(id)arg2 scene:(long long)arg3 error:(id *)arg4;
- (id)getFinderProfileDynamicReportParamsWithError:(id *)arg1;
- (void)openTingPagePageUrl:(id)arg1 pageParams:(id)arg2 error:(id *)arg3;
- (void)openTingPageWithNewEngineRouteName:(id)arg1 params:(id)arg2 error:(id *)arg3;
- (void)onReloadPage:(unsigned long long)arg1;
- (void)onScrollViewDataCallbackOriginY30percent:(double)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)callbackApi;
- (void)setCallbackApi:(id)arg1;
- (void).cxx_destruct;
@end
