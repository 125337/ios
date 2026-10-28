@interface MMMusicLiveCommentModel : NSObject <MMMusicLiveCommentBaseViewModelDelegate>
{
    map<unsigned long long, double, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, double>>> m_heightCache; // +0x8
    id <MMMusicLiveCommentModelDelegate> _delegate; // +0x20
    NSMutableSet * _existedComment; // +0x28
    NSMutableArray * _commentArray; // +0x30
    NSMutableArray * _noticeQueue; // +0x38
}
+ (id)cellIdentifier;
- (id)init;
- (void)calculateAndCacheHeightFor:(id)arg1;
- (void)viewModelDidUpdated:(id)arg1;
- (long long)commentCount;
- (id)viewModelAt:(unsigned long long)arg1;
- (long long)noticeCount;
- (id)firstNotice;
- (void)removeFirstNotice;
- (double)heightForCellAt:(unsigned long long)arg1;
- (void)clearHeightCache;
- (void)clearHeightCacheFor:(id)arg1;
- (void)appendComment:(id)arg1;
- (void)addNotice:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)existedComment;
- (void)setExistedComment:(id)arg1;
- (id)commentArray;
- (void)setCommentArray:(id)arg1;
- (id)noticeQueue;
- (void)setNoticeQueue:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
