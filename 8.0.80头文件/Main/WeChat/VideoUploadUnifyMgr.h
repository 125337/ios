@interface VideoUploadUnifyMgr : NSObject <VideoUploadTaskControllerDelegate, IMsgExt, IForwardScheduleQueueExt>
{
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x8
    BOOL _isUploadStartSuspended; // +0x9
    id <UploadVideoCDNMgrDelegate> _delegate; // +0x10
    VideoUploadTaskController * _currentUploadingTask; // +0x18
    NSMutableArray * _arrUploadingTask; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)OnForwardScheduleQueueAdvanced;
- (id)getExistTaskDescript;
- (id)getTaskWithMsgWrap:(id)arg1;
- (BOOL)IsMsgInUploadQueue:(id)arg1;
- (void)StartUpload:(id)arg1;
- (void)StopUpload:(id)arg1 fromDelete:(BOOL)arg2;
- (void)PauseUpload:(id)arg1;
- (BOOL)stopTaskWithMsgWrap:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)Stop;
- (void)suspendUploadStart;
- (void)resumeUploadStart;
- (void)checkQueue;
- (void)checkUploadingQueue;
- (void)onUploadTaskSuccess:(id)arg1;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentUploadingTask;
- (void)setCurrentUploadingTask:(id)arg1;
- (id)arrUploadingTask;
- (void)setArrUploadingTask:(id)arg1;
- (BOOL)isUploadStartSuspended;
- (void)setIsUploadStartSuspended:(BOOL)arg1;
- (void).cxx_destruct;
@end
