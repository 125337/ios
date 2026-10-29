@interface WCMpEditorWeappDraftServiceProxy : NSObject <IMpWeappDraftService>
+ (void)readWeappDraftWithDraftType:(long long)arg1 scene:(id)arg2 completion:(id /* block */)arg3;
+ (void)exportLocalImagesToWeappTemp:(id)arg1 completion:(id /* block */)arg2;
+ (void)clearWeappDraftWithDraftType:(long long)arg1 scene:(id)arg2;
+ (id)_exportOneToWeappTmp:(id)arg1;
+ (void)resolveWeappFilePaths:(id)arg1 completion:(id /* block */)arg2;
+ (id)_resolveOne:(id)arg1;
@end
