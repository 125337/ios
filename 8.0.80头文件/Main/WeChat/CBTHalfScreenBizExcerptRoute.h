@interface CBTHalfScreenBizExcerptRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 excerptText:(id)arg2 multimodalXml:(id)arg3 shareItemId:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithExcerptText:(id)arg1 multimodalXml:(id)arg2 shareItemId:(id)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
