@interface MPLandingPageCgiHandlerContext : MMObject
{
    id /* block */ _getCommentCompletionHandler; // +0x8
    id /* block */ _addCommentCompletionHandler; // +0x10
    id /* block */ _deleteCommentCompletionHandler; // +0x18
    id /* block */ _likeCommentCompletionHandler; // +0x20
    id /* block */ _getVideoUrlCompletionHandler; // +0x28
}
- (id /* block */)getCommentCompletionHandler;
- (void)setGetCommentCompletionHandler:(id /* block */)arg1;
- (id /* block */)addCommentCompletionHandler;
- (void)setAddCommentCompletionHandler:(id /* block */)arg1;
- (id /* block */)deleteCommentCompletionHandler;
- (void)setDeleteCommentCompletionHandler:(id /* block */)arg1;
- (id /* block */)likeCommentCompletionHandler;
- (void)setLikeCommentCompletionHandler:(id /* block */)arg1;
- (id /* block */)getVideoUrlCompletionHandler;
- (void)setGetVideoUrlCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
