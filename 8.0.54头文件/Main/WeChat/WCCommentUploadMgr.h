@interface WCCommentUploadMgr : MMObject <PBMessageObserverDelegate, INewSyncExt>
{
    FIFOFileQueue * m_queue; // +0x8
    NSMutableDictionary * m_inQueueCommentsForWCObject; // +0x10
    NSMutableArray * m_failedCommentQueue; // +0x18
    NSMutableArray * m_failedLikeQueue; // +0x20
    int m_uploadingCount; // +0x28
    id <WCCommentUploadMgrDelegate> m_delegate; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)addComment:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)tryStartNextTask;
- (BOOL)doComment:(id)arg1;
- (BOOL)ww_doComment:(id)arg1;
- (BOOL)wc_doComment:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ww_MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)wc_MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncOplogOK;
- (id)getFailedComments;
- (id)getFailedLike;
- (void)deleteFailedComment:(id)arg1;
- (void)setTopTaskFailWithRet:(int)arg1;
- (BOOL)saveFailedCommentQueue;
- (BOOL)saveFailedLikeQueue;
- (BOOL)loadFailedQueue;
- (void)doInputAreaReportIfNeededWithCommentItem:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

