@interface EmoticonThumbImageMgr : MMUserService <IStoreEmotionSingleDownloadMgrExt, MMServiceProtocol>
{
    BOOL _active; // +0x8
    NSMutableArray * _taskList; // +0x10
    EmoticonThumbImageTask * _currentTask; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)getThumbImg:(id)arg1;
- (id)getExsitingThumbImgPath:(id)arg1;
- (void)tryStartNextTask;
- (void)startTask:(id)arg1;
- (void)startDownloadEmoticon:(id)arg1;
- (id)tryGetThumbPath:(id)arg1 includingExternal:(BOOL)arg2;
- (id)tryGetThumbUrl:(id)arg1;
- (void)tryGenAndSaveThumbImageForMd5:(id)arg1 imageData:(id)arg2;
- (void)downloadImgUrlStr:(id)arg1 toPath:(id)arg2 aesKey:(id)arg3;
- (void)callTaskFail;
- (void)callTaskOK:(id)arg1;
- (void)realCallTaskOK:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end
