@interface WPCoreBaseFile : NSObject
{
    NSFileHandle * m_fhFile; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned int m_uiMode; // +0x18
    BOOL m_bOpen; // +0x1c
}
+ (BOOL)FileExist:(id)arg1;
+ (long long)GetFileSize:(id)arg1;
+ (id)LoadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned long long)arg3;
+ (BOOL)CreatePath:(id)arg1;
+ (BOOL)CreateFile:(id)arg1;
+ (void)EnsureCreateParentDir:(id)arg1;
+ (BOOL)RenameFile:(id)arg1 To:(id)arg2;
+ (BOOL)CopyFile:(id)arg1 To:(id)arg2;
+ (BOOL)RemoveFile:(id)arg1;
+ (BOOL)AppendData:(id)arg1 toPath:(id)arg2;
- (void)Close;
- (BOOL)ReadData:(id)arg1 Len:(unsigned long long)arg2;
- (BOOL)SetFileInfo:(id)arg1 Mode:(unsigned int)arg2;
- (BOOL)IsOpen;
- (BOOL)Seek:(long long)arg1;
- (BOOL)Open;
- (unsigned long long)SeekToEndOfFile;
- (BOOL)WriteData:(id)arg1;
- (BOOL)WriteLargeData:(id)arg1;
- (void).cxx_destruct;
@end

