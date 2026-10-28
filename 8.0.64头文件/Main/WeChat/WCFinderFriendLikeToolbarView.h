@interface WCFinderFriendLikeToolbarView : MMUIView <WCFinderFeedContentVMExt, ILinkEventExt, WCFinderDynamicRichTextViewDelegate, WCFinderThanksButtonDelegate, WCFinderThanksExt, WCFinderFriendLikeToolbarViewProtocol, MMFinderFriendLikeShootingAnimationTargetProtocol>
{
    BOOL _onlyShowRecommendReason; // +0x8
    BOOL _isFriendLikeAnimating; // +0x9
    BOOL _isFakeInsertSelfAvator; // +0xa
    BOOL _isLikeAnimating; // +0xb
    BOOL _isRuningCompletionBlock; // +0xc
    id <WCFinderFriendLikeToolbarViewDelegate> _delegate; // +0x10
    WCFinderSizingRichTextView * _likeInfoTextView; // +0x18
    WCFinderSizingRichTextView * _appendTisTextView; // +0x20
    WCFinderRichTextView * _suffixTipsTextView; // +0x28
    WCFinderFriendLikeToolbarViewParams * _params; // +0x30
    WCFinderThanksButton * _thanksButton; // +0x38
    UIImageView * _iconImageView; // +0x40
    UIView * _avatorContainerView; // +0x48
    NSMutableArray * _roundHeaderViews; // +0x50
    WCFinderLikeInfo * _likeInfo; // +0x58
    WCFinderFeedContentVM * _contentVM; // +0x60
    UIView * _gestureView; // +0x68
    long long _likeCount; // +0x70
    long long _likeCountHash; // +0x78
    CGSize _lastLayoutSize; // +0x80
}
+ (double)cellHeightWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
+ (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
+ (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
+ (id)getDisplayCommentInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (void)resetHeaderViewsAndLikeCount;
- (void)initSubView;
- (id)gestureView;
- (id)avatorContainerView;
- (id)createLikeInfoTextView;
- (id)thanksButton;
- (id)roundHeaderViews;
- (void)updateUIMargin;
- (id)createAccessibilityContentNicknameTips:(id)arg1 appendTips:(id)arg2;
- (void)updateSubviewsStyle;
- (void)unRegisterAllKeyExtension;
- (id)createLikeTextStringWithIncreaseLikeCount:(unsigned long long)arg1;
- (id)getSuffixRecommendTipsWithContentVM:(id)arg1;
- (BOOL)updateWithContentVM:(id)arg1 flag:(unsigned long long)arg2;
- (void)startLikeInfoCarousel;
- (void)stopLikeInfoCarousel;
- (void)updateWithFriendLikeViewModel:(id)arg1;
- (id)createViewModelWithContentVM:(id)arg1 inserSelf:(BOOL)arg2;
- (BOOL)checkShouldReloadWithContent:(id)arg1;
- (void)updateTextViewStateWithLeftNicknameTips:(id)arg1 appendTips:(id)arg2 suffixTips:(id)arg3;
- (BOOL)needShowThanksButtonUI;
- (void)updateThanksButtonUI;
- (void)layoutTextViewsWithLikeInfoLeft:(double)arg1;
- (BOOL)showShadowTextRecommend;
- (void)updateLikeInfoTextViewWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 leftAndRightPadding:(double)arg3 topAndBottomPadding:(double)arg4;
- (void)bindReport;
- (double)likeTextFieldOriginX:(long long)arg1;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2;
- (BOOL)displayHeaderUsernameChange:(id)arg1;
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
- (void)layoutSubviews;
- (CGRect)friendLikeShootingAinmationTargetGetFrame;
- (id)friendLikeShootingAinmationTargetCreateSnapshotView;
- (id)friendLikeShowingHeaderViews;
- (void)friendLikeSuperLikeAnimationEnd;
- (void)friendLikeTitleRefreshLayoutWithSuperLikeFlag:(BOOL)arg1;
- (void)friendLikeAvatorViewLayout;
- (BOOL)supportNewStyle;
- (id)likeHeaderContainerView;
- (id)selfNameLabel;
- (id)selfLikeIconView;
- (void)friendLikeStartLongPressAction;
- (CGRect)thanksIconFrame;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)onlyShowRecommendReason;
- (void)setOnlyShowRecommendReason:(BOOL)arg1;
- (BOOL)isFriendLikeAnimating;
- (void)setIsFriendLikeAnimating:(BOOL)arg1;
- (id)likeInfoTextView;
- (void)setLikeInfoTextView:(id)arg1;
- (id)appendTisTextView;
- (void)setAppendTisTextView:(id)arg1;
- (id)suffixTipsTextView;
- (void)setSuffixTipsTextView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setThanksButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void)setAvatorContainerView:(id)arg1;
- (void)setRoundHeaderViews:(id)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setGestureView:(id)arg1;
- (BOOL)isFakeInsertSelfAvator;
- (void)setIsFakeInsertSelfAvator:(BOOL)arg1;
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
- (void).cxx_destruct;
@end
