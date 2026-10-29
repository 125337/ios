@interface CBTAsstBoardReceivedFileTransferTask : MsgFileTransferTask
{
    NSString * _managedSavePath; // +0x8
}
+ (id)taskWithMessageWrap:(id)arg1;
- (void)cbt_notifyStateChanged;
- (void)startTransfer;
- (void)stopTransfer;
- (BOOL)isFileExpired;
- (id)filePath;
- (id)managedSavePath;
- (void)setManagedSavePath:(id)arg1;
- (void).cxx_destruct;
@end
