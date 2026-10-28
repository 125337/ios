@interface WCFinderFeedSubCommentTableViewCell : WCFinderFeedDetailCommentCell <WCFinderFeedContentTextClickActionDelegate, WCFinderHeadImageViewDelegate, WCFinderContactExt, WCGeneralMonitorCellProtocol, WCFinderPromoteOPLogExt, WCFinderFeedCommentKeywordViewContainer, WCFinderFeedCommentCommonCellAction>
{
    multimap<NSString *, CGRect, WCFinderKeywordEqualId, std::allocator<std::pair<NSString *const, CGRect>>> _keywordsMap; // +0x8
    BOOL _wechatAccountProfileSwitch; // +0x20
    BOOL _isFriendIdentity; // +0x21
    BOOL _isFinderIdentity; // +0x22
    BOOL _enableShowFinder; // +0x23
    BOOL _isCommentClose; // +0x24
    id <WCFinderFeedDetailCommentCellActionDelegate> _delegate; // +0x28
    NSIndexPath * _currentIndexPath; // +0x30
    WCFinderHeadImageView * _avatarImageView; // +0x38
    UILabel * _timeAndIpRegionLabel; // +0x40
    UILabel * _nickNameLabel; // +0x48
    WCFinderFeedContentTextView * _textView; // +0x50
    UIView * _backView; // +0x58
    UIImageView * _finderIconImageView; // +0x60
    UILabel * _additionalInfoLabel; // +0x68
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x70
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x78
    UIView * _hightLightView; // +0x80
    UIButton * _failCommentTips; // +0x88
    double _timeLabelMinWidth; // +0x90
    WCFinderCommentLikeView * _commentLikeView; // +0x98
    UILabel * _authorLikeLabel; // +0xa0
    MMUIButton * _moreActionButton; // +0xa8
    WCFinderFeedSubCommentCellStyleConfig * _config; // +0xb0
    NSMutableArray * _accessibilityElements; // +0xb8
    UIAccessibilityElement * _likeAccessibility; // +0xc0
    WCFinderCommentTranslateView * _translateView; // +0xc8
}
+ (id)getContentWithComment:(id)arg1;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3 config:(id)arg4;
+ (double)textViewMaxWidthWithFullWidth:(double)arg1 config:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void *)keywordsMap;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithComment:(id)arg1 enableShowFinder:(BOOL)arg2 isCommentClose:(BOOL)arg3 isAuthor:(BOOL)arg4;
- (void)updateWithComment:(id)arg1 enableShowFinder:(BOOL)arg2 isCommentClose:(BOOL)arg3 isAuthor:(BOOL)arg4 config:(id)arg5;
- (void)updateAdditionalInfoLabel;
- (void)updateVoiceOver;
- (void)longPress:(id)arg1;
- (void)showCommentMenuView;
- (id)getRealCustomBackgroundColor;
- (void)clickAvatar;
- (void)clickNickname;
- (void)clickRecommendAction;
- (void)updateRecommendView;
- (void)recommendViewDataChange;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)clickFriendLikeAction;
- (void)showViewHighLightByRefComment;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (BOOL)isContentTruncated;
- (void)showRecommendButtonAnimation;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateTopTitleLayout;
- (void)updateInteractionButtonLayout;
- (void)updateLayout;
- (void)onClickLikeComment;
- (void)onClickMoreAction;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextView:(id)arg1 clickKeywordUrl:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(CGRect)arg3;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)_totalAccessibilityLabel;
- (id)findAllExposedKeywordUrls;
- (id)getGeneralMonitorCellBizId;
- (void)updateCommentLikeState;
- (void)onCommentPromotePublicFlagChange:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)timeAndIpRegionLabel;
- (void)setTimeAndIpRegionLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)additionalInfoLabel;
- (void)setAdditionalInfoLabel:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (id)hightLightView;
- (void)setHightLightView:(id)arg1;
- (id)failCommentTips;
- (void)setFailCommentTips:(id)arg1;
- (BOOL)wechatAccountProfileSwitch;
- (void)setWechatAccountProfileSwitch:(BOOL)arg1;
- (BOOL)isFriendIdentity;
- (void)setIsFriendIdentity:(BOOL)arg1;
- (BOOL)isFinderIdentity;
- (void)setIsFinderIdentity:(BOOL)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (double)timeLabelMinWidth;
- (void)setTimeLabelMinWidth:(double)arg1;
- (id)commentLikeView;
- (void)setCommentLikeView:(id)arg1;
- (id)authorLikeLabel;
- (void)setAuthorLikeLabel:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)arg1;
- (id)likeAccessibility;
- (void)setLikeAccessibility:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
