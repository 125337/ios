@interface WCFileUtil : NSObject
+ (BOOL)fileExist:(id)arg1;
+ (BOOL)pathIsDirectory:(id)arg1;
+ (BOOL)createPath:(id)arg1;
+ (void)ensureCreateParentDirectory:(id)arg1;
+ (BOOL)copyFileFrom:(id)arg1 to:(id)arg2;
+ (BOOL)removeFile:(id)arg1;
+ (BOOL)createFile:(id)arg1;
+ (unsigned long long)fileSize:(id)arg1;
+ (id)fileName:(id)arg1;
+ (BOOL)appendData:(id)arg1 toPath:(id)arg2;
@end

