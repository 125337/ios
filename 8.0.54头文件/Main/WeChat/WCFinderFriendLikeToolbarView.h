@interface WCFinderFriendLikeToolbarView : MMUIView <WCFinderFeedContentVMExt, ILinkEventExt, WCFinderDynamicRichTextViewDelegate>
{
    BOOL _onlyShowRecommendReason; // +0x8
    BOOL _isLikeAnimating; // +0x9
    BOOL _isRuningCompletionBlock; // +0xa
    id <WCFinderFriendLikeToolbarViewDelegate> _delegate; // +0x10
    WCFinderDynamicRichTextView * _likeInfoTextView; // +0x18
    WCFinderDynamicRichTextView * _appendTisTextView; // +0x20
    WCFinderCustomImageRichTextView * _suffixTipsTextView; // +0x28
    UIView * _avatorContainerView; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    UIView * _gestureView; // +0x40
    NSMutableArray * _roundHeaderViews; // +0x48
    long long _likeCount; // +0x50
    long long _likeCountHash; // +0x58
    long long _incFriendLikeCount; // +0x60
    CGSize _lastLayoutSize; // +0x68
}
+ (double)cellHeightWithContentVM:(id)arg1 isDisplayRecommend:(BOOL)arg2 hideFriendLikeInfo:(BOOL)arg3 onlyShowRecommendReason:(BOOL)arg4;
+ (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
+ (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
+ (id)getDisplayCommentInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)resetHeaderViewsAndLikeCount;
- (void)initSubView;
- (id)gestureView;
- (id)avatorContainerView;
- (id)likeInfoTextView;
- (id)appendTisTextView;
- (id)roundHeaderViews;
- (void)updateUIMargin;
- (id)createAccessibilityContentNicknameTips:(id)arg1 appendTips:(id)arg2 incFriendLikeCount:(long long)arg3;
- (void)updateSubviewsStyle;
- (void)unRegisterAllKeyExtension;
- (id)createLikeTextString;
- (id)getSuffixRecommendTipsWithContentVM:(id)arg1;
- (BOOL)updateWithContentVM:(id)arg1 isDisplayRecommend:(BOOL)arg2 hideFriendLikeInfo:(BOOL)arg3 disPlayFollowLikeBtn:(BOOL)arg4;
- (void)updateTextViewStateWithLeftNicknameTips:(id)arg1 appendTips:(id)arg2 suffixTips:(id)arg3 incFriendLikeCount:(long long)arg4;
- (void)layoutTextViewsWithLikeInfoLeft:(double)arg1;
- (BOOL)showShadowTextRecommend;
- (void)updateLikeInfoTextViewWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 leftAndRightPadding:(double)arg3 topAndBottomPadding:(double)arg4;
- (double)likeTextFieldOriginX:(long long)arg1;
- (void)onClickFollowLikeButton:(id)arg1;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2;
- (void)didClickFriendGesture:(id)arg1;
- (void)onClickToolBarAction;
- (void)openWeChatProfileByUsername:(id)arg1;
- (void)goToFriendLikeListDetail;
- (double)headerViewMargin;
- (double)headerViewSize;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(int)arg3;
- (void)insetSelfHeaderView:(id)arg1 toRoundHeaderViews:(id)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextViewClickText:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (CGRect)getSelfAvatarViewFrameOnFullView;
- (id)createOneSelfAvatarView;
- (BOOL)isInsertSelfAvatarAtRight;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)onlyShowRecommendReason;
- (void)setOnlyShowRecommendReason:(BOOL)arg1;
- (void)setLikeInfoTextView:(id)arg1;
- (void)setAppendTisTextView:(id)arg1;
- (id)suffixTipsTextView;
- (void)setSuffixTipsTextView:(id)arg1;
- (void)setAvatorContainerView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setGestureView:(id)arg1;
- (void)setRoundHeaderViews:(id)arg1;
- (BOOL)isLikeAnimating;
- (void)setIsLikeAnimating:(BOOL)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)likeCountHash;
- (void)setLikeCountHash:(long long)arg1;
- (BOOL)isRuningCompletionBlock;
- (void)setIsRuningCompletionBlock:(BOOL)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (long long)incFriendLikeCount;
- (void)setIncFriendLikeCount:(long long)arg1;
- (void).cxx_destruct;
@end

