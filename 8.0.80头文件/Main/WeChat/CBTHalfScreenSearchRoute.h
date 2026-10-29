@interface CBTHalfScreenSearchRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (id)optionsWithQuery:(id)arg1 searchId:(id)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showFromVC:(id)arg1 query:(id)arg2 searchId:(id)arg3 extraParam:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (void)showFromVC:(id)arg1 query:(id)arg2 searchId:(id)arg3 extraParam:(id)arg4 didAppearCallback:(id /* block */)arg5 dismissCallback:(id /* block */)arg6;
@end
