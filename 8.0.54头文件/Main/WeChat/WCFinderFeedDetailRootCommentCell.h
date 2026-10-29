@interface WCFinderFeedDetailRootCommentCell : WCFinderFeedDetailCommentCell <WCFinderFeedContentTextClickActionDelegate, ILinkEventExt, WCFinderHeadImageViewDelegate, WCFinderContactExt, WCGeneralMonitorCellProtocol, WCFinderJumpInfoPanelViewDelegate, WCFinderTemplateVideoCommentView, WCFinderFeedCommentKeywordViewContainer, WCFinderFeedCommentCommonCellAction>
{
    multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> _keywordsMap; // +0x8
    BOOL _profileSwitch; // +0x20
    BOOL _isFriendIdentity; // +0x21
    BOOL _isFinderIdentity; // +0x22
    BOOL _enableShowFinder; // +0x23
    BOOL _isCommentClose; // +0x24
    id <WCFinderFeedDetailRootCommentCellDelegate> _delegate; // +0x28
    double _avatarLeftMargin; // +0x30
    UIColor * _customBackgroundColor; // +0x38
    WCFinderHeadImageView * _avatarImageView; // +0x40
    UILabel * _timeAndIpRegionLabel; // +0x48
    UILabel * _nickNameLabel; // +0x50
    WCFinderFeedContentTextView * _textView; // +0x58
    WCFinderCommentLikeView * _commentLikeView; // +0x60
    UITapGestureRecognizer * _replayTapGestureRecognizer; // +0x68
    UILabel * _setTopLabel; // +0x70
    UILabel * _authorLikeLabel; // +0x78
    UIImageView * _finderIconImageView; // +0x80
    UILabel * _additionalInfoLabel; // +0x88
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x90
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x98
    UIButton * _failCommentTips; // +0xa0
    UIView * _refContentBackgroundView; // +0xa8
    UIView * _highLightView; // +0xb0
    WCFinderFeedContentTextView * _refContentTextView; // +0xb8
    UIView * _refContentLineView; // +0xc0
    MMUIButton * _moreActionButton; // +0xc8
    double _timeLabelMinWidth; // +0xd0
    WCFinderTemplateVideoCommentView * _templateCommentView; // +0xd8
    NSMutableArray * _accessibilityElements; // +0xe0
    WCFinderDataItem * _bindDataItem; // +0xe8
    WCFinderJumpInfoPanelView * _bottomRefJumpinfoPanel; // +0xf0
    UIAccessibilityElement * _likeAccessibility; // +0xf8
    WCFinderCommentTranslateView * _translateView; // +0x100
}
+ (double)textViewMaxWidthWith:(double)arg1 avatarLeftMargin:(double)arg2;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3 isAuthorView:(BOOL)arg4;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3 isAuthorView:(BOOL)arg4 avatarLeftMargin:(double)arg5;
+ (id)getReplyContentWithComment:(id)arg1 isAuthorView:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isContentTruncated;
- (void *)keywordsMap;
- (void)setUpUI;
- (id)gen25496ReportDict;
- (void)setUpRefContentView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithModel:(id)arg1 width:(double)arg2 isAuthorView:(BOOL)arg3 isCommentClose:(BOOL)arg4 enableShowFinder:(BOOL)arg5 isSelfPost:(BOOL)arg6 bindDataItem:(id)arg7;
- (void)showRecommendButtonAnimation;
- (void)updateVoiceOver;
- (void)adjustNickNameLabelWidth;
- (void)adjustUILayout;
- (void)updateInteractionButtonLayout;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (void)prepareForReuse;
- (void)showViewHighLightByRefComment;
- (int)commentScene;
- (unsigned long long)section;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onClickLikeComment;
- (void)onClickMoreAction;
- (void)clickRecommendAction;
- (void)updateRecommendView;
- (void)recommendViewDataChange;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)clickFriendLikeAction;
- (void)clickAvatar;
- (void)clickNickname;
- (void)clickRetryCommentAction;
- (void)longPress:(id)arg1;
- (void)showCommentMenuView;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextClick:(id)arg1 withRect:(CGRect)arg2;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(CGRect)arg3;
- (void)templateVideoCommentViewDidClickPreview:(id)arg1;
- (void)templateVideoCommentViewDidCutSameBtn:(id)arg1;
- (void)templateVideoCommentViewDidJoinTopicBtn:(id)arg1;
- (void)templateVideoCommentView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)templateVideoCommentViewDidJoinMusicBtn:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)_totalAccessibilityLabel;
- (id)findAllExposedKeywordUrls;
- (id)getGeneralMonitorCellBizId;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (id)bottomRefJumpInfoArray;
- (void)updateCommentLikeState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)avatarLeftMargin;
- (void)setAvatarLeftMargin:(double)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)timeAndIpRegionLabel;
- (void)setTimeAndIpRegionLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)commentLikeView;
- (void)setCommentLikeView:(id)arg1;
- (id)replayTapGestureRecognizer;
- (void)setReplayTapGestureRecognizer:(id)arg1;
- (id)setTopLabel;
- (void)setSetTopLabel:(id)arg1;
- (id)authorLikeLabel;
- (void)setAuthorLikeLabel:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)additionalInfoLabel;
- (void)setAdditionalInfoLabel:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (id)failCommentTips;
- (void)setFailCommentTips:(id)arg1;
- (id)refContentBackgroundView;
- (void)setRefContentBackgroundView:(id)arg1;
- (id)highLightView;
- (void)setHighLightView:(id)arg1;
- (id)refContentTextView;
- (void)setRefContentTextView:(id)arg1;
- (id)refContentLineView;
- (void)setRefContentLineView:(id)arg1;
- (BOOL)profileSwitch;
- (void)setProfileSwitch:(BOOL)arg1;
- (BOOL)isFriendIdentity;
- (void)setIsFriendIdentity:(BOOL)arg1;
- (BOOL)isFinderIdentity;
- (void)setIsFinderIdentity:(BOOL)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (double)timeLabelMinWidth;
- (void)setTimeLabelMinWidth:(double)arg1;
- (id)templateCommentView;
- (void)setTemplateCommentView:(id)arg1;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)arg1;
- (id)bindDataItem;
- (void)setBindDataItem:(id)arg1;
- (id)bottomRefJumpinfoPanel;
- (void)setBottomRefJumpinfoPanel:(id)arg1;
- (id)likeAccessibility;
- (void)setLikeAccessibility:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

