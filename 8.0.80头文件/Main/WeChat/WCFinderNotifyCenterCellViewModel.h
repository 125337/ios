@interface WCFinderNotifyCenterCellViewModel : NSObject <WCFinderPrivateAccountExt, WCFinderMentionInteractionExt, WCFinderDataItemExt, WCFinderThanksExt>
{
    BOOL _isAuthor; // +0x8
    BOOL _isFinder; // +0x9
    BOOL _isCommentRelated; // +0xa
    BOOL _canLink; // +0xb
    BOOL _isPureText; // +0xc
    BOOL _isAggregated; // +0xd
    BOOL _shouldShowThanks; // +0xe
    unsigned int _followFlag; // +0x10
    unsigned int _thanked; // +0x14
    id <WCFinderNotifyCenterCellViewModelDelegate> _delegate; // +0x18
    double _cellHeight; // +0x20
    unsigned long long _selectType; // +0x28
    unsigned long long _memberSelectType; // +0x30
    NSString * _headURL; // +0x38
    NSString * _thumbURL; // +0x40
    NSString * _title; // +0x48
    NSString * _suffixTitle; // +0x50
    NSString * _content; // +0x58
    NSString * _timeString; // +0x60
    unsigned long long _type; // +0x68
    NSString * _objectTid; // +0x70
    NSString * _refContent; // +0x78
    NSString * _descriptionText; // +0x80
    unsigned long long _mentionID; // +0x88
    unsigned long long _refCommentID; // +0x90
    unsigned long long _linkType; // +0x98
    NSString * _linkURL; // +0xa0
    NSString * _miniAppName; // +0xa8
    NSString * _feedText; // +0xb0
    NSString * _nonceID; // +0xb8
    NSString * _username; // +0xc0
    WCFinderContact * _contact; // +0xc8
    NSString * _navigationTitle; // +0xd0
    NSArray * _aggregatedHeadURLArray; // +0xd8
    WCFinderMention * _mention; // +0xe0
    NSString * _reuseIdentifier; // +0xe8
    WCFinderAuthInfo * _authInfo; // +0xf0
    long long _uniType; // +0xf8
    unsigned long long _displayStyle; // +0x100
    WCFinderMentionLayoutMetrics * _layoutMetrics; // +0x108
    NSString * _currentFinderUsername; // +0x110
    unsigned long long _supportInteractionAction; // +0x118
    CGSize _cellSize; // +0x120
}
+ (id)placeholderViewModel;
+ (id)notifyCenterCellRegisterInfo;
- (id)initWithMention:(id)arg1 finderUsername:(id)arg2 containerWidth:(double)arg3;
- (id)initWithMention:(id)arg1 finderUsername:(id)arg2 containerWidth:(double)arg3 displayStyle:(unsigned long long)arg4;
- (id)getDisplayContentWithMention:(id)arg1;
- (void)dealloc;
- (void)recalucateCellCacheHeight:(double)arg1;
- (id)username;
- (BOOL)isFollowMentionType;
- (id)getSuffixTitleWithCount:(unsigned long long)arg1;
- (id)getMentionTitleWithMention:(id)arg1 authInfo:(id *)arg2;
- (id)ensureAuthInfo:(id)arg1;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (void)acceptFollowApply;
- (int)finderObjectType;
- (void)setCellSize:(CGSize)arg1;
- (double)cellHeightWithWidth:(double)arg1;
- (void)modThanksState:(BOOL)arg1;
- (void)modCommentLikeStatus:(BOOL)arg1;
- (void)replyMentionCommentWithComment:(id)arg1;
- (unsigned long long)thankTypeForReport;
- (unsigned long long)thankStyleForReport;
- (unsigned long long)thankStatusForReport;
- (BOOL)isFollowMembership;
- (id)followReasonInfo;
- (unsigned long long)followReasonTypeForReport;
- (BOOL)isValidCommentMention;
- (BOOL)isValidBulletCommentMention;
- (unsigned long long)commentLikeIconTypeForReport;
- (void)updateMentionCommentLikeStatus:(BOOL)arg1;
- (void)setCommentInvalid;
- (BOOL)shouldShowThanks;
- (BOOL)shouldShowCommentInteraction;
- (id)commentReplyIconName;
- (unsigned long long)relationshipType;
- (unsigned long long)followApplyState;
- (BOOL)followButtonShouldShow;
- (BOOL)ignoreIconShouldShow;
- (id)titleModel;
- (void)onPrivateAccountFollowApplyStateChanged:(BOOL)arg1;
- (void)onFinderMention:(id)arg1 commentLikeStatusChanged:(BOOL)arg2;
- (void)onFinderMention:(id)arg1 thankedStatusChanged:(BOOL)arg2;
- (void)onFinderMentionReplyCommentSuccess:(id)arg1;
- (void)onFinderMention:(id)arg1 replyCommentFailWithErrorMsg:(id)arg2;
- (void)onFinderMention:(id)arg1 silentStateChangedTo:(BOOL)arg2;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (unsigned long long)selectType;
- (void)setSelectType:(unsigned long long)arg1;
- (unsigned long long)memberSelectType;
- (void)setMemberSelectType:(unsigned long long)arg1;
- (id)headURL;
- (id)thumbURL;
- (id)title;
- (id)suffixTitle;
- (id)content;
- (id)timeString;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)objectTid;
- (BOOL)isAuthor;
- (BOOL)isFinder;
- (id)refContent;
- (id)descriptionText;
- (unsigned long long)mentionID;
- (unsigned long long)refCommentID;
- (BOOL)isCommentRelated;
- (BOOL)canLink;
- (unsigned long long)linkType;
- (id)linkURL;
- (id)miniAppName;
- (BOOL)isPureText;
- (id)feedText;
- (id)nonceID;
- (void)setUsername:(id)arg1;
- (id)contact;
- (id)navigationTitle;
- (BOOL)isAggregated;
- (id)aggregatedHeadURLArray;
- (id)mention;
- (id)reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (CGSize)cellSize;
- (long long)uniType;
- (void)setUniType:(long long)arg1;
- (unsigned int)followFlag;
- (void)setFollowFlag:(unsigned int)arg1;
- (void)setShouldShowThanks:(BOOL)arg1;
- (unsigned int)thanked;
- (void)setThanked:(unsigned int)arg1;
- (unsigned long long)displayStyle;
- (id)layoutMetrics;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (unsigned long long)supportInteractionAction;
- (void)setSupportInteractionAction:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
