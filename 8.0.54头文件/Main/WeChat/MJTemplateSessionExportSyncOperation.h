@interface MJTemplateSessionExportSyncOperation : MJTemplateSessionExportOperation
{
    UIImage * _coverImage; // +0x8
}
- (id)initWithMaasCore:(id)arg1 maasSession:(id)arg2 sessionKey:(id)arg3 timeRange:(struct)arg4 outputFilePath:(id)arg5 exportSettings:(id)arg6 progressHandler:(id /* block */)arg7 resultHandler:(id /* block */)arg8;
- (void)dealloc;
- (void)exportCreationWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (void).cxx_destruct;
@end

