@interface WCDataUploader : WCUploader
{
    long long currentPos; // +0x18
    WCDataUploaderResult * uploadResult; // +0x20
    WCUploadTask * m_task; // +0x28
    id <WCDataUploaderDelegate> m_delegate; // +0x30
    id /* block */ _cancelResultBlock; // +0x38
}
- (void)dealloc;
- (id)xmlForUploadTask:(id)arg1;
- (BOOL)onSetRequest:(id)arg1;
- (void)setFinished;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)arg1;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)_onResponse:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isSightUploadTask;
- (id)getSightUploadMedia;
- (void)run;
- (void)_run;
- (void)onCalculateVideoMd5:(id)arg1 finishedWithResult:(id)arg2;
- (id)m_task;
- (void)setM_task:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id /* block */)cancelResultBlock;
- (void)setCancelResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
