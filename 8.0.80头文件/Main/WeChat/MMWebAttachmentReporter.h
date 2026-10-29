@interface MMWebAttachmentReporter : NSObject
+ (void)reportIdKeyWithContentType:(id)arg1;
+ (void)reportWKDownloadIdKeyWithContentType:(id)arg1;
+ (void)reportIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportWKDownloadIdKeyWithContentDispositionType:(id)arg1;
+ (void)reportIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportWKDownloadIdKeyWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
+ (void)reportKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
+ (void)reportWKDownloadKVWithWebViewUrlStr:(id)arg1 fileUrlStr:(id)arg2 contentType:(id)arg3 contentDispositionType:(id)arg4 contentDispositionFileExtName:(id)arg5;
@end
