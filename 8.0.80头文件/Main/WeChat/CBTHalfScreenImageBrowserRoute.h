@interface CBTHalfScreenImageBrowserRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 shareItemId:(id)arg3 showTempChatTips:(BOOL)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithImagePaths:(id)arg1 shareItemId:(id)arg2 showTempChatTips:(BOOL)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
