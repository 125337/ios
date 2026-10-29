@interface WCHardlinkFileInfoDB : NSObject
{
    WCTDatabase * _fileInfoDB; // +0x8
    NSString * _fileDBPath; // +0x10
}
+ (id)getFileInfoDBPath;
- (id)init;
- (void)removeDB;
- (void)checkpoint;
- (BOOL)insertFileInfo:(id)arg1;
- (id)getAllHardLinkInfoWithMD5:(id)arg1;
- (id)getAllFileInfos;
- (id)p_getFileInfoTable;
- (BOOL)shouldEnableDBLiteMode;
- (id)fileInfoDB;
- (void)setFileInfoDB:(id)arg1;
- (id)fileDBPath;
- (void)setFileDBPath:(id)arg1;
- (void).cxx_destruct;
@end
