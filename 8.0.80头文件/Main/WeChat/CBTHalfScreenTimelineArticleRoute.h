@interface CBTHalfScreenTimelineArticleRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (id)fetchSugWithRouteType:(long long)arg1;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 shareItemId:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 shareItemId:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (void)applyUseFlutterExptToOptions:(id)arg1;
+ (id)optionsWithMultimodalXml:(id)arg1 shareItemId:(id)arg2 srcInfoParams:(id)arg3;
+ (id)optionsWithImagePaths:(id)arg1 shareItemId:(id)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
