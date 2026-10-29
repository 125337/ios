@interface WCWebSearchRouterHelper : NSObject
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 initedParams:(id)arg2 curNavController:(id)arg3;
+ (void)PushVideoFlowVCWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 initedParam:(id)arg3 srcSNSItem:(id)arg4 srsMsgWrap:(id)arg5 curNavController:(id)arg6;
+ (void)StartTextSearch:(id)arg1 curViewController:(id)arg2;
+ (void)__startTextSearch:(id)arg1 curViewController:(id)arg2;
+ (void)__startTextSearchClassic:(id)arg1 trimmedQuery:(id)arg2 curViewController:(id)arg3;
+ (void)__startTextSearchWithUseCase:(id)arg1 trimmedQuery:(id)arg2 curViewController:(id)arg3;
+ (void)StartImageSearchWithSearchEntity:(id)arg1 curViewController:(id)arg2;
+ (void)__startImageSearchWithSearchEntity:(id)arg1 curViewController:(id)arg2;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2 completion:(id /* block */)arg3;
+ (id)StartWeAppSearchWithScene:(unsigned long long)arg1 curViewController:(id)arg2 withMusicEntries:(BOOL)arg3 extendParam:(id)arg4 completion:(id /* block */)arg5;
+ (id)GenNewWeAppSearchPageWithScene:(unsigned long long)arg1 withMusicEntries:(BOOL)arg2 extendParam:(id)arg3;
+ (BOOL)isXDevice;
+ (id)GenNewWeAppSearchPage:(id)arg1;
+ (void)LaunchSearchDetailPage:(id)arg1 curViewController:(id)arg2;
+ (BOOL)MainSwitchOn;
+ (BOOL)ImageSearchEntryOn;
+ (BOOL)TextSearchEntryOn;
+ (BOOL)TopicSearchEntryOn;
+ (BOOL)FTSWebSearchEntryOn;
@end
