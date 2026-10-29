@interface CBTHalfScreenChatFileRoute : NSObject
+ (void)checkReceivedFileAndShowFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)fallbackToFileUploadOrToastFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3 retCode:(int)arg4;
+ (id)optionsWithFilePath:(id)arg1 fileName:(id)arg2 fileId:(id)arg3 aesKey:(id)arg4 appType:(unsigned int)arg5 fileType:(unsigned int)arg6 fileMd5:(id)arg7 srcInfoParams:(id)arg8;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
