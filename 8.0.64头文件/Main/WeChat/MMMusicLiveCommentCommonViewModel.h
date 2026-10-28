@interface MMMusicLiveCommentCommonViewModel : MMMusicLiveCommentBaseViewModel
{
    BOOL _isLiked; // +0x8
    id <MMMusicLiveCommentLikeOperationHandler> _likeHandler; // +0x10
    unsigned long long _likeCount; // +0x18
    id /* block */ _likeOperationHandler; // +0x20
    NSString * _mvPublisherName; // +0x28
}
- (id)initWithMsg:(id)arg1;
- (id)likeHandler;
- (void)setLikeHandler:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (id /* block */)likeOperationHandler;
- (void)setLikeOperationHandler:(id /* block */)arg1;
- (id)mvPublisherName;
- (void)setMvPublisherName:(id)arg1;
- (void).cxx_destruct;
@end
