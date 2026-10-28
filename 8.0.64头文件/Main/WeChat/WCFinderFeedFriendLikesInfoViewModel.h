@interface WCFinderFeedFriendLikesInfoViewModel : NSObject
{
    BOOL _isDisplayRecommend; // +0x8
    BOOL _hideFriendLikeInfo; // +0x9
    BOOL _disPlayFollowLikeBtn; // +0xa
    BOOL _onlyShowRecommendReason; // +0xb
    WCFinderFeedContentVM * _contentVM; // +0x10
    NSArray * _likeModels; // +0x18
    unsigned long long _flag; // +0x20
    NSArray * _multiIconReasonCache; // +0x28
    NSString * _mulitIconReasonPostfixCache; // +0x30
    NSArray * _likeInfoArray; // +0x38
    unsigned long long _likeCount; // +0x40
    NSString * _reasonString; // +0x48
    NSArray * _comboLikeArrayCache; // +0x50
}
- (id)initWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (void)updateCache:(id)arg1;
- (id)multiIconReasonCacheArray:(id)arg1;
- (BOOL)checkShouldReloadWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (id)createViewModelWithContentVM:(id)arg1 inserSelf:(BOOL)arg2;
- (id)getDisplayCommentInfo:(id)arg1;
- (id)selfLikeTailString;
- (id)createSelfInsertLikeModel;
- (void)bindReport:(id)arg1 thankButton:(id)arg2;
- (BOOL)canShowThanksButtonUI;
- (void)setHasShowCarousel:(BOOL)arg1;
- (BOOL)hasShowCarousel;
- (id)getTopComboLikeArrayWithContentVM:(id)arg1;
- (BOOL)hasComboLikeModel;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)likeModels;
- (void)setLikeModels:(id)arg1;
- (BOOL)isDisplayRecommend;
- (void)setIsDisplayRecommend:(BOOL)arg1;
- (BOOL)hideFriendLikeInfo;
- (void)setHideFriendLikeInfo:(BOOL)arg1;
- (BOOL)disPlayFollowLikeBtn;
- (void)setDisPlayFollowLikeBtn:(BOOL)arg1;
- (BOOL)onlyShowRecommendReason;
- (void)setOnlyShowRecommendReason:(BOOL)arg1;
- (unsigned long long)flag;
- (void)setFlag:(unsigned long long)arg1;
- (id)multiIconReasonCache;
- (void)setMultiIconReasonCache:(id)arg1;
- (id)mulitIconReasonPostfixCache;
- (void)setMulitIconReasonPostfixCache:(id)arg1;
- (id)likeInfoArray;
- (void)setLikeInfoArray:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (id)reasonString;
- (void)setReasonString:(id)arg1;
- (id)comboLikeArrayCache;
- (void)setComboLikeArrayCache:(id)arg1;
- (void).cxx_destruct;
@end
