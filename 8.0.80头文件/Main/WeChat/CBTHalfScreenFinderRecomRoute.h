@interface CBTHalfScreenFinderRecomRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 exportId:(id)arg3 appUiState:(int)arg4 recomText:(id)arg5 dismissCallback:(id /* block */)arg6;
+ (void)showFromVC:(id)arg1 multimodalXml:(id)arg2 exportId:(id)arg3 appUiState:(int)arg4 recomText:(id)arg5 sug:(id)arg6 dismissCallback:(id /* block */)arg7;
+ (id)optionsWithMultimodalXml:(id)arg1 exportId:(id)arg2 appUiState:(int)arg3 recomText:(id)arg4 srcInfoParams:(id)arg5;
+ (id)optionsWithMultimodalXml:(id)arg1 shareItemId:(id)arg2 isFromComment:(BOOL)arg3 recomText:(id)arg4 srcInfoParams:(id)arg5;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
