@interface MMAppMsgUploadUtil : NSObject
+ (BOOL)isLargeFile:(id)arg1;
+ (BOOL)isLargeFileSize:(unsigned long long)arg1;
+ (BOOL)isFileOverSize:(unsigned long long)arg1;
+ (BOOL)isFilePathOverSize:(id)arg1;
+ (id)fileMessagePath:(id)arg1;
+ (BOOL)isLargeFileMessage:(id)arg1;
+ (BOOL)isFileMessageOverSize:(id)arg1;
+ (void)checkConvertToLargeFileMsg:(id)arg1;
+ (void)asyncGetOriginFile:(id)arg1 complete:(id /* block */)arg2;
+ (id)originTempFileFor:(id)arg1;
@end
