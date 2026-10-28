@interface RecordFileTransferTask : FileTransferTask
{
    MsgRecordDataWrap * _recordDataWrap; // +0x8
    NSString * _dataId; // +0x10
}
+ (id)taskIdForMessageWrap:(id)arg1 dataId:(id)arg2;
+ (id)findDataItemForId:(id)arg1 inList:(id)arg2 index:(int *)arg3;
+ (id)taskFromMessageWrap:(id)arg1 dataId:(id)arg2 type:(unsigned long long)arg3;
+ (id)taskIdForRecordDataWrap:(id)arg1;
+ (id)taskFromRecordDataWrap:(id)arg1 type:(unsigned long long)arg2;
- (id)taskId;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)filePath;
- (long long)daysBeforeExpired;
- (BOOL)isFileExpired;
- (void)startTransfer;
- (void)stopTransfer;
- (id)taskSvrId;
- (BOOL)isOnlinePreviewEnabeld;
- (id)recordDataWrap;
- (void)setRecordDataWrap:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (void).cxx_destruct;
@end
