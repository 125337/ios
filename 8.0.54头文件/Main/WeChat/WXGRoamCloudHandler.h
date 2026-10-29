@interface WXGRoamCloudHandler : NSObject
{
    CKContainer * _container; // +0x8
    CKDatabase * _database; // +0x10
    id <WXGRoamCloudHandlerDelegate> _delegate; // +0x18
    NSString * _ilinkUserId; // +0x20
}
- (id)init;
- (void)cloudGetFileInfo:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)cloudGetFileList:(unsigned long long)arg1 parentPath:(id)arg2 recursive:(BOOL)arg3;
- (void)cloudUploadFile:(unsigned long long)arg1 remotePath:(id)arg2 localPath:(id)arg3;
- (void)cloudDownloadFile:(unsigned long long)arg1 remotePath:(id)arg2 localPath:(id)arg3;
- (void)cloudDeleteFile:(unsigned long long)arg1 remotePath:(id)arg2;
- (void)cloudDeleteFileList:(unsigned long long)arg1 remotePathList:(id)arg2;
- (void)getFileListInnerZone:(unsigned long long)arg1 pathInfo:(id)arg2 cursor:(id)arg3 results:(id)arg4 parentPath:(id)arg5;
- (void)getFileListInnerRecord:(unsigned long long)arg1 pathInfo:(id)arg2 cursor:(id)arg3 results:(id)arg4 parentPath:(id)arg5;
- (void)uploadFileInner:(unsigned long long)arg1 localPath:(id)arg2 pathInfo:(id)arg3 zoneID:(id)arg4;
- (void)saveRecordInner:(id)arg1 invokeID:(unsigned long long)arg2 localPath:(id)arg3;
- (id)mergePath:(id)arg1 withFileName:(id)arg2;
- (id)handlerRemotePath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ilinkUserId;
- (void)setIlinkUserId:(id)arg1;
- (void).cxx_destruct;
@end

