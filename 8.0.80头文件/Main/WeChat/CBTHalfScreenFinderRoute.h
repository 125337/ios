@interface CBTHalfScreenFinderRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (id)fetchSugWithRouteType:(long long)arg1;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 shareItemId:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 shareItemId:(id)arg3 sug:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 shareItemId:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 shareItemId:(id)arg3 sug:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithMultimodalXml:(id)arg1 shareItemId:(id)arg2 sug:(id)arg3 srcInfoParams:(id)arg4;
+ (id)optionsWithImagePaths:(id)arg1 shareItemId:(id)arg2 sug:(id)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
