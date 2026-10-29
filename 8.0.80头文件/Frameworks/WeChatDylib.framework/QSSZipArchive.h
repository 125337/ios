@interface QSSZipArchive : NSObject
{
    NSString * _path; // +0x8
    void * _zip; // +0x10
}
+ (BOOL)isFilePasswordProtectedAtPath:(id)arg1;
+ (BOOL)isPasswordValidForArchiveAtPath:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(BOOL)arg3 overwrite:(BOOL)arg4 security:(BOOL)arg5 password:(id)arg6 error:(id *)arg7 delegate:(id)arg8;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(BOOL)arg3 overwrite:(BOOL)arg4 security:(BOOL)arg5 password:(id)arg6 error:(id *)arg7 delegate:(id)arg8 progressHandler:(id /* block */)arg9 completionHandler:(id /* block */)arg10;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 preserveAttributes:(BOOL)arg3 overwrite:(BOOL)arg4 security:(BOOL)arg5 nestedZipLevel:(long long)arg6 password:(id)arg7 error:(id *)arg8 delegate:(id)arg9 progressHandler:(id /* block */)arg10 completionHandler:(id /* block */)arg11;
+ (BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3;
+ (BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2 withPassword:(id)arg3;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 withPassword:(id)arg3;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3 withPassword:(id)arg4;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3 withPassword:(id)arg4 andProgressHandler:(id /* block */)arg5;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3 compressionLevel:(int)arg4 password:(id)arg5 AES:(BOOL)arg6 progressHandler:(id /* block */)arg7;
+ (id)_filenameStringWithCString:(const char *)arg1 size:(unsigned short)arg2;
+ (void)zipInfo:(struct *)arg1 setAttributesOfItemAtPath:(id)arg2;
+ (void)zipInfo:(struct *)arg1 setDate:(id)arg2;
+ (id)_gregorian;
+ (id)_dateWithMSDOSFormat:(unsigned int)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (BOOL)open;
- (BOOL)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2 withPassword:(id)arg3;
- (BOOL)writeFile:(id)arg1 withPassword:(id)arg2;
- (BOOL)writeFileAtPath:(id)arg1 withFileName:(id)arg2 withPassword:(id)arg3;
- (BOOL)writeFileAtPath:(id)arg1 withFileName:(id)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(BOOL)arg5;
- (BOOL)writeData:(id)arg1 filename:(id)arg2 withPassword:(id)arg3;
- (BOOL)writeData:(id)arg1 filename:(id)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(BOOL)arg5;
- (BOOL)close;
- (void).cxx_destruct;
@end
