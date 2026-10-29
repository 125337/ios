@interface BatchCheckCdnHitStage : UploadStateStage
{
    unsigned int _checkCount; // +0x8
    NSMutableArray * _uploadTaskList; // +0x10
    NSMutableArray * _arrWaitingTask; // +0x18
    NSMutableArray * _arrRequestItem; // +0x20
}
- (id)initWithContext:(id)arg1;
- (id)getStateName;
- (void)addRequestFileInfo:(id)arg1 forTask:(id)arg2 role:(unsigned long long)arg3 toList:(id)arg4;
- (id)getDeduplicateFileInfos;
- (void)start;
- (void)checkUploadTask;
- (void)onHitCheckSucc:(id)arg1 requestFileInfos:(id)arg2;
- (id)applyHitCheckResults:(id)arg1 requestFileInfos:(id)arg2;
- (BOOL)applyHitResult:(id)arg1 forRequestItem:(id)arg2 requestFileId:(id)arg3;
- (id)requestFileIdWithResult:(id)arg1 requestFileInfo:(id)arg2;
- (void)logHitResult:(id)arg1 requestFileId:(id)arg2 forTask:(id)arg3;
- (id)renewFileIdWithResult:(id)arg1 forTask:(id)arg2 requestFileId:(id)arg3;
- (unsigned long long)writeRenewedFileId:(id)arg1 forTask:(id)arg2 requestFileId:(id)arg3;
- (BOOL)writeRenewedFileId:(id)arg1 toGroupOfTask:(id)arg2 requestFileId:(id)arg3;
- (BOOL)writeRenewedFileId:(id)arg1 toDataFieldOfTask:(id)arg2 requestFileId:(id)arg3;
- (void)updateCompatFileIdsWithResult:(id)arg1 forRequestItem:(id)arg2 requestFileId:(id)arg3 renewTarget:(unsigned long long)arg4;
- (BOOL)canWriteCompatFileId:(id)arg1 requestFileId:(id)arg2 renewTarget:(unsigned long long)arg3;
- (void)correctCompatCdnFileTypeForTask:(id)arg1;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (id)arrWaitingTask;
- (void)setArrWaitingTask:(id)arg1;
- (id)arrRequestItem;
- (void)setArrRequestItem:(id)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
