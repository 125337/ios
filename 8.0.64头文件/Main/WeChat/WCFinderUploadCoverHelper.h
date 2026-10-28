@interface WCFinderUploadCoverHelper : NSObject
+ (BOOL)uploadImage:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (BOOL)uploadImageData:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (BOOL)uploadImage:(id)arg1 imageData:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
+ (id)appendBGColor:(id)arg1 colorString:(id)arg2;
+ (id)saveToPath:(id)arg1;
@end
