@interface WCFinderLivePersonalCenterWechatMentionCellVM : NSObject
{
    BOOL _isAuthor; // +0x8
    BOOL _isFinder; // +0x9
    BOOL _showFollowButton; // +0xa
    NSString * _headURL; // +0x10
    NSString * _thumbURL; // +0x18
    NSString * _title; // +0x20
    NSString * _content; // +0x28
    NSString * _timeString; // +0x30
    unsigned long long _type; // +0x38
    NSString * _objectTid; // +0x40
    NSString * _descriptionText; // +0x48
    unsigned long long _mentionID; // +0x50
    NSString * _feedText; // +0x58
    NSString * _nonceID; // +0x60
    NSString * _username; // +0x68
    WCFinderContact * _contact; // +0x70
    NSString * _suffixTitle; // +0x78
    WCFinderMention * _mention; // +0x80
    NSString * _accessibilityString; // +0x88
    WCFinderAuthInfo * _authInfo; // +0x90
    long long _uniType; // +0x98
    id <WCFinderLivePersonalCenterWechatMentionCellVMDelegate> _delegate; // +0xa0
    CGSize _cellSize; // +0xa8
}
- (id)initWithMention:(id)arg1 cacheContainerWidth:(double)arg2;
- (void)setCellSize:(CGSize)arg1;
- (double)cellHeightWithWidth:(double)arg1;
- (id)displayContentForMention:(id)arg1 originContent:(id)arg2;
- (id)titleModel;
- (id)getMentionTitleWithMention:(id)arg1 authInfo:(id *)arg2;
- (id)ensureAuthInfo:(id)arg1;
- (id)getDisplayNameWithUsername:(id)arg1 nickName:(id)arg2;
- (unsigned long long)thankTypeForReport;
- (unsigned long long)thankStyleForReport;
- (BOOL)followButtonShouldShow;
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
- (id)descriptionText;
- (unsigned long long)mentionID;
- (id)feedText;
- (id)nonceID;
- (id)username;
- (id)contact;
- (id)suffixTitle;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)accessibilityString;
- (void)setAccessibilityString:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (long long)uniType;
- (void)setUniType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showFollowButton;
- (void)setShowFollowButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
