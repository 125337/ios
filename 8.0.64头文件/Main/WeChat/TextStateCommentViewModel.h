@interface TextStateCommentViewModel : NSObject <WCCommentDataServiceDelegate, WCCommentDataServiceExtension>
{
    BOOL _shouldShowHightlightComment; // +0x8
    BOOL _hasFetchCGIData; // +0x9
    BOOL _upContinue; // +0xa
    BOOL _downContinue; // +0xb
    BOOL _shouldShowAuthenticationTips; // +0xc
    BOOL _isLoadingComment; // +0xd
    BOOL _isCloseComment; // +0xe
    BOOL _hasShowFriendLabel; // +0xf
    BOOL _isDefaultComment; // +0x10
    BOOL _hasAddFriendLabel; // +0x11
    BOOL _hasAddOtherLabel; // +0x12
    BOOL _autoExpandSubCommentList; // +0x13
    TextStateModel * _textState; // +0x18
    unsigned long long _refCommentID; // +0x20
    NSMutableArray * _allComments; // +0x28
    WCCommentObject * _commentObject; // +0x30
    id <TextStateDetailViewModelDelegate> _delegate; // +0x38
    NSString * _tid; // +0x40
    NSMutableDictionary * _heightDict; // +0x48
    NSString * _lastVCName; // +0x50
    unsigned long long _viewScene; // +0x58
    unsigned long long _preFetchNextPageCount; // +0x60
    unsigned long long _reportScene; // +0x68
    unsigned long long _replyScene; // +0x70
    NSString * _replyNickname; // +0x78
    WCCommentDataService * _dataService; // +0x80
    id /* block */ _didSendCommentCallback; // +0x88
    id /* block */ _didDeleteCommentCallback; // +0x90
    id /* block */ _commentLikeChangedCallback; // +0x98
    NSData * _lastBuffer; // +0xa0
    NSMutableSet * _commentIdSet; // +0xa8
    unsigned long long _scene; // +0xb0
    unsigned long long _commentMaxDisplayNameCount; // +0xb8
    NSMutableSet * _showSubCommentListIDSet; // +0xc0
    NSMutableArray * _pastedStrArray; // +0xc8
    NSMutableArray * _commitPastedStrArray; // +0xd0
    _NSRange _commentTextViewLatestSelectionRange; // +0xd8
}
- (id)initWithModel:(id)arg1;
- (id)initWithCommentObject:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)isCloseComment;
- (BOOL)isTextStateExpired;
- (BOOL)feedOwnerCouldReceiveComment;
- (id)genCommentClientId;
- (void)calCommentDisplayNameWithCommentArray:(id)arg1;
- (BOOL)enabledDrafts;
- (BOOL)shouldShowHightlightComment;
- (id)commentIdSet;
- (id)heightDict;
- (id)showSubCommentListIDSet;
- (id)pastedStrArray;
- (unsigned long long)totalCommentCount;
- (id)commentObjectId;
- (void)fetchLoaclCommentData;
- (id)createCommentSectionViewModelArrayWithComments:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)requestFirstPageCommentData;
- (void)refreshLatestCommentData;
- (void)clearShowHightlightComment;
- (id)generateDataService;
- (id)generateFinderCommentDataService;
- (id)generateUniCommentDataService;
- (id)dataService;
- (void)fetchCommentPageIsFirstPage:(BOOL)arg1 direction:(int)arg2;
- (void)requestNextPageCommentData;
- (void)requestSubCommentWithRootCommentID:(unsigned long long)arg1 direction:(int)arg2;
- (void)postComment:(id)arg1 mentionArray:(id)arg2;
- (void)updateMentionArray:(id)arg1;
- (void)postCommentWithComment:(id)arg1;
- (void)replayComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3 mentionArray:(id)arg4;
- (void)replyWithSubComment:(id)arg1;
- (id)getCommentAtSection:(unsigned long long)arg1;
- (id)getCommentAtIndexPath:(id)arg1;
- (id)getSectionViewModelWithRootCommentID:(unsigned long long)arg1;
- (unsigned long long)getIndexWithRootCommentID:(unsigned long long)arg1;
- (void)privateDeleteComment:(id)arg1;
- (BOOL)privateRootComment:(unsigned long long)arg1;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (id)createCommentWithContent:(id)arg1 mentionArray:(id)arg2;
- (void)retryPostCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)defineCommentsByFriend:(id)arg1;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)clickCommentDisLikeAction:(id)arg1;
- (void)sendLikeOrDislikeRequsetWithFlag:(BOOL)arg1 isDislike:(BOOL)arg2 commentItem:(id)arg3;
- (void)clickCommentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)clickCommentRefcontentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (id)heightModelWithCommentID:(unsigned long long)arg1;
- (id)cacheCommentWithCommentID:(unsigned long long)arg1 wrappedTextHeight:(double)arg2 fullTextHeight:(double)arg3;
- (void)showSubCommentListWithSection:(unsigned long long)arg1;
- (BOOL)hasShowFriendLabel;
- (void)commentDataService:(id)arg1 onPostComment:(id)arg2 entityId:(id)arg3;
- (void)commentDataSErvice:(id)arg1 onCommentPostSuccessfully:(id)arg2 entityId:(id)arg3;
- (void)commentDataSErvice:(id)arg1 onCommentPostFail:(id)arg2 entityId:(id)arg3;
- (void)commentDataService:(id)arg1 onPostSubComment:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataService:(id)arg1 onPostSubCommentSuccessfully:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataService:(id)arg1 onPostSubCommentFail:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4 retCode:(int)arg5;
- (void)commentDataService:(id)arg1 onCommentEntityDeleted:(id)arg2;
- (void)onCommentLikeStatusChanged:(id)arg1 entityId:(id)arg2;
- (void)updateReplyScene:(unsigned long long)arg1;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (unsigned long long)getCommentIdentityType;
- (id)commentIdentityNickname;
- (void)addPastedText:(id)arg1;
- (void)cleanPastedTextArray;
- (void)didCommitPastedArray;
- (id)textState;
- (void)setTextState:(id)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (id)allComments;
- (void)setAllComments:(id)arg1;
- (id)commentObject;
- (void)setCommentObject:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setShouldShowHightlightComment:(BOOL)arg1;
- (BOOL)hasFetchCGIData;
- (void)setHasFetchCGIData:(BOOL)arg1;
- (id)tid;
- (void)setHeightDict:(id)arg1;
- (BOOL)upContinue;
- (void)setUpContinue:(BOOL)arg1;
- (BOOL)downContinue;
- (void)setDownContinue:(BOOL)arg1;
- (BOOL)shouldShowAuthenticationTips;
- (void)setShouldShowAuthenticationTips:(BOOL)arg1;
- (id)lastVCName;
- (void)setLastVCName:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (BOOL)isLoadingComment;
- (void)setIsLoadingComment:(BOOL)arg1;
- (unsigned long long)preFetchNextPageCount;
- (void)setPreFetchNextPageCount:(unsigned long long)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (void)setIsCloseComment:(BOOL)arg1;
- (void)setHasShowFriendLabel:(BOOL)arg1;
- (unsigned long long)replyScene;
- (void)setReplyScene:(unsigned long long)arg1;
- (id)replyNickname;
- (void)setReplyNickname:(id)arg1;
- (BOOL)isDefaultComment;
- (void)setIsDefaultComment:(BOOL)arg1;
- (_NSRange)commentTextViewLatestSelectionRange;
- (void)setCommentTextViewLatestSelectionRange:(_NSRange)arg1;
- (void)setDataService:(id)arg1;
- (id /* block */)didSendCommentCallback;
- (void)setDidSendCommentCallback:(id /* block */)arg1;
- (id /* block */)didDeleteCommentCallback;
- (void)setDidDeleteCommentCallback:(id /* block */)arg1;
- (id /* block */)commentLikeChangedCallback;
- (void)setCommentLikeChangedCallback:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void)setCommentIdSet:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)commentMaxDisplayNameCount;
- (void)setCommentMaxDisplayNameCount:(unsigned long long)arg1;
- (void)setShowSubCommentListIDSet:(id)arg1;
- (BOOL)hasAddFriendLabel;
- (void)setHasAddFriendLabel:(BOOL)arg1;
- (BOOL)hasAddOtherLabel;
- (void)setHasAddOtherLabel:(BOOL)arg1;
- (BOOL)autoExpandSubCommentList;
- (void)setAutoExpandSubCommentList:(BOOL)arg1;
- (void)setPastedStrArray:(id)arg1;
- (id)commitPastedStrArray;
- (void)setCommitPastedStrArray:(id)arg1;
- (void).cxx_destruct;
@end
