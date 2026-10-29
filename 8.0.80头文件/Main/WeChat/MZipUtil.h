@interface MZipUtil : NSObject
+ (BOOL)UnZipFile:(id)arg1 toPath:(id)arg2;
+ (BOOL)UnZipFile:(id)arg1 toPath:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5;
+ (id)dateWithDosDate:(unsigned long long)arg1;
+ (BOOL)is7zFile:(id)arg1;
@end
