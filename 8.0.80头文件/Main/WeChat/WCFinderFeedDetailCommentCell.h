@interface WCFinderFeedDetailCommentCell : UITableViewCell <ILinkEventExt, WCFinderCommentEmoticonViewDelegate, WCFinderCommentImageViewDelegate, WCFinderHeadImageViewDelegate, WCFinderFeedContentTextClickActionDelegate, WCFinderTemplateVideoCommentView, WCFinderJumpInfoPanelViewDelegate, WCFinderContactExt, WCGeneralMonitorCellProtocol, WCFinderPromoteOPLogExt, WCFinderFeedCommentKeywordViewContainer, WCFinderFeedCommentCommonCellAction>
{
    multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> _keywordsMap; // +0x8
    BOOL _isSelfPost; // +0x20
    BOOL _profileSwitch; // +0x21
    BOOL _enableShowFinder; // +0x22
    BOOL _isCommentClose; // +0x23
    id <WCFinderFeedCommentEventDelegate> _delegate; // +0x28
    WCFinderComment * _comment; // +0x30
    WCFinderFriendsHeaderSuffixView * _friendLikeSuffixView; // +0x38
    MMUIButton * _recommendButton; // +0x40
    MMUIButton * _handpickButton; // +0x48
    WCFinderFollowPromotionButton * _followPromotionButton; // +0x50
    WCFinderCommentEmoticonView * _emoticonView; // +0x58
    WCFinderCommentImageView * _commentImageView; // +0x60
    UILabel * _fromAILabel; // +0x68
    UILabel * _selfCommentTagLabel; // +0x70
    UILabel * _notSelectedLabel; // +0x78
    UILabel * _firstCommentLabel; // +0x80
    WCFinderFeedDetailCommentCellStyleConfig * _styleConfig; // +0x88
    unsigned long long _displayStyle; // +0x90
    WCFinderHeadImageView * _avatarImageView; // +0x98
    UILabel * _nickNameLabel; // +0xa0
    UILabel * _timeAndIpRegionLabel; // +0xa8
    WCFinderFeedContentTextView * _contentTextView; // +0xb0
    WCFinderCommentLikeView * _commentLikeView; // +0xb8
    MMUIButton * _moreActionButton; // +0xc0
    UILabel * _authorLikeLabel; // +0xc8
    UIImageView * _finderIconImageView; // +0xd0
    UIImageView * _authIconImageView; // +0xd8
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0xe0
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0xe8
    UILabel * _additionalInfoLabel; // +0xf0
    UIButton * _failCommentTips; // +0xf8
    UIView * _highLightView; // +0x100
    WCFinderCommentTranslateView * _translateView; // +0x108
    UIView * _refContentBackgroundView; // +0x110
    WCFinderFeedContentTextView * _refContentTextView; // +0x118
    UIView * _refContentLineView; // +0x120
    WCFinderTemplateVideoCommentView * _templateCommentView; // +0x128
    WCFinderJumpInfoPanelView * _bottomRefJumpinfoPanel; // +0x130
    UILabel * _setTopLabel; // +0x138
    UITapGestureRecognizer * _nickNameTapGesture; // +0x140
    UILongPressGestureRecognizer * _longPressGesture; // +0x148
    double _timeLabelMinWidth; // +0x150
    UITapGestureRecognizer * _replayTapGestureRecognizer; // +0x158
    NSMutableArray * _accessibilityElements; // +0x160
    CGPoint _beginTouchPoint; // +0x168
}
+ (double)recommendNameInfoHeightWithComment:(id)arg1 width:(double)arg2;
+ (double)emoticonContentHeightWithComment:(id)arg1;
+ (double)imageContentHeightWithComment:(id)arg1;
+ (double)topMarginOfFromAILabel;
+ (double)heightForFromAILabel;
+ (double)topMarginOfSelfCommentLabels;
+ (double)commonHeightForSelfCommentLabels;
+ (double)textViewMaxWidthWithFullWidth:(double)arg1 config:(id)arg2;
+ (id)simplifiedDisplayLabelsWithComment:(id)arg1;
+ (BOOL)_shouldShowFinderLogo:(id)arg1;
+ (BOOL)_showAuthIconAndHideInteractionLabelWithComment:(id)arg1 authIconUrl:(id *)arg2;
+ (BOOL)shouldShowAdditionalInfoLabelWithComment:(id)arg1;
+ (double)contentTextHeightWithContent:(id)arg1 width:(double)arg2 styleConfig:(id)arg3 forceExpand:(BOOL)arg4;
+ (double)heightWithConfig:(id)arg1;
+ (id)getContentWithComment:(id)arg1;
+ (id)getReplyContentWithComment:(id)arg1 isAuthorView:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureAsRootComment:(BOOL)arg1;
- (void *)keywordsMap;
- (BOOL)isContentTruncated;
- (void)prepareForReuse;
- (void)setComment:(id)arg1;
- (void)setUpRecommendNameInfosView;
- (void)setUpRecommendButton;
- (void)setUpHandPickButton;
- (void)setUpFollowPromotionButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setupEmoticonViewIfNeeded;
- (void)setupCommentImageView;
- (id)emoticonReportDictWithComment:(id)arg1;
- (void)updateEmoticonViewWithComment:(id)arg1;
- (void)updateImageViewWithComment:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)forbidHightLightCell;
- (void)setupFromAILabel;
- (void)updateFromAILabelWithComment:(id)arg1;
- (void)setupSelfCommentLabels;
- (void)updateSelfCommentLabelsWithComment:(id)arg1;
- (id)getRealCustomBackgroundColor;
- (void)finderCommentEmoticonView:(id)arg1 didClickEmoticonView:(id)arg2;
- (void)finderCommentEmoticonView:(id)arg1 didLongPressEmoticonView:(id)arg2;
- (id)finderCommentEmoticonViewGetFeedId;
- (void)finderCommentImageView:(id)arg1 didClickWithComment:(id)arg2;
- (id)finderCommentImageViewGetFeedId;
- (id)getCommentEventDelegate;
- (id)getFeedId;
- (int)getCommentListScene;
- (BOOL)showRecommendButton;
- (void)clickHandPickAction;
- (id)authorLikeLabelStr;
- (void)layoutSubviews;
- (void)setupUIWithConfig:(id)arg1;
- (void)setupHighlightView;
- (void)setupAvatarImageView;
- (void)setupNickNameLabel;
- (void)setupTimeAndIpRegionLabel;
- (void)setupActionButtons;
- (void)setupFirstCommentLabel;
- (void)setupAuthorLikeLabel;
- (void)setupInteractionLabels;
- (void)setupAdditionalInfoLabel;
- (void)setupFailCommentTips;
- (void)setupContentTextView;
- (void)setupFinderIconImageView;
- (void)setupAuthIconImageView;
- (void)setupLongPressGesture;
- (void)clickNickname;
- (void)onClickLikeComment;
- (void)onClickMoreAction;
- (void)clickRetryCommentAction;
- (void)clickAvatar;
- (void)longPress:(id)arg1;
- (void)clickReplyAction;
- (void)onClickForward;
- (void)showCommentMenuView;
- (id)currentIndexPath;
- (int)commentScene;
- (id)bindDataItem;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (void)updateInteractionButtonLayout;
- (void)updateTopTitleLayout;
- (void)updateHighlightViewLayout;
- (double)textViewMaxWidth;
- (void)setupSetTopLabel;
- (void)setupRefContentView;
- (void)setupTemplateCommentView;
- (void)setupBottomRefJumpinfoPanel;
- (void)updateWithConfig:(id)arg1;
- (void)_updateContentTextViewWithContent:(id)arg1 comment:(id)arg2;
- (void)_updateSimplifiedIdentityWithComment:(id)arg1 displayLabels:(id)arg2;
- (void)_updateFinderIconWithComment:(id)arg1;
- (void)_updateFinderAndAuthIconBothWithComment:(id)arg1;
- (void)_updateInteractionLabelsWithComment:(id)arg1 simplifiedDisplayLabels:(id)arg2;
- (void)_updateTimeAndIpRegionWithComment:(id)arg1;
- (void)updateAdditionalInfoLabel;
- (void)_updateBottomJumpInfoWithComment:(id)arg1;
- (void)_updateTranslateViewWithComment:(id)arg1;
- (void)_updateFailTipsWithComment:(id)arg1;
- (void)_updateHandPickButton:(id)arg1;
- (void)_updateFollowPromotionButton:(id)arg1;
- (BOOL)shouldShowFollowPromotionButton:(id)arg1;
- (void)clickFollowPromotionAction;
- (void)performLayout;
- (void)clickRecommendAction;
- (void)_clickRecommendAction;
- (void)updateRecommendView;
- (void)recommendViewDataChange;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)clickFriendLikeAction;
- (void)showRecommendButtonAnimation;
- (void)showViewHighLightByRefComment;
- (id)bottomRefJumpInfoArray;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateVoiceOver;
- (id)_totalAccessibilityLabel;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextClick:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)findAllExposedKeywordUrls;
- (id)getGeneralMonitorCellBizId;
- (void)updateCommentLikeState;
- (void)onCommentPromotePublicFlagChange:(BOOL)arg1;
- (id)gen25496ReportDict;
- (void)templateVideoCommentViewDidClickPreview:(id)arg1;
- (void)templateVideoCommentViewDidCutSameBtn:(id)arg1;
- (void)templateVideoCommentViewDidJoinTopicBtn:(id)arg1;
- (void)templateVideoCommentView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)templateVideoCommentViewDidJoinMusicBtn:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comment;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (id)friendLikeSuffixView;
- (void)setFriendLikeSuffixView:(id)arg1;
- (id)recommendButton;
- (void)setRecommendButton:(id)arg1;
- (id)handpickButton;
- (void)setHandpickButton:(id)arg1;
- (id)followPromotionButton;
- (void)setFollowPromotionButton:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)commentImageView;
- (void)setCommentImageView:(id)arg1;
- (CGPoint)beginTouchPoint;
- (void)setBeginTouchPoint:(CGPoint)arg1;
- (id)fromAILabel;
- (void)setFromAILabel:(id)arg1;
- (id)selfCommentTagLabel;
- (void)setSelfCommentTagLabel:(id)arg1;
- (id)notSelectedLabel;
- (void)setNotSelectedLabel:(id)arg1;
- (id)firstCommentLabel;
- (void)setFirstCommentLabel:(id)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)timeAndIpRegionLabel;
- (void)setTimeAndIpRegionLabel:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)commentLikeView;
- (void)setCommentLikeView:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (id)authorLikeLabel;
- (void)setAuthorLikeLabel:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)authIconImageView;
- (void)setAuthIconImageView:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (id)additionalInfoLabel;
- (void)setAdditionalInfoLabel:(id)arg1;
- (id)failCommentTips;
- (void)setFailCommentTips:(id)arg1;
- (id)highLightView;
- (void)setHighLightView:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (id)refContentBackgroundView;
- (void)setRefContentBackgroundView:(id)arg1;
- (id)refContentTextView;
- (void)setRefContentTextView:(id)arg1;
- (id)refContentLineView;
- (void)setRefContentLineView:(id)arg1;
- (id)templateCommentView;
- (void)setTemplateCommentView:(id)arg1;
- (id)bottomRefJumpinfoPanel;
- (void)setBottomRefJumpinfoPanel:(id)arg1;
- (id)setTopLabel;
- (void)setSetTopLabel:(id)arg1;
- (id)nickNameTapGesture;
- (void)setNickNameTapGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (BOOL)profileSwitch;
- (void)setProfileSwitch:(BOOL)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (double)timeLabelMinWidth;
- (void)setTimeLabelMinWidth:(double)arg1;
- (id)replayTapGestureRecognizer;
- (void)setReplayTapGestureRecognizer:(id)arg1;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
