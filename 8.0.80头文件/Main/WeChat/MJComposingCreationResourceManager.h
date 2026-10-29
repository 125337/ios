@interface MJComposingCreationResourceManager : NSObject
+ (BOOL)zipFolderAtPath:(id)arg1 toZipFile:(id)arg2 error:(id *)arg3;
+ (BOOL)unzipFileAtPath:(id)arg1 toFolderPath:(id)arg2 error:(id *)arg3;
+ (void)preparePublishResourceWithTemplateId:(id)arg1 musicInfo:(id)arg2 musicFilePath:(id)arg3 templateJsonFullFilePath:(id)arg4 completion:(id /* block */)arg5;
+ (BOOL)addFolderContentsToZip:(id)arg1 folderPath:(id)arg2 basePath:(id)arg3 error:(id *)arg4;
+ (id)sharedDownloadSession;
+ (void)downloadFileFromURL:(id)arg1 toLocalPath:(id)arg2 completion:(id /* block */)arg3;
+ (id)assembleResourceFolderWithTemplateId:(id)arg1 musicInfo:(id)arg2 musicLocalPath:(id)arg3 luaLocalPath:(id)arg4 coverLocalPath:(id)arg5 templateJsonFullFilePath:(id)arg6 error:(id *)arg7;
+ (void)downloadFiles:(id)arg1 toDirectory:(id)arg2 fileNamePrefix:(id)arg3 completion:(id /* block */)arg4;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (void)removeItemAtPath:(id)arg1;
@end
