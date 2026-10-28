@interface WCFinderCommentImageBrowseViewModel : NSObject <WCFinderDataItemExt, WCFinderSelfContactExt, WCFinderPostingCommentExt>
{
    BOOL _didFetchImageComments; // +0x8
    BOOL _feedWasDeleted; // +0x9
    BOOL _upContinue; // +0xa
    BOOL _downContinue; // +0xb
    BOOL _isLoadingLastComments; // +0xc
    BOOL _isLoadingNextComments; // +0xd
    WCFinderCommentImageBrowseConfig * _config; // +0x10
    NSMutableArray * _mComments; // +0x18
    NSMutableSet * _commentIdSet; // +0x20
    id <WCFinderCommentImageBrowseVMDelegate> _delegate; // +0x28
    NSData * _lastBuffer; // +0x30
}
- (id)initWithConfig:(id)arg1 comments:(id)arg2 delegate:(id)arg3;
- (void)setup;
- (id)allComments;
- (unsigned long long)indexOfCommentID:(unsigned long long)arg1;
- (id)validTopIndexPath;
- (void)fetchCommentsForRefCommentID:(unsigned long long)arg1 isRollingUp:(BOOL)arg2;
- (BOOL)rollingUpHasMoreData;
- (BOOL)rollingDownHasMoreData;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (BOOL)shouldCloseCommnet;
- (BOOL)isLimitedByYoungCheck;
- (BOOL)isCommentFunctionEnable;
- (void)updateReplyScene:(unsigned long long)arg1;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (void)replyToComment:(id)arg1 postingComment:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)replyWithSubComment:(id)arg1;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)clickCommentLikeAction:(id)arg1;
- (BOOL)isAuthorSelf;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)mComments;
- (void)setMComments:(id)arg1;
- (id)commentIdSet;
- (void)setCommentIdSet:(id)arg1;
- (BOOL)didFetchImageComments;
- (void)setDidFetchImageComments:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)feedWasDeleted;
- (void)setFeedWasDeleted:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)upContinue;
- (void)setUpContinue:(BOOL)arg1;
- (BOOL)downContinue;
- (void)setDownContinue:(BOOL)arg1;
- (BOOL)isLoadingLastComments;
- (void)setIsLoadingLastComments:(BOOL)arg1;
- (BOOL)isLoadingNextComments;
- (void)setIsLoadingNextComments:(BOOL)arg1;
- (void).cxx_destruct;
@end
