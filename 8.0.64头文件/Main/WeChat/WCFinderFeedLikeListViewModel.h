@interface WCFinderFeedLikeListViewModel : NSObject <WCFinderDataItemExt>
{
    BOOL _isFetchNetWork; // +0x8
    BOOL _continueFlag; // +0x9
    BOOL _shouldShowLikeGuide; // +0xa
    BOOL _isLike; // +0xb
    BOOL _highlightShowed; // +0xc
    long long _totalCount; // +0x10
    NSMutableArray * _likeInfoArray; // +0x18
    id <WCFinderFeedLikeListViewModelDelegate> _delegate; // +0x20
    ThankRedPackageInfo * _redpackageInfo; // +0x28
    NSString * _tid; // +0x30
    NSString * _nonceID; // +0x38
    NSData * _lastBuff; // +0x40
    NSMutableSet * _likeIDSet; // +0x48
    unsigned long long _commentMaxDisplayNameCount; // +0x50
    WCFinderContact * _contact; // +0x58
}
- (id)initWithTid:(id)arg1 nonceID:(id)arg2;
- (id)init;
- (void)setDisplayNameWithLikeInfo:(id)arg1;
- (id)likeInfoArray;
- (id)likeUsernameSet;
- (void)fetchMoreLikeInfo;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)changeFeedLikeStatus;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (BOOL)isFetchNetWork;
- (void)setIsFetchNetWork:(BOOL)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)shouldShowLikeGuide;
- (void)setShouldShowLikeGuide:(BOOL)arg1;
- (long long)totalCount;
- (void)setTotalCount:(long long)arg1;
- (void)setLikeInfoArray:(id)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)highlightShowed;
- (void)setHighlightShowed:(BOOL)arg1;
- (id)redpackageInfo;
- (void)setRedpackageInfo:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)likeIDSet;
- (void)setLikeIDSet:(id)arg1;
- (unsigned long long)commentMaxDisplayNameCount;
- (void)setCommentMaxDisplayNameCount:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
