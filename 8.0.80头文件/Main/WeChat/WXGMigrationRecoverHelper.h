@interface WXGMigrationRecoverHelper : NSObject
{
    id <WXGMigrationRecoverHelperDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _fileSerialQueue; // +0x10
    WXGChatLogRecoverFilter * _recoverFilter; // +0x18
    WXGMigrationMsgItemDB * _msgItemDB; // +0x20
    unsigned long long _totalBackupTextSize; // +0x28
    unsigned long long _totalBackupMediaSize; // +0x30
}
- (id)initWithEncryptKey:(id)arg1;
- (void)dealloc;
- (void)checkDataIntegrity;
- (unsigned long long)getTotalRecoverTextSize;
- (unsigned long long)getTotalRecoverMediaSize;
- (void)asynProcessPieceOfData:(id)arg1;
- (void)oldAsyncProcessPieceOfData:(id)arg1;
- (void)asynProcessMigrationDataTag:(id)arg1;
- (void)asynProcessMigrationRequestSessionDataInfoArray:(id)arg1 shouldCheckPersisten:(BOOL)arg2;
- (BOOL)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (BOOL)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (void)p_writeBufferFileToPersistentPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fileSerialQueue;
- (void)setFileSerialQueue:(id)arg1;
- (id)recoverFilter;
- (void)setRecoverFilter:(id)arg1;
- (id)msgItemDB;
- (void)setMsgItemDB:(id)arg1;
- (unsigned long long)totalBackupTextSize;
- (void)setTotalBackupTextSize:(unsigned long long)arg1;
- (unsigned long long)totalBackupMediaSize;
- (void)setTotalBackupMediaSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
