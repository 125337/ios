@interface TextStateSubCommentTableViewCell : TextStateBaseCommentCell <WCFinderFeedContentTextClickActionDelegate, WCFinderHeadImageViewDelegate, WCFinderContactExt>
{
    BOOL _isLastSectionCell; // +0x8
    BOOL _wechatAccountProfileSwitch; // +0x9
    BOOL _isFriendIdentity; // +0xa
    BOOL _isFinderIdentity; // +0xb
    BOOL _isSelfPost; // +0xc
    id <TextStateSubCommentTableViewCellActionDelegate> _delegate; // +0x10
    NSIndexPath * _currentIndexPath; // +0x18
    UIColor * _themeColor; // +0x20
    WCFinderFeedContentTextView * _textView; // +0x28
    WCFinderComment * _comment; // +0x30
    UIView * _backView; // +0x38
    UIImageView * _finderIconImageView; // +0x40
    UIButton * _failCommentTips; // +0x48
    FinderUniCommentMediaView * _mediaView; // +0x50
}
+ (BOOL)showMediaWithComment:(id)arg1;
+ (id)getContentWithComment:(id)arg1;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3;
+ (CGSize)mediaViewSize;
- (id)defaultThemeColor;
- (id)authorColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setThemeColor:(id)arg1;
- (CGSize)avatarSize;
- (void)setupUI;
- (id)currentLinkColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateBottomViewLayout;
- (void)updateWithComment:(id)arg1 enableShowFinder:(BOOL)arg2 isAuthor:(BOOL)arg3;
- (void)longPress:(id)arg1;
- (void)showCommentMenuView;
- (id)backgroundColorInNormalMode;
- (void)clickAvatar;
- (void)showViewHighLightByRefComment;
- (void)updateAvatarCornerWithAuthorFlag:(BOOL)arg1;
- (BOOL)isContentTruncated;
- (void)onFinderContactUpdate:(id)arg1;
- (void)updateTopTitleLayout;
- (void)onClickLikeComment;
- (void)onClickDislikeComment;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(CGRect)arg3;
- (id)accessibilityLabel;
- (id)mediaView;
- (void)onTapTextStateViewForCard;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentIndexPath;
- (void)setCurrentIndexPath:(id)arg1;
- (id)themeColor;
- (BOOL)isLastSectionCell;
- (void)setIsLastSectionCell:(BOOL)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)failCommentTips;
- (void)setFailCommentTips:(id)arg1;
- (BOOL)wechatAccountProfileSwitch;
- (void)setWechatAccountProfileSwitch:(BOOL)arg1;
- (BOOL)isFriendIdentity;
- (void)setIsFriendIdentity:(BOOL)arg1;
- (BOOL)isFinderIdentity;
- (void)setIsFinderIdentity:(BOOL)arg1;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end
