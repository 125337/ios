@interface WCAdvertiseCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt>
{
    FIFOFileQueue * m_queue; // +0x8
    NSMutableDictionary * m_inQueueCommentsForWCObject; // +0x10
    int m_uploadingCount; // +0x18
    id <WCAdvertiseCommentUploadMgrDelegate> m_delegate; // +0x20
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
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncOplogOK;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

