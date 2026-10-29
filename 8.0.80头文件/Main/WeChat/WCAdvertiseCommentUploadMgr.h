@interface WCAdvertiseCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt, WCMediaUploaderDelegate>
{
    FIFOFileQueue * m_queue; // +0x8
    NSMutableDictionary * m_inQueueCommentsForWCObject; // +0x10
    int m_uploadingCount; // +0x18
    id <WCAdvertiseCommentUploadMgrDelegate> m_delegate; // +0x20
    WCCommentItem * _currentCommentItem; // +0x28
    WCMediaUploader * _mediaUploader; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)addComment:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (void)deleteAllCommentInQueue;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)tryStartNextTask;
- (BOOL)doComment:(id)arg1;
- (BOOL)checkImageDidUploaded:(id)arg1;
- (BOOL)uploadCommentImage:(id)arg1;
- (void)onMediaUploadStarted:(id)arg1;
- (void)onMediaUploadFinished:(id)arg1 uploadResult:(long long)arg2 uploadErrType:(long long)arg3 cdnErrCode:(int)arg4;
- (BOOL)wc_doComment:(id)arg1;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncOplogOK;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)currentCommentItem;
- (void)setCurrentCommentItem:(id)arg1;
- (id)mediaUploader;
- (void)setMediaUploader:(id)arg1;
- (void).cxx_destruct;
@end
