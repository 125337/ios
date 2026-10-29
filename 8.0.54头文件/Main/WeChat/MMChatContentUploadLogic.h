@interface MMChatContentUploadLogic : MMObject <IMMChatContentUploadLogicExt, INewSyncExt, MMKernelExt>
{
    BOOL _validSync; // +0x8
    unsigned int _reportToken; // +0xc
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSMutableArray * _savedSessionInfoArr; // +0x18
    NSMutableArray * _reportSessionInfoArr; // +0x20
}
- (void)dealloc;
- (void)startLogic;
- (BOOL)shouldUpload;
- (void)recoverFormerData;
- (void)saveCurrentData:(id)arg1;
- (void)checkAndCompareData:(id)arg1;
- (void)report:(BOOL)arg1 withToken:(unsigned int)arg2;
- (void)DidEnterBackground:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)WillTerminate:(id)arg1;
- (void)onPreQuit;
- (void)onNewSyncEnd;
- (void)onExtChatUploadEnterChat:(id)arg1;
- (void)onExtChatUploadLeaveChat:(id)arg1;
- (void)onExtChatUploadReplyChat:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)savedSessionInfoArr;
- (void)setSavedSessionInfoArr:(id)arg1;
- (id)reportSessionInfoArr;
- (void)setReportSessionInfoArr:(id)arg1;
- (BOOL)validSync;
- (void)setValidSync:(BOOL)arg1;
- (unsigned int)reportToken;
- (void)setReportToken:(unsigned int)arg1;
- (void).cxx_destruct;
@end

