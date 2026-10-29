@interface IWebNetTaskCallBack : NSObject
- (void)OnUploadCompleted:(id)arg1 response:(id)arg2;
- (void)OnProgressChanged:(id)arg1 completedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)OnDownloadCompleted:(id)arg1 response:(id)arg2;
@end

