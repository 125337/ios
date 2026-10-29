@interface CBaseFile : NSObject
{
    NSFileHandle * m_fhFile; // +0x8
    NSString * m_nsFilePath; // +0x10
    unsigned int m_uiMode; // +0x18
    BOOL m_bOpen; // +0x1c
}
+ (void)initialize;
+ (int)BlockSizeForIO;
+ (BOOL)CreateFile:(id)arg1;
+ (BOOL)CreatePath:(id)arg1;
+ (void)EnsureCreateParentDir:(id)arg1;
+ (BOOL)RenameFile:(id)arg1 To:(id)arg2;
+ (BOOL)SwapFile:(id)arg1 withFile:(id)arg2;
+ (BOOL)SafeRenameFiles:(id)arg1;
+ (BOOL)SafeRenameFiles:(id)arg1 error:(id *)arg2;
+ (BOOL)CopyFile:(id)arg1 To:(id)arg2;
+ (BOOL)FileIsHardLink:(id)arg1;
+ (BOOL)File:(id)arg1 inodeSameWith:(id)arg2;
+ (BOOL)HardLinkFile:(id)arg1 To:(id)arg2;
+ (BOOL)FileExist:(id)arg1;
+ (long long)GetFileModifyTime:(id)arg1;
+ (long long)GetFileLastTimeOfAccessModifyChangeBirth:(id)arg1;
+ (long long)GetFileSize:(id)arg1;
+ (long long)FolderSizeAtPath:(const char *)arg1;
+ (id)SubFoldersName:(id)arg1;
+ (id)SubFilesRecursively:(id)arg1;
+ (id)SubFilesName:(id)arg1;
+ (BOOL)LoadSubFolders:(id)arg1 SubFiles:(id)arg2 fromFolderPath:(id)arg3;
+ (BOOL)RemoveFile:(id)arg1;
+ (void)ClearPath:(id)arg1;
+ (void)SyncClearPath:(id)arg1;
+ (void)ClearPath:(id)arg1 WithOut:(id)arg2;
+ (BOOL)CreateSymbolLink:(id)arg1 LinkName:(id)arg2;
+ (id)LoadDataFromPath:(id)arg1 Offset:(unsigned long long)arg2 Len:(unsigned int)arg3;
+ (id)LoadDataFromPathEx:(id)arg1 Offset:(unsigned long long)arg2 MaxLen:(unsigned int)arg3;
+ (BOOL)WriteDataToPath:(id)arg1 Offset:(unsigned long long)arg2 Data:(id)arg3;
+ (BOOL)AppendData:(id)arg1 toPath:(id)arg2;
+ (BOOL)OverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (BOOL)SysOverWriteDataToPath:(id)arg1 Data:(id)arg2;
+ (BOOL)SysAppendData:(id)arg1 toPath:(id)arg2;
+ (id)GetFileCreateTime:(id)arg1;
+ (BOOL)IsFile:(id)arg1 newerThanFile:(id)arg2;
+ (id)GetFileMD5:(id)arg1;
+ (id)GetDataMD5:(id)arg1;
+ (id)GetFileSHA1:(id)arg1;
+ (id)GetDataSHA1:(id)arg1;
+ (id)GetFileSHA256:(id)arg1;
+ (id)GetDataSHA256:(id)arg1;
+ (BOOL)tryResetFileProtection:(id)arg1;
+ (BOOL)tryRemoveFileProtection:(id)arg1;
+ (void)tryRemoveDirectoryProtection:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)SetFileInfo:(id)arg1 Mode:(unsigned int)arg2;
- (BOOL)IsOpen;
- (BOOL)Open;
- (BOOL)OpenWithFd:(int)arg1;
- (void)Close;
- (BOOL)SetFileSize:(long long)arg1;
- (BOOL)Seek:(long long)arg1;
- (unsigned long long)SeekToEndOfFile;
- (BOOL)ReadData:(id *)arg1 Len:(unsigned int)arg2;
- (BOOL)WriteData:(id)arg1;
- (BOOL)WriteLargeData:(id)arg1;
- (id)m_nsFilePath;
- (void)setM_nsFilePath:(id)arg1;
- (id)m_fhFile;
- (void)setM_fhFile:(id)arg1;
- (void).cxx_destruct;
@end

