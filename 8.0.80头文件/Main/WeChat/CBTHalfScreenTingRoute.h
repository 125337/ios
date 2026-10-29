@interface CBTHalfScreenTingRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isHalfScreenEnabled;
+ (BOOL)isEntrySceneAllowed;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 shareType:(int)arg3 shareItemId:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 shareType:(int)arg3 shareItemId:(id)arg4 dismissCallback:(id /* block */)arg5 didAppearCallback:(id /* block */)arg6;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 shareType:(int)arg3 shareItemId:(id)arg4 query:(id)arg5 reverse:(BOOL)arg6 dismissCallback:(id /* block */)arg7 didAppearCallback:(id /* block */)arg8;
+ (id)optionsWithMultimodalWrapData:(id)arg1 shareType:(int)arg2 shareItemId:(id)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
