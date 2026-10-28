@interface BrandFlutterHelper : NSObject
+ (id)fixAbsolutePath:(id)arg1;
+ (id)getFixUrl:(id)arg1;
+ (id)getBrandFlutterPrivateRootFolderPath;
+ (id)getBrandFlutterDraftFolderPath;
+ (id)getUniqueDraftImagePath;
+ (id)getFileTypeWithData:(id)arg1;
+ (BOOL)saveImageAsPng:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (BOOL)saveImageData:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (void)asyncProcessAssets:(id)arg1 useOriginalImage:(BOOL)arg2 completion:(id /* block */)arg3;
+ (id)createBrandFlutterFeedCompressConfig:(unsigned long long)arg1;
+ (id)compressImage:(id)arg1 compressType:(unsigned long long)arg2 targetPath:(id)arg3;
+ (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(unsigned int)arg3 brandUserName:(id)arg4 mpPageEnterType:(unsigned int)arg5 fastLoadTemplateSet:(id)arg6;
@end
