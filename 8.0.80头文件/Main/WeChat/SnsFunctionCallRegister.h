@interface SnsFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (void)registerModuleFunctions;
- (void)checkAllImagesDownloaded:(unsigned long long *)arg1 totalCount:(unsigned long long)arg2 hasFailed:(BOOL *)arg3 hasNotified:(BOOL *)arg4 localPaths:(id)arg5 targetVC:(id)arg6 pageType:(id)arg7 append:(BOOL)arg8 callBack:(id)arg9;
- (id)decodeImageFromLocalPath:(id)arg1;
- (void)fillImagesToViewController:(id)arg1 pageType:(id)arg2 localPaths:(id)arg3 append:(BOOL)arg4 callBack:(id)arg5;
- (void)recreateCommitVCWithTargetVC:(id)arg1 images:(id)arg2 pageType:(id)arg3 filledCount:(unsigned long long)arg4 failedCount:(unsigned long long)arg5 callBack:(id)arg6;
@end
