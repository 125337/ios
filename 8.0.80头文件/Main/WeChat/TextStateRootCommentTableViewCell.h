@interface TextStateRootCommentTableViewCell : TextStateBaseCommentCell <WCFinderFeedContentTextClickActionDelegate, ILinkEventExt, WCFinderHeadImageViewDelegate>
{
    BOOL _profileSwitch; // +0x8
    BOOL _isFriendIdentity; // +0x9
    BOOL _isFinderIdentity; // +0xa
    BOOL _isSelfPost; // +0xb
    id <TextStateRootCommentTableViewCellDelegate> _delegate; // +0x10
    UIColor * _themeColor; // +0x18
    WCFinderFeedContentTextView * _textView; // +0x20
    WCFinderComment * _comment; // +0x28
    WCCommentLikeView * _dislikeView; // +0x30
    UITapGestureRecognizer * _replayTapGestureRecognizer; // +0x38
    UIButton * _failCommentTips; // +0x40
    UIView * _refContentBackgroundView; // +0x48
    WCFinderFeedContentTextView * _refContentTextView; // +0x50
    UIView * _refContentLineView; // +0x58
    MMUIButton * _moreActionButton; // +0x60
    FinderUniCommentMediaView * _mediaView; // +0x68
    double _cachedLayoutWidth; // +0x70
}
+ (BOOL)showMediaWithComment:(id)arg1;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3 isAuthorView:(BOOL)arg4;
+ (CGSize)mediaViewSize;
- (id)defaultThemeColor;
- (id)authorColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isContentTruncated;
- (void)setThemeColor:(id)arg1;
- (void)setupUI;
- (void)setUpRefContentView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithModel:(id)arg1 width:(double)arg2 isAuthorView:(BOOL)arg3 isCommentClose:(BOOL)arg4 enableShowFinder:(BOOL)arg5 isSelfPost:(BOOL)arg6;
- (void)adjustUILayout;
- (void)layoutSubviews;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (id)backgroundColorInNormalMode;
- (void)prepareForReuse;
- (void)showViewHighLightByRefComment;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onClickLikeComment;
- (void)onClickDislikeComment;
- (void)onClickMoreAction;
- (void)clickAvatar;
- (void)clickRetryCommentAction;
- (void)longPress:(id)arg1;
- (void)showCommentMenuView;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)onFeedContentTextClick:(id)arg1 withRect:(CGRect)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(CGRect)arg3;
- (id)accessibilityLabel;
- (id)mediaView;
- (id)dislikeView;
- (void)onTapTextStateViewForCard;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)themeColor;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (void)setDislikeView:(id)arg1;
- (id)replayTapGestureRecognizer;
- (void)setReplayTapGestureRecognizer:(id)arg1;
- (id)failCommentTips;
- (void)setFailCommentTips:(id)arg1;
- (id)refContentBackgroundView;
- (void)setRefContentBackgroundView:(id)arg1;
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
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (void)setMediaView:(id)arg1;
- (double)cachedLayoutWidth;
- (void)setCachedLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
