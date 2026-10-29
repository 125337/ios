@interface CBTHalfScreenShareRoute : NSObject
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 multimodalType:(int)arg3 shareType:(int)arg4 shareItemId:(id)arg5 dismissCallback:(id /* block */)arg6;
+ (id)optionsWithMultimodalXml:(id)arg1 multimodalType:(int)arg2 shareType:(int)arg3 shareItemId:(id)arg4 srcInfoParams:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
