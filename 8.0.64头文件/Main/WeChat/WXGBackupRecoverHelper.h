@interface WXGBackupRecoverHelper : NSObject
{
    BOOL _isRecover; // +0x8
    id <WXGBackupRecoverHelperDelegate> _delegate; // +0x10
    WXGBackupRecoverAnalyseInfo * _analyseInfo; // +0x18
    NSObject<OS_dispatch_queue> * _fileSerialQueue; // +0x20
    WXGBackupIndexDB * _indexDB; // +0x28
    WXGChatLogRecoverFilter * _recoverFilter; // +0x30
    unsigned long long _leftSpace; // +0x38
}
+ (id)backupMediaPath;
+ (id)backupMediaBufferPath;
+ (id)indexDBPath;
+ (unsigned long long)reservedBackupMediaSize;
+ (id)p_pathForDataId:(id)arg1;
+ (id)p_bufferPathForDataId:(id)arg1;
+ (void)deleteMsgListArray:(id)arg1;
+ (void)deleteBufferMsgListArray:(id)arg1;
+ (void)deleteAllMediaData;
+ (void)setBackupRecoverOnlyText:(BOOL)arg1;
+ (BOOL)checkBackupRecoverOnlyText;
- (id)init;
- (id)initWithEncryptKey:(id)arg1;
- (void)checkDataIntegrity;
- (id)indexDB;
- (void)asynProcessDataTag:(id)arg1;
- (void)asynProcessFilterRequest:(id)arg1;
- (void)asynProcessPieceOfData:(id)arg1;
- (void)asynProcessRequestSessionDataInfoArray:(id)arg1;
- (BOOL)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (BOOL)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (void)p_writeBufferFileToPersistentPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)analyseInfo;
- (void)setAnalyseInfo:(id)arg1;
- (BOOL)isRecover;
- (void)setIsRecover:(BOOL)arg1;
- (id)fileSerialQueue;
- (void)setFileSerialQueue:(id)arg1;
- (void)setIndexDB:(id)arg1;
- (id)recoverFilter;
- (void)setRecoverFilter:(id)arg1;
- (unsigned long long)leftSpace;
- (void)setLeftSpace:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
