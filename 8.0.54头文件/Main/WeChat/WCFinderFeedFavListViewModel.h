@interface WCFinderFeedFavListViewModel : NSObject
{
    BOOL _isFetchNetWork; // +0x8
    BOOL _continueFlag; // +0x9
    BOOL _highlightShowed; // +0xa
    long long _totalCount; // +0x10
    unsigned long long _privateLikeCount; // +0x18
    unsigned long long _snsPrivateLikeCount; // +0x20
    unsigned long long _commentPrivateLikeCount; // +0x28
    NSMutableArray * _favInfoArray; // +0x30
    id <WCFinderFeedFavListViewModelDelegate> _delegate; // +0x38
    WCFinderFeedContentVM * _contentVM; // +0x40
    NSData * _lastBuff; // +0x48
    NSMutableSet * _favIDSet; // +0x50
    unsigned long long _commentMaxDisplayNameCount; // +0x58
    WCFinderContact * _contact; // +0x60
}
- (id)initWithContentVM:(id)arg1;
- (void)fetchMoreFavInfo;
- (id)likeCountTipsText;
- (id)likeCountDescriptionText;
- (id)favInfoArray;
- (id)favIDSet;
- (void)setDisplayNameWithFavInfo:(id)arg1;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (BOOL)isFetchNetWork;
- (void)setIsFetchNetWork:(BOOL)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (unsigned long long)privateLikeCount;
- (void)setPrivateLikeCount:(unsigned long long)arg1;
- (unsigned long long)snsPrivateLikeCount;
- (void)setSnsPrivateLikeCount:(unsigned long long)arg1;
- (unsigned long long)commentPrivateLikeCount;
- (void)setCommentPrivateLikeCount:(unsigned long long)arg1;
- (void)setFavInfoArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)highlightShowed;
- (void)setHighlightShowed:(BOOL)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (void)setFavIDSet:(id)arg1;
- (unsigned long long)commentMaxDisplayNameCount;
- (void)setCommentMaxDisplayNameCount:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

