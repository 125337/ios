@interface WCCommentPostManager : NSObject
{
    id <WCCommentPostManagerDelegate> _delegate; // +0x8
    NSMutableArray * _commentQueue; // +0x10
    NSString * _queuePath; // +0x18
    NSString * _postingCommentPath; // +0x20
    NSMutableDictionary * _commentPostingQueue; // +0x28
}
- (id)initWithDelegate:(id)arg1 queuePath:(id)arg2 postingCommentPath:(id)arg3;
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
- (id)queuePath;
- (void)setQueuePath:(id)arg1;
- (id)postingCommentPath;
- (void)setPostingCommentPath:(id)arg1;
- (void)setCommentPostingQueue:(id)arg1;
- (void).cxx_destruct;
@end
