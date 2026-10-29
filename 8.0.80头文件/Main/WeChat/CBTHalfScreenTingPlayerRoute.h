@interface CBTHalfScreenTingPlayerRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 shareItemId:(id)arg3 query:(id)arg4 reverse:(BOOL)arg5 dismissCallback:(id /* block */)arg6;
+ (void)showFromVC:(id)arg1 multimodalWrapData:(id)arg2 shareItemId:(id)arg3 query:(id)arg4 reverse:(BOOL)arg5 dismissCallback:(id /* block */)arg6 didAppearCallback:(id /* block */)arg7;
+ (id)optionsWithMultimodalWrapData:(id)arg1 shareItemId:(id)arg2 query:(id)arg3 reverse:(BOOL)arg4 srcInfoParams:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
