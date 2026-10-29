@interface CBTHalfScreenImageAiPRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 imageMd5:(id)arg3 shortcutsList:(id)arg4 pendingContentMessage:(id)arg5 dismissCallback:(id /* block */)arg6;
+ (void)showFromVC:(id)arg1 imagePath:(id)arg2 imageMd5:(id)arg3 shortcutsList:(id)arg4 pendingContentMessage:(id)arg5 reportContext:(id)arg6 processEntry:(long long)arg7 dismissCallback:(id /* block */)arg8;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 imageMd5:(id)arg3 shortcutsList:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 imageMd5:(id)arg3 shortcutsList:(id)arg4 dismissCallback:(id /* block */)arg5 askXiaoweiSrcInfo:(id)arg6;
+ (id)optionsWithImagePath:(id)arg1 imageMd5:(id)arg2 shortcutsList:(id)arg3 srcInfoParams:(id)arg4 xiaoweiSessionId:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 reportContext:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (void)presentHalfScreenFromVC:(id)arg1 options:(id)arg2 reportContext:(id)arg3 dismissCallback:(id /* block */)arg4;
@end
