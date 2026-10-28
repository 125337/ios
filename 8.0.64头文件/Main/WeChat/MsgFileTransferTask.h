@interface MsgFileTransferTask : FileTransferTask
{
    CMessageWrap * _messageWrap; // +0x8
}
+ (id)taskIdForMessageWrap:(id)arg1;
+ (id)taskFromMessageWrap:(id)arg1 type:(unsigned long long)arg2;
- (id)taskId;
- (id)taskName;
- (unsigned long long)fileSize;
- (id)filePath;
- (id)fileExt;
- (long long)daysBeforeExpired;
- (BOOL)isFileExpired;
- (BOOL)isPaused;
- (BOOL)isFail;
- (void)startTransfer;
- (void)stopTransfer;
- (id)taskSvrId;
- (BOOL)isOnlinePreviewEnabeld;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
