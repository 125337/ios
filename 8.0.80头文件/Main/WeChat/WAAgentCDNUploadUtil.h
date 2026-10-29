@interface WAAgentCDNUploadUtil : NSObject
+ (id)processingQueue;
+ (basic_string<char, std::char_traits<char>, std::allocator<char>>)permanentUploadBizReqPayload;
+ (id)makeResultPrefilled;
+ (void)callCompletionOnMain:(id /* block */)arg1 result:(id)arg2;
+ (void)uploadImage:(id)arg1 completion:(id /* block */)arg2;
+ (void)uploadImageFile:(id)arg1 allowedDir:(id)arg2 completion:(id /* block */)arg3;
+ (id)loadAndValidateSnapshotFile:(id)arg1 allowedDir:(id)arg2;
+ (void)uploadImageData:(id)arg1 completion:(id /* block */)arg2;
+ (void)fileId2UrlRequest:(id)arg1 completion:(id /* block */)arg2;
@end
