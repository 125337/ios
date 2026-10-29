@interface WCFinderWechatMentionCellViewModel : NSObject <WCFinderMentionInteractionExt, WCFinderDataItemExt>
{
    BOOL _isAuthor; // +0x8
    BOOL _isFinder; // +0x9
    BOOL _isCommentRelated; // +0xa
    BOOL _isPureText; // +0xb
    BOOL _isAggregated; // +0xc
    BOOL _magicPlayed; // +0xd
    BOOL _showFollowButton; // +0xe
    unsigned int _followMyFirstLikeFlag; // +0x10
    NSString * _headURL; // +0x18
    NSString * _thumbURL; // +0x20
    NSString * _title; // +0x28
    NSString * _content; // +0x30
    NSString * _timeString; // +0x38
    unsigned long long _type; // +0x40
    NSString * _objectTid; // +0x48
    NSString * _refContent; // +0x50
    NSString * _descriptionText; // +0x58
    unsigned long long _mentionID; // +0x60
    unsigned long long _refCommentID; // +0x68
    NSString * _feedText; // +0x70
    NSString * _nonceID; // +0x78
    NSString * _username; // +0x80
    WCFinderContact * _contact; // +0x88
    NSArray * _aggregatedHeadURLArray; // +0x90
    NSString * _suffixTitle; // +0x98
    WCFinderMention * _mention; // +0xa0
    NSString * _accessibilityString; // +0xa8
    WCFinderAuthInfo * _authInfo; // +0xb0
    long long _uniType; // +0xb8
    id <WCFinderWechatMentionCellViewModelDelegate> _delegate; // +0xc0
    unsigned long long _displayStyle; // +0xc8
    WCFinderMentionLayoutMetrics * _layoutMetrics; // +0xd0
    NSString * _showTitleString; // +0xd8
    NSString * _replyNickname; // +0xe0
    CGSize _cellSize; // +0xe8
}
- (id)initWithMention:(id)arg1 cacheContainerWidth:(double)arg2;
- (id)initWithMention:(id)arg1 cacheContainerWidth:(double)arg2 displayStyle:(unsigned long long)arg3;
- (void)dealloc;
- (void)setCellSize:(CGSize)arg1;
- (double)cellHeightWithWidth:(double)arg1;
- (id)displayContentForMention:(id)arg1 originContent:(id)arg2 isCommentRelated:(BOOL)arg3;
- (BOOL)supportShowThankSharingTips;
- (BOOL)canShowMagicAnimation;
- (unsigned long long)magicAnimationStyle;
- (id)magicAnimationIconPath;
- (id)titleModel;
- (id)getMentionedContentWithMention:(id)arg1;
- (id)getMentionTitleWithMention:(id)arg1 authInfo:(id *)arg2;
- (id)ensureAuthInfo:(id)arg1;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (id)getDisplayNameWithContact:(id)arg1;
- (id)showTitleString;
- (id)displayContentString;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (id)mentionAccessibilityLabel;
- (unsigned long long)thankTypeForReport;
- (unsigned long long)thankStyleForReport;
- (void)modCommentLikeStatus:(BOOL)arg1;
- (void)replyMentionCommentWithComment:(id)arg1;
- (BOOL)followButtonShouldShow;
- (BOOL)ignoreIconShouldShow;
- (unsigned long long)userTagType;
- (BOOL)isInvalidCommentMention;
- (BOOL)isValidCommentMention;
- (BOOL)isValidBulletCommentMention;
- (unsigned long long)commentLikeIconTypeForReport;
- (BOOL)shouldShowCommentInteraction;
- (id)commentReplyIconName;
- (void)updateMentionCommentLikeStatus:(BOOL)arg1;
- (void)setCommentInvalid;
- (void)onFinderMention:(id)arg1 commentLikeStatusChanged:(BOOL)arg2;
- (void)onFinderMentionReplyCommentSuccess:(id)arg1;
- (void)onFinderMention:(id)arg1 replyCommentFailWithErrorMsg:(id)arg2;
- (void)onFinderMention:(id)arg1 silentStateChangedTo:(BOOL)arg2;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (CGSize)cellSize;
- (id)headURL;
- (id)thumbURL;
- (id)title;
- (id)content;
- (id)timeString;
- (unsigned long long)type;
- (id)objectTid;
- (BOOL)isAuthor;
- (BOOL)isFinder;
- (id)refContent;
- (id)descriptionText;
- (unsigned long long)mentionID;
- (unsigned long long)refCommentID;
- (BOOL)isCommentRelated;
- (BOOL)isPureText;
- (id)feedText;
- (id)nonceID;
- (id)username;
- (id)contact;
- (BOOL)isAggregated;
- (id)aggregatedHeadURLArray;
- (id)suffixTitle;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)accessibilityString;
- (void)setAccessibilityString:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (long long)uniType;
- (void)setUniType:(long long)arg1;
- (unsigned int)followMyFirstLikeFlag;
- (void)setFollowMyFirstLikeFlag:(unsigned int)arg1;
- (BOOL)magicPlayed;
- (void)setMagicPlayed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)displayStyle;
- (id)layoutMetrics;
- (void)setShowTitleString:(id)arg1;
- (id)replyNickname;
- (void)setReplyNickname:(id)arg1;
- (BOOL)showFollowButton;
- (void)setShowFollowButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
