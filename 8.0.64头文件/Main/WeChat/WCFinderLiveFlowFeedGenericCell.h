@interface WCFinderLiveFlowFeedGenericCell : WCFinderLiveFeedGenericCdnCell <WCFinderFeedContentVMLiveExt, ILinkEventExt, MMLiveFlowFeedCarouselCommentViewDelegate>
{
    BOOL _hideAudienceNum; // +0x8
    BOOL _hasInitialize; // +0x9
    id <WCFinderLiveFlowFeedGenericCellDelegate> _delegate; // +0x10
    WCFinderMoreLiveFriendLikeRecommendReasonView * _friendLikeReasonView; // +0x18
    RichTextView * _innerRecommendReasonLabel; // +0x20
    MMUILabel * _innerRecommendExpandActionLabel; // +0x28
    UIScrollView * _innerRecommendReasonView; // +0x30
    RichTextView * _recommendReasonLabel; // +0x38
    UIView * _recommendReasonView; // +0x40
    UIView * _authorView; // +0x48
    UIView * _avatorContainer; // +0x50
    WCFinderHeadImageView * _avatorImageView; // +0x58
    RichTextView * _nicknameTV; // +0x60
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x68
    UILabel * _audienceNumLabel; // +0x70
    MMFinderLiveFeedHighlightTagView * _highlightTagView; // +0x78
    RichTextView * _descLabel; // +0x80
    MMLiveFlowFeedCarouselCommentView * _carouselCommentView; // +0x88
    NSString * _innerRecommendReason; // +0x90
    long long _innerRecommendLabelState; // +0x98
    long long _liveFlowCardCommentLines; // +0xa0
    long long _liveFlowCardCommentDurationInMs; // +0xa8
    long long _liveFlowCardCommentFirstDurationInMs; // +0xb0
    long long _liveFlowCardCommentDualIntervalInMs; // +0xb8
}
+ (id)cellIdentifier;
+ (double)maxRecommendWidthInCellWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateSkeletonable:(id)arg1;
- (void)updateWithFeedVM:(id)arg1;
- (void)onFriendLikeClick;
- (BOOL)shouldHideAudienceNum;
- (void)setHideAudienceNum:(BOOL)arg1;
- (void)updateHighLightTag;
- (void)updateHeadImage;
- (void)relayoutNickname;
- (void)layoutUI;
- (void)layoutCarouselComment;
- (void)layoutRecommendReasonView;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)onAuthorViewDidClick;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)updateAllUIElementsShow:(BOOL)arg1 animate:(BOOL)arg2;
- (void)onPlayStop;
- (void)onRecommendExpandActionTapped;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onFeedHighlightTagUpdate;
- (void)onLiveRoomMsgInfoUpdate;
- (void)delayShowCarouselComment;
- (BOOL)isFlowRightCard;
- (void)onLiveFriendLikeListUpdate;
- (void)onCarouselCommentsDisplayLineChanged;
- (void)onCarouselCommentsAllItemsDisplayEnd;
- (void)showCarouselComment;
- (void)hideCarouselComment:(BOOL)arg1;
- (BOOL)showFriendLike;
- (BOOL)showRecommendReason;
- (BOOL)showInnerRecommendReason;
- (BOOL)showDescription;
- (id)displayDescription;
- (double)avatarImageDescLabelMargin;
- (id)customDescription;
- (double)avatarImageNickNameMargin;
- (double)descLabelRecommendReasonMargin;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hideAudienceNum;
- (id)friendLikeReasonView;
- (void)setFriendLikeReasonView:(id)arg1;
- (id)innerRecommendReasonLabel;
- (void)setInnerRecommendReasonLabel:(id)arg1;
- (id)innerRecommendExpandActionLabel;
- (void)setInnerRecommendExpandActionLabel:(id)arg1;
- (id)innerRecommendReasonView;
- (void)setInnerRecommendReasonView:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)recommendReasonView;
- (void)setRecommendReasonView:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)avatorContainer;
- (void)setAvatorContainer:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)audienceNumLabel;
- (void)setAudienceNumLabel:(id)arg1;
- (BOOL)hasInitialize;
- (void)setHasInitialize:(BOOL)arg1;
- (id)highlightTagView;
- (void)setHighlightTagView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)carouselCommentView;
- (void)setCarouselCommentView:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (long long)innerRecommendLabelState;
- (void)setInnerRecommendLabelState:(long long)arg1;
- (long long)liveFlowCardCommentLines;
- (void)setLiveFlowCardCommentLines:(long long)arg1;
- (long long)liveFlowCardCommentDurationInMs;
- (void)setLiveFlowCardCommentDurationInMs:(long long)arg1;
- (long long)liveFlowCardCommentFirstDurationInMs;
- (void)setLiveFlowCardCommentFirstDurationInMs:(long long)arg1;
- (long long)liveFlowCardCommentDualIntervalInMs;
- (void)setLiveFlowCardCommentDualIntervalInMs:(long long)arg1;
- (void).cxx_destruct;
@end
