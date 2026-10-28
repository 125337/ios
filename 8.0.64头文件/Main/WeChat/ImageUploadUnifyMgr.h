@interface ImageUploadUnifyMgr : ImageUploadUnifyBaseMgr <ImageUploadTaskControllerDelegate, IMsgExt, MMKernelExt>
{
    NSRecursiveLock * _lock; // +0x8
    ImageUploadTaskController * _currentTask; // +0x10
    NSMutableArray * _arrTask; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)StartUploadImage:(id)arg1;
- (void)CheckQueue;
- (void)Stop;
- (void)StopUploadImage:(id)arg1;
- (void)StopUploadImageByUsrName:(id)arg1;
- (BOOL)IsUploading:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (id)getTaskWithMsgWrap:(id)arg1;
- (id)getExistTaskDescript;
- (void)onUploadTaskSuccess:(id)arg1;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)onUploadTask:(id)arg1 modifyMessageWithBitSet:(unsigned int)arg2;
- (void)onUploadTaskModMsg:(id)arg1;
- (void)onUploadTaskInvalid:(id)arg1;
- (void)onAuthOK;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)arrTask;
- (void)setArrTask:(id)arg1;
- (void).cxx_destruct;
@end
