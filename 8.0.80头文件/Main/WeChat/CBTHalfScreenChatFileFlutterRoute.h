@interface CBTHalfScreenChatFileFlutterRoute : NSObject
+ (void)showFromVC:(id)arg1 filePath:(id)arg2 fileName:(id)arg3 fileId:(id)arg4 aesKey:(id)arg5 appType:(unsigned int)arg6 fileType:(unsigned int)arg7 fileMd5:(id)arg8 srcInfoParams:(id)arg9 dismissCallback:(id /* block */)arg10;
+ (void)launchHalfScreenFromVC:(id)arg1 filePath:(id)arg2 fileId:(id)arg3 aesKey:(id)arg4 appType:(unsigned int)arg5 fileType:(unsigned int)arg6 fileMd5:(id)arg7 checkedFileSize:(unsigned long long)arg8 displayName:(id)arg9 srcInfoParams:(id)arg10 dismissCallback:(id /* block */)arg11;
+ (void)showCheckFailedToastFromVC:(id)arg1 retCode:(int)arg2;
@end
