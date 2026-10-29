@interface SEWCUploadTask : NSObject <NSCoding>
{
    NSString * serverID; // +0x8
    NSString * clientID; // +0x10
    BOOL isPrivate; // +0x18
    NSMutableArray * sharedGroupIDS; // +0x20
    long long type; // +0x28
    NSString * title; // +0x30
    NSString * desc; // +0x38
    NSString * contentDesc; // +0x40
    long long contentDescShowType; // +0x48
    long long contentDescScene; // +0x50
    NSMutableArray * withUserList; // +0x58
    NSMutableArray * blackUserList; // +0x60
    NSMutableArray * mediaList; // +0x68
    SnsObject * snsObj; // +0x70
    BOOL isSyncToWeibo; // +0x78
    BOOL isSyncToFacebook; // +0x79
    BOOL isSyncToTwitter; // +0x7a
    BOOL isSyncToQZone; // +0x7b
    NSString * linkUrl; // +0x80
    NSString * statisticsData; // +0x88
    NSString * sourceUserName; // +0x90
    NSString * sourceNickName; // +0x98
    NSDate * createTime; // +0xa0
    long long uploadResult; // +0xa8
    long long BGImgSetType; // +0xb0
    BOOL isUploadFailed; // +0xb8
    long long postSource; // +0xc0
    NSString * twitterOAuthToken; // +0xc8
    NSString * twitterOAuthTokenSecret; // +0xd0
    BOOL isDeleted; // +0xd8
    WCLocationInfo * locationInfo; // +0xe0
    NSMutableArray * sharedGroupIDs; // +0xe8
    MyWCDB * wcdb; // +0xf0
}
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)convert2WCUploadTask;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)sharedGroupIDs;
- (void)setSharedGroupIDs:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)withUserList;
- (void)setWithUserList:(id)arg1;
- (id)blackUserList;
- (void)setBlackUserList:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)snsObj;
- (void)setSnsObj:(id)arg1;
- (id)contentDesc;
- (void)setContentDesc:(id)arg1;
- (long long)contentDescShowType;
- (void)setContentDescShowType:(long long)arg1;
- (long long)contentDescScene;
- (void)setContentDescScene:(long long)arg1;
- (BOOL)isSyncToWeibo;
- (void)setIsSyncToWeibo:(BOOL)arg1;
- (BOOL)isSyncToFacebook;
- (void)setIsSyncToFacebook:(BOOL)arg1;
- (BOOL)isSyncToTwitter;
- (void)setIsSyncToTwitter:(BOOL)arg1;
- (BOOL)isSyncToQZone;
- (void)setIsSyncToQZone:(BOOL)arg1;
- (id)linkUrl;
- (void)setLinkUrl:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (long long)uploadResult;
- (void)setUploadResult:(long long)arg1;
- (long long)BGImgSetType;
- (void)setBGImgSetType:(long long)arg1;
- (BOOL)isUploadFailed;
- (void)setIsUploadFailed:(BOOL)arg1;
- (long long)postSource;
- (void)setPostSource:(long long)arg1;
- (id)statisticsData;
- (void)setStatisticsData:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)sourceNickName;
- (void)setSourceNickName:(id)arg1;
- (id)twitterOAuthToken;
- (void)setTwitterOAuthToken:(id)arg1;
- (id)twitterOAuthTokenSecret;
- (void)setTwitterOAuthTokenSecret:(id)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)wcdb;
- (void)setWcdb:(id)arg1;
- (void).cxx_destruct;
@end
