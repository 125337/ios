@interface WCFinderCommentPostMgr : NSObject
{
    id <WCFinderCommentPostMgrDelegate> _delegate; // +0x8
    NSMutableArray * _commentQueue; // +0x10
    NSMutableDictionary * _commentPostingQueue; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (id)commentQueue;
- (id)commentPostingQueue;
- (void)checkQueue;
- (void)syncQueueToLocal;
- (void)commentPostSuccessfulWithComment:(id)arg1;
- (void)commentPostNeedRePostWithComment:(id)arg1;
- (void)commentPostShouldnotRePostWithComment:(id)arg1;
- (void)addPostComment:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCommentQueue:(id)arg1;
- (void)setCommentPostingQueue:(id)arg1;
- (void).cxx_destruct;
@end

