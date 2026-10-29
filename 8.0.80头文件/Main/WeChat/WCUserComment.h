@interface WCUserComment : NSObject <NSCoding, PBCoding>
{
    NSString * m_cpKeyForComment; // +0x8
    BOOL m_isCommentUnsafe; // +0x10
    BOOL isHBComment; // +0x11
    BOOL _bDeleted; // +0x12
    BOOL _deletedByFeedOwner; // +0x13
    BOOL _isCommentUnsafe; // +0x14
    BOOL _isAdvertiserComment; // +0x15
    BOOL _isRefAdvertiserComment; // +0x16
    BOOL _isAdPreferInfo; // +0x17
    int _source; // +0x18
    int _type; // +0x1c
    unsigned int _createTime; // +0x20
    int _isLocalAdded; // +0x24
    int _isRichText; // +0x28
    unsigned int _deletedByFeedOwnerTimeStamp; // +0x2c
    int _commentFlag; // +0x30
    unsigned int _adAdvertiserFirstCommentDisplayTime; // +0x34
    NSString * contentPattern; // +0x38
    NSString * _commentID; // +0x40
    NSString * _comment64ID; // +0x48
    NSString * _username; // +0x50
    NSString * _nickname; // +0x58
    NSString * _content; // +0x60
    NSString * _refCommentID; // +0x68
    NSString * _refComment64ID; // +0x70
    NSString * _refUserName; // +0x78
    NSData * _remindFriendsInfoData; // +0x80
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x88
    WCMediaItem * _snsMediaItem; // +0x90
    WCAdSnsCommentExtInfo * _adExtInfo; // +0x98
    long long _springWishFlag; // +0xa0
    NSString * _springClientId; // +0xa8
    long long _messgaeRelevanceType; // +0xb0
    NSString * _cpKeyForComment; // +0xb8
    NSString * _dataItemUsrName; // +0xc0
    NSString * _dataItemNickName; // +0xc8
    NSString * _adPreferNickName; // +0xd0
    NSString * _adPreferHeadUrl; // +0xd8
    NSString * _discoveryContent; // +0xe0
    WCMomentsDragonCommentInfo * _dragonCommentInfo; // +0xe8
    long long _springFestivalYear; // +0xf0
}
+ (void)PBArrayAdd_commentID;
+ (void)PBArrayAdd_comment64ID;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_isLocalAdded;
+ (void)PBArrayAdd_refCommentID;
+ (void)PBArrayAdd_refComment64ID;
+ (void)PBArrayAdd_refUserName;
+ (void)PBArrayAdd_bDeleted;
+ (void)PBArrayAdd_commentFlag;
+ (void)PBArrayAdd_remindFriendsInfoData;
+ (void)PBArrayAdd_isAdvertiserComment;
+ (void)PBArrayAdd_isRefAdvertiserComment;
+ (void)PBArrayAdd_dataItemUsrName;
+ (void)PBArrayAdd_dataItemNickName;
+ (void)PBArrayAdd_adPreferNickName;
+ (void)PBArrayAdd_adPreferHeadUrl;
+ (void)PBArrayAdd_isAdPreferInfo;
+ (void)PBArrayAdd_adAdvertiserFirstCommentDisplayTime;
+ (void)PBArrayAdd_snsEmojiInfoObj;
+ (void)PBArrayAdd_deletedByFeedOwner;
+ (void)PBArrayAdd_deletedByFeedOwnerTimeStamp;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_adExtInfo;
+ (void)PBArrayAdd_dragonCommentInfo;
+ (void)PBArrayAdd_springFestivalYear;
+ (void)PBArrayAdd_snsMediaItem;
+ (void)PBArrayAdd_springClientId;
+ (void)initialize;
+ (id)deleteByFeedOwnerTips;
+ (id)fromCommentUploadItem:(id)arg1;
+ (id)fromServerObj:(id)arg1;
+ (id)fromServerCommentObj:(id)arg1;
+ (BOOL)dynamicCanDeleteOthersComment;
+ (unsigned int)dynamicDeleteOthersCommentTipsExpiredTime;
- (id)getPBPropertyTable;
- (id)contentPattern;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCopyingEnabled;
- (BOOL)mentionSelfPost;
- (BOOL)isMessageRelatedToMeFromDB;
- (BOOL)isAtedAdvertiserComment;
- (BOOL)isAtedFriendComment;
- (BOOL)isCommentCanFold;
- (BOOL)isAdBossFirstComment;
- (BOOL)isAdBossFirstLike;
- (BOOL)isEmotionComment;
- (BOOL)isImageComment;
- (BOOL)canDeleteWithDataItem:(id)arg1;
- (id)fetchAdFirstCommentQueryForName:(id)arg1;
- (id)keyPaths;
- (id)descriptionForKeyPaths;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)username;
- (id)nickname;
- (long long)compare:(id)arg1;
- (long long)compareTime:(id)arg1;
- (id)cpKeyForComment;
- (BOOL)isCommentUnsafe;
- (BOOL)isCommentOfMine;
- (long long)commentType;
- (BOOL)isDragonComment;
- (BOOL)isDragonGreeting;
- (BOOL)showsDragonBackground;
- (BOOL)isSpringGreeting;
- (BOOL)showsSpringBackground;
- (void)setContentPattern:(id)arg1;
- (BOOL)isHBComment;
- (void)setIsHBComment:(BOOL)arg1;
- (id)commentID;
- (void)setCommentID:(id)arg1;
- (id)comment64ID;
- (void)setComment64ID:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setNickname:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (int)isLocalAdded;
- (void)setIsLocalAdded:(int)arg1;
- (id)refCommentID;
- (void)setRefCommentID:(id)arg1;
- (id)refComment64ID;
- (void)setRefComment64ID:(id)arg1;
- (id)refUserName;
- (void)setRefUserName:(id)arg1;
- (int)isRichText;
- (void)setIsRichText:(int)arg1;
- (BOOL)bDeleted;
- (void)setBDeleted:(BOOL)arg1;
- (id)remindFriendsInfoData;
- (void)setRemindFriendsInfoData:(id)arg1;
- (id)snsEmojiInfoObj;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (id)snsMediaItem;
- (void)setSnsMediaItem:(id)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (long long)springWishFlag;
- (void)setSpringWishFlag:(long long)arg1;
- (id)springClientId;
- (void)setSpringClientId:(id)arg1;
- (BOOL)deletedByFeedOwner;
- (void)setDeletedByFeedOwner:(BOOL)arg1;
- (unsigned int)deletedByFeedOwnerTimeStamp;
- (void)setDeletedByFeedOwnerTimeStamp:(unsigned int)arg1;
- (long long)messgaeRelevanceType;
- (void)setMessgaeRelevanceType:(long long)arg1;
- (void)setCpKeyForComment:(id)arg1;
- (void)setIsCommentUnsafe:(BOOL)arg1;
- (BOOL)isAdvertiserComment;
- (void)setIsAdvertiserComment:(BOOL)arg1;
- (BOOL)isRefAdvertiserComment;
- (void)setIsRefAdvertiserComment:(BOOL)arg1;
- (id)dataItemUsrName;
- (void)setDataItemUsrName:(id)arg1;
- (id)dataItemNickName;
- (void)setDataItemNickName:(id)arg1;
- (int)commentFlag;
- (void)setCommentFlag:(int)arg1;
- (BOOL)isAdPreferInfo;
- (void)setIsAdPreferInfo:(BOOL)arg1;
- (id)adPreferNickName;
- (void)setAdPreferNickName:(id)arg1;
- (id)adPreferHeadUrl;
- (void)setAdPreferHeadUrl:(id)arg1;
- (unsigned int)adAdvertiserFirstCommentDisplayTime;
- (void)setAdAdvertiserFirstCommentDisplayTime:(unsigned int)arg1;
- (id)discoveryContent;
- (void)setDiscoveryContent:(id)arg1;
- (id)dragonCommentInfo;
- (void)setDragonCommentInfo:(id)arg1;
- (long long)springFestivalYear;
- (void)setSpringFestivalYear:(long long)arg1;
- (void).cxx_destruct;
@end
