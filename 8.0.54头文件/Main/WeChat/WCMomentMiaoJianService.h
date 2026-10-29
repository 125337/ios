@interface WCMomentMiaoJianService : MMUserService <MMServiceProtocol>
- (void)requestExtInfoWithMD5:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (BOOL)canCheckExtInfoForAssets;
- (void)fetchExtInfoWithAsset:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)fetchTemplateInfoWithExtInfo:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (BOOL)canReplaceExtInfoWithTemplateInfo;
- (BOOL)replaceExtInfoWithTemplateInfoInUploadTask:(id)arg1;
@end

