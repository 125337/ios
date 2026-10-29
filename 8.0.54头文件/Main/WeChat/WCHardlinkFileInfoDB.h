@interface WCHardlinkFileInfoDB : NSObject
{
    WCTDatabase * _fileInfoDB; // +0x8
    NSString * _fileDBPath; // +0x10
}
+ (id)getFileInfoDBPath;
- (id)init;
- (void)closeDB;
- (void)removeDB;
- (void)checkpoint;
- (BOOL)insertFileInfo:(id)arg1;
- (void)deleteFileInfoWithInode:(unsigned long long)arg1;
- (id)getFileInfoOfInode:(unsigned long long)arg1;
- (id)getAllFileInfo;
- (id)getAllFileMD5;
- (BOOL)isFileInfoEmpty;
- (BOOL)deleteAllSingleMD5;
- (void)deleteHardLinkInfoWithMD5:(id)arg1;
- (id)getAllHardLinkInfoWithMD5:(id)arg1;
- (id)p_getFileInfoTable;
- (id)fileInfoDB;
- (void)setFileInfoDB:(id)arg1;
- (id)fileDBPath;
- (void)setFileDBPath:(id)arg1;
- (void).cxx_destruct;
@end

