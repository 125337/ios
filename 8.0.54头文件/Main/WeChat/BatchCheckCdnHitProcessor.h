@interface BatchCheckCdnHitProcessor : UploadStateProcessor
{
    NSMutableArray * _uploadTaskList; // +0x8
}
- (id)initWithContext:(id)arg1;
- (id)getStateName;
- (void)start;
- (C2CUploadRequest)genBatchCheckCdnHitRequest;
- (void)onHitCheckSucc:(id)arg1;
- (void)batchCheckMd5:(id)arg1 complete:(id /* block */)arg2;
- (void)onBatchCheckMd5:(id)arg1 withFileidToAeskeys:(id)arg2;
- (id)findUploadTaskWithMd5:(id)arg1;
- (id)findUploadTaskWithIdentifier:(id)arg1;
- (id)findCheckInfoInArray:(id)arg1 withFileID:(id)arg2;
- (void)removeUploadTaskByFileID:(id)arg1;
- (void)transNextState;
- (id)uploadTaskList;
- (void)setUploadTaskList:(id)arg1;
- (void).cxx_destruct;
@end

