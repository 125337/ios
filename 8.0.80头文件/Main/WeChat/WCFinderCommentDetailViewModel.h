@interface WCFinderCommentDetailViewModel : NSObject <WCFinderDataItemExt, WCFinderPostingCommentExt, WCFinderSelfContactExt, WCFinderFeedContentVMExt, WCFinderCommentDetailTranslatorDelegate>
{
    BOOL _commentUsesVoiceInput; // +0x8
    BOOL _shouldShowHightlightComment; // +0x9
    BOOL _scrollToInVisibleRefCommentAtAppear; // +0xa
    BOOL _hasFetchCGIData; // +0xb
    BOOL _upContinue; // +0xc
    BOOL _downContinue; // +0xd
    BOOL _shouldShowAuthenticationTips; // +0xe
    BOOL _isLoadingComment; // +0xf
    BOOL _shouldHideLocalCommentList; // +0x10
    BOOL _shouldForceHideTitle; // +0x11
    BOOL _isCloseComment; // +0x12
    BOOL _hasShowFriendLabel; // +0x13
    BOOL _ignoreVCCache; // +0x14
    BOOL _feedWasDeleted; // +0x15
    BOOL _currentFunctionEnable; // +0x16
    BOOL _isAnonymous; // +0x17
    BOOL _isDefaultComment; // +0x18
    BOOL _autoExpandSubCommentList; // +0x19
    BOOL _commentHighlightShown; // +0x1a
    int _viewScene; // +0x1c
    unsigned long long _refCommentID; // +0x20
    NSMutableArray * _allComments; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    WCFinderDataItem * _dataItem; // +0x38
    id <WCFinderCommentDetailViewModelDelegate> _delegate; // +0x40
    FinderGetCommentListCtx * _commentCtx; // +0x48
    FinderCommentSortCtrl * _commentSortCtrl; // +0x50
    unsigned long long _scene; // +0x58
    NSMutableDictionary * _heightDict; // +0x60
    NSData * _lastBuffer; // +0x68
    NSString * _lastVCName; // +0x70
    unsigned long long _preFetchNextPageCount; // +0x78
    unsigned long long _commentStyleType; // +0x80
    unsigned long long _reportScene; // +0x88
    unsigned long long _replyScene; // +0x90
    unsigned long long _viewerScene; // +0x98
    NSString * _replyNickname; // +0xa0
    WCFinderContact * _currentFinderContact; // +0xa8
    id /* block */ _openCommentBlock; // +0xb0
    unsigned long long _commentEnterType; // +0xb8
    WCFinderContentVMShareModel * _shareModel; // +0xc0
    unsigned long long _topCommentID; // +0xc8
    NSString * _providerFinderUsername; // +0xd0
    NSMutableArray * _commentTextViewMentionArray; // +0xd8
    WCFinderCommentExtraViewModel * _extraViewModel; // +0xe0
    FinderCommentSectionPromptInfo * _sectionPromptInfo; // +0xe8
    FinderPresentHalfSheetInfo * _halfSheetInfo; // +0xf0
    unsigned long long _respRequestId; // +0xf8
    WCFinderCommentDetailTranslator * _translator; // +0x100
    unsigned long long _sortType; // +0x108
    CEmoticonWrap * _currentSelectedEmoticon; // +0x110
    UIImage * _currentSelectedImage; // +0x118
    NSString * _editedAssetIdForCurSelectedImage; // +0x120
    unsigned long long _cacheFuncFlag; // +0x128
    unsigned long long _selectType; // +0x130
    NSString * _emotionViewSelectedID; // +0x138
    unsigned long long _justWatchingCommentID; // +0x140
    UIImage * _launchComposeWithImage; // +0x148
    NSMutableSet * _commentIdSet; // +0x150
    unsigned long long _commentMaxDisplayNameCount; // +0x158
    NSMutableSet * _showSubCommentListIDSet; // +0x160
    NSMutableArray * _pastedStrArray; // +0x168
    NSMutableArray * _commitPastedStrArray; // +0x170
    unsigned long long _commentNegativeActionTimes; // +0x178
    NSMutableArray * _quickEmotionArray; // +0x180
    NSMutableArray * _commitQuickEmotionArray; // +0x188
    NSMutableArray * _commitMentionArray; // +0x190
    WCFinderFeedMembershipInfo * _membershipInfo; // +0x198
    NSMutableDictionary * _authorSelectedTypeCommentCountDict; // +0x1a0
    _NSRange _commentTextViewLatestSelectionRange; // +0x1a8
}
+ (void)markEmoticonWrapFromEmoticonScene:(id)arg1;
- (id)initWithContentVM:(id)arg1 shareModel:(id)arg2 scene:(unsigned long long)arg3 viewScene:(int)arg4;
- (void)changeSelfContact:(id)arg1;
- (BOOL)isMemberQA;
- (unsigned long long)inputDisplayMode;
- (BOOL)isLimitedByYoungCheck;
- (BOOL)isCommentFunctionEnable;
- (BOOL)shouldCloseCommnet;
- (BOOL)commentDetailHeaderViewMultipleTabStyle;
- (BOOL)shouldShowHightlightComment;
- (BOOL)supportPostAttachShopInfo;
- (BOOL)alreadyExistShopComment;
- (BOOL)isSelfComment:(id)arg1;
- (BOOL)isCommentSelection;
- (BOOL)canShowHandPickButton;
- (id)commentPlaceholderAttachText;
- (void)checkShouldPrementionWithContact:(id)arg1;
- (id)shopByPassInfo;
- (id)tid;
- (id)commentIdSet;
- (id)heightDict;
- (id)showSubCommentListIDSet;
- (id)pastedStrArray;
- (id)quickEmotionArray;
- (id)translator;
- (unsigned long long)totalCommentCount;
- (id)shopCommentInfo;
- (unsigned long long)shopCommentCount;
- (id)shopCommentInfoParam;
- (id)topCommentInfo;
- (void)fetchLoaclCommentData;
- (id)createCommentSectionViewModelArrayWithComments:(id)arg1 requestTime:(unsigned long long)arg2;
- (BOOL)isAuthorSelf;
- (BOOL)isOnlyAuthorScene;
- (void)resetRequestStatus;
- (void)requestFirstPageCommentData;
- (void)refreshLatestCommentData;
- (void)clearShowHightlightComment;
- (void)resetShowHightlightComment;
- (void)fetchCommentPageIsFirstPage:(BOOL)arg1 direction:(unsigned long long)arg2;
- (id)commentPreloadGroupId;
- (void)startPreloadCommentResources;
- (void)stopPreloadCommentResources;
- (void)preloadCommentResources:(id)arg1;
- (id)preloadCommentAdResource:(id)arg1;
- (id)preloadCommentTemplateCover:(id)arg1;
- (int)commentRequestScene;
- (void)requestNextPageCommentData;
- (void)requestSubCommentWithRootCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2;
- (void)postComment:(id)arg1;
- (void)postComment:(id)arg1 withEmoticon:(id)arg2;
- (void)postComment:(id)arg1 withImage:(id)arg2;
- (void)postFinderComment:(id)arg1;
- (void)postCommentWithComment:(id)arg1;
- (void)replyComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)replyComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3 emoticon:(id)arg4;
- (void)replyComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3 image:(id)arg4;
- (unsigned long long)getEmoticonFromType:(id)arg1;
- (void)replyComment:(id)arg1 repalyComment:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)replyWithSubComment:(id)arg1;
- (id)getCommentAtSection:(unsigned long long)arg1;
- (id)getCommentAtIndexPath:(id)arg1;
- (id)indexPathWithComment:(id)arg1;
- (id)getSectionViewModelWithRootCommentID:(unsigned long long)arg1;
- (unsigned long long)getIndexWithRootCommentID:(unsigned long long)arg1;
- (id)getIndexPathWithRefCommentID:(unsigned long long)arg1;
- (void)deleteLocalComment:(id)arg1;
- (void)deleteReportLocalComment:(id)arg1;
- (void)privateDeleteComment:(id)arg1;
- (void)insertCommentAuthorityTipsIfNeedAt:(long long)arg1 comment:(id)arg2;
- (void)insertLiveRecommendTopicIfNeed;
- (void)removeLiveRecommendTopicSection;
- (long long)indexOfLevelOneComment:(id)arg1;
- (BOOL)privateRootComment:(unsigned long long)arg1;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)privateSetTopComment:(id)arg1 tid:(id)arg2;
- (void)setTopComment:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)setCommentHandPickWithComment:(id)arg1 isHandPick:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)genCommentUdfKvWithEmoticon:(id)arg1;
- (id)_createCommentWithContent:(id)arg1;
- (id)createCommentWithContent:(id)arg1 emoticon:(id)arg2;
- (id)genWCFinderCommentForPost;
- (BOOL)isMentionByFeedAuthor;
- (void)retryPostCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)defineCommentsByFriend:(id)arg1;
- (void)calCommentDisplayNameWithCommentArray:(id)arg1;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)changeCommentBlackListFlagComment:(id)arg1 isInBlackList:(BOOL)arg2;
- (void)addToBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)revertBlackList:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)reportTranslateAction:(BOOL)arg1 isClick:(BOOL)arg2 comment:(id)arg3 isAutoTranslate:(BOOL)arg4;
- (id)_translateReportViewIdForAction:(BOOL)arg1 comment:(id)arg2 isAutoTranslate:(BOOL)arg3;
- (id)getCommentsWithImageInfo;
- (void)updateEmotionViewID:(id)arg1;
- (int)_commentSurveyPageScene;
- (id)_commentSurveyContextInfo;
- (BOOL)_isCommentSurveyTriggerEvent:(long long)arg1;
- (void)_resetCommentSurvey;
- (BOOL)_updateCommentSurveyWithTaskDataWrap:(id)arg1 triggerEvent:(long long)arg2;
- (unsigned long long)tryRestorePresentedCommentSurvey:(long long)arg1;
- (BOOL)triggerRatingSurveyWithType:(long long)arg1;
- (long long)insertRatingSurveyAfterSection:(long long)arg1;
- (void)ratingSurveyCellDidExpose;
- (BOOL)selectRatingSurveyWithScore:(unsigned long long)arg1 followUpViewModel:(id *)arg2;
- (long long)removeRatingSurveySection;
- (long long)closeRatingSurvey;
- (void)extStatsReportCommentSurveyQuestionExposureWithQuestionID:(unsigned long long)arg1;
- (void)extStatsReportCommentSurveyQuestionClickWithQuestionID:(unsigned long long)arg1 answerID:(unsigned long long)arg2 multiAnswerIDs:(id)arg3;
- (void)extStatsReportRatingSurveyDidEndExposureIfNeed;
- (void)clickConsiderCommentUnfriendly:(id)arg1 complection:(id /* block */)arg2;
- (void)clickCommentLikeAction:(id)arg1;
- (void)clickCommentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)clickCommentRefcontentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)clearHeightCache;
- (id)heightModelWithCommentID:(unsigned long long)arg1;
- (id)cacheCommentWithCommentID:(unsigned long long)arg1 wrappedTextHeight:(double)arg2 fullTextHeight:(double)arg3;
- (void)showSubCommentListWithSection:(unsigned long long)arg1;
- (void)handleSubCommentMoreClickWithCellType:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (long long)getPostCommentIndexWithComment:(id)arg1;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (void)onFinderDataItemCommentRecommendFlagChangeWithTid:(id)arg1 comment:(id)arg2;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)onFinderDataItemUpdate:(id)arg1 scene:(int)arg2 source:(long long)arg3;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)updateReplyScene:(unsigned long long)arg1;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (unsigned long long)getCommentIdentityType;
- (id)commentIdentityNickname;
- (id)commentIdentityHeadURL;
- (void)addPastedText:(id)arg1;
- (void)addQuickEmotionWithText:(id)arg1;
- (void)clearLaunchComposeWithImage;
- (void)cleanPastedTextArray;
- (void)didCommitPastedArray;
- (id)getRecommentInfosStringWithComment:(id)arg1;
- (void)recommendComment:(id)arg1 recommend:(BOOL)arg2;
- (id)commentTextViewMentionArray;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (id)allCommentSectionModelFortranslator:(id)arg1;
- (id)translator:(id)arg1 commentForIndexPath:(id)arg2;
- (void)translator:(id)arg1 commentsStatusChanged:(id)arg2 reloadRow:(BOOL)arg3;
- (void)translator:(id)arg1 receivedErrorMessage:(id)arg2;
- (BOOL)enableRecommendCommentWithComment:(id)arg1;
- (void)onFeedContentAsyncLoadInfoUpdated:(id)arg1;
- (BOOL)commentUsesVoiceInput;
- (void)setCommentUsesVoiceInput:(BOOL)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (id)allComments;
- (void)setAllComments:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setShouldShowHightlightComment:(BOOL)arg1;
- (BOOL)scrollToInVisibleRefCommentAtAppear;
- (void)setScrollToInVisibleRefCommentAtAppear:(BOOL)arg1;
- (id)commentCtx;
- (void)setCommentCtx:(id)arg1;
- (id)commentSortCtrl;
- (void)setCommentSortCtrl:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)hasFetchCGIData;
- (void)setHasFetchCGIData:(BOOL)arg1;
- (void)setHeightDict:(id)arg1;
- (BOOL)upContinue;
- (void)setUpContinue:(BOOL)arg1;
- (BOOL)downContinue;
- (void)setDownContinue:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)shouldShowAuthenticationTips;
- (void)setShouldShowAuthenticationTips:(BOOL)arg1;
- (id)lastVCName;
- (void)setLastVCName:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (BOOL)isLoadingComment;
- (void)setIsLoadingComment:(BOOL)arg1;
- (unsigned long long)preFetchNextPageCount;
- (void)setPreFetchNextPageCount:(unsigned long long)arg1;
- (BOOL)shouldHideLocalCommentList;
- (void)setShouldHideLocalCommentList:(BOOL)arg1;
- (BOOL)shouldForceHideTitle;
- (void)setShouldForceHideTitle:(BOOL)arg1;
- (unsigned long long)commentStyleType;
- (void)setCommentStyleType:(unsigned long long)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (BOOL)isCloseComment;
- (void)setIsCloseComment:(BOOL)arg1;
- (BOOL)hasShowFriendLabel;
- (void)setHasShowFriendLabel:(BOOL)arg1;
- (BOOL)ignoreVCCache;
- (void)setIgnoreVCCache:(BOOL)arg1;
- (BOOL)feedWasDeleted;
- (void)setFeedWasDeleted:(BOOL)arg1;
- (unsigned long long)replyScene;
- (void)setReplyScene:(unsigned long long)arg1;
- (BOOL)currentFunctionEnable;
- (void)setCurrentFunctionEnable:(BOOL)arg1;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
- (BOOL)isAnonymous;
- (void)setIsAnonymous:(BOOL)arg1;
- (id)replyNickname;
- (void)setReplyNickname:(id)arg1;
- (BOOL)isDefaultComment;
- (void)setIsDefaultComment:(BOOL)arg1;
- (_NSRange)commentTextViewLatestSelectionRange;
- (void)setCommentTextViewLatestSelectionRange:(_NSRange)arg1;
- (id)currentFinderContact;
- (void)setCurrentFinderContact:(id)arg1;
- (id /* block */)openCommentBlock;
- (void)setOpenCommentBlock:(id /* block */)arg1;
- (unsigned long long)commentEnterType;
- (void)setCommentEnterType:(unsigned long long)arg1;
- (id)shareModel;
- (void)setShareModel:(id)arg1;
- (unsigned long long)topCommentID;
- (void)setTopCommentID:(unsigned long long)arg1;
- (id)providerFinderUsername;
- (void)setProviderFinderUsername:(id)arg1;
- (void)setCommentTextViewMentionArray:(id)arg1;
- (id)extraViewModel;
- (void)setExtraViewModel:(id)arg1;
- (id)sectionPromptInfo;
- (void)setSectionPromptInfo:(id)arg1;
- (id)halfSheetInfo;
- (void)setHalfSheetInfo:(id)arg1;
- (unsigned long long)respRequestId;
- (void)setRespRequestId:(unsigned long long)arg1;
- (void)setTranslator:(id)arg1;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg1;
- (id)currentSelectedEmoticon;
- (void)setCurrentSelectedEmoticon:(id)arg1;
- (id)currentSelectedImage;
- (void)setCurrentSelectedImage:(id)arg1;
- (id)editedAssetIdForCurSelectedImage;
- (void)setEditedAssetIdForCurSelectedImage:(id)arg1;
- (unsigned long long)cacheFuncFlag;
- (void)setCacheFuncFlag:(unsigned long long)arg1;
- (unsigned long long)selectType;
- (void)setSelectType:(unsigned long long)arg1;
- (id)emotionViewSelectedID;
- (void)setEmotionViewSelectedID:(id)arg1;
- (unsigned long long)justWatchingCommentID;
- (void)setJustWatchingCommentID:(unsigned long long)arg1;
- (id)launchComposeWithImage;
- (void)setLaunchComposeWithImage:(id)arg1;
- (void)setCommentIdSet:(id)arg1;
- (unsigned long long)commentMaxDisplayNameCount;
- (void)setCommentMaxDisplayNameCount:(unsigned long long)arg1;
- (void)setShowSubCommentListIDSet:(id)arg1;
- (BOOL)autoExpandSubCommentList;
- (void)setAutoExpandSubCommentList:(BOOL)arg1;
- (void)setPastedStrArray:(id)arg1;
- (id)commitPastedStrArray;
- (void)setCommitPastedStrArray:(id)arg1;
- (unsigned long long)commentNegativeActionTimes;
- (void)setCommentNegativeActionTimes:(unsigned long long)arg1;
- (void)setQuickEmotionArray:(id)arg1;
- (id)commitQuickEmotionArray;
- (void)setCommitQuickEmotionArray:(id)arg1;
- (id)commitMentionArray;
- (void)setCommitMentionArray:(id)arg1;
- (BOOL)commentHighlightShown;
- (void)setCommentHighlightShown:(BOOL)arg1;
- (id)membershipInfo;
- (void)setMembershipInfo:(id)arg1;
- (id)authorSelectedTypeCommentCountDict;
- (void)setAuthorSelectedTypeCommentCountDict:(id)arg1;
- (void).cxx_destruct;
@end
