@interface WCStrangerCommentMgr : NSObject
{
    MyWCDB * m_database; // +0x8
}
- (void)dealloc;
- (void)addComment:(id)arg1 toItem:(id)arg2;
- (void)getStrangerCommentForDataItem:(id)arg1 partner:(id)arg2;
- (id)m_database;
- (void)setM_database:(id)arg1;
- (void).cxx_destruct;
@end
