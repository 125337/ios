@interface BigFileCheckProcessor : UploadStateProcessor <MMAppAttachFileMgrExt>
{
    CMessageWrap * _msgWrap; // +0x8
    NSMutableArray * _bigFileTasks; // +0x10
    NSMutableArray * _uploadTaskList; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)transformToNextState;
- (void)onBatchCheckBigFileUploadResult:(BOOL)arg1 respList:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)convertUploadBigFileRecordData:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)bigFileTasks;
- (void)setBigFileTasks:(id)arg1;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (void).cxx_destruct;
@end
