@interface WCMegaVideo : NSObject <WCFinderDataItemExt, WCTColumnCoding, PBCoding>
{
    BOOL _isTest; // +0x8
    unsigned long long _videoId; // +0x10
    unsigned long long _createTime; // +0x18
    WCMegaVideoDesc * _desc; // +0x20
    unsigned long long _forwardCount; // +0x28
    unsigned long long _likeCount; // +0x30
    unsigned long long _commentCount; // +0x38
    unsigned long long _favCount; // +0x40
    unsigned long long _friendLikeCount; // +0x48
    unsigned long long _spamFlag; // +0x50
    NSString * _videoNonceId; // +0x58
    unsigned long long _readCount; // +0x60
    NSString * _sessionBuffer; // +0x68
    unsigned long long _favFlag; // +0x70
    unsigned long long _urlValidDuration; // +0x78
    unsigned long long _privateFlag; // +0x80
    NSString * _debugMessage; // +0x88
    unsigned long long _permissionFlag; // +0x90
    WCMegaVideoFinderBusiness * _finder; // +0x98
    unsigned long long _status; // +0xa0
    NSString * _spamWording; // +0xa8
    unsigned long long _bulletCount; // +0xb0
    unsigned long long _likeFlag; // +0xb8
    unsigned long long _warnFlag; // +0xc0
    NSString * _warnWording; // +0xc8
}
+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_forwardCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_favCount;
+ (void)PBArrayAdd_friendLikeCount;
+ (void)PBArrayAdd_spamFlag;
+ (void)PBArrayAdd_videoNonceId;
+ (void)PBArrayAdd_isTest;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_favFlag;
+ (void)PBArrayAdd_urlValidDuration;
+ (void)PBArrayAdd_privateFlag;
+ (void)PBArrayAdd_debugMessage;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_finder;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_spamWording;
+ (void)PBArrayAdd_bulletCount;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_warnFlag;
+ (void)PBArrayAdd_warnWording;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (id)initWithMegaVideo:(id)arg1;
- (id)genMegaVideo;
- (id)videoIdStr;
- (id)media;
- (id)title;
- (BOOL)hadLiked;
- (BOOL)hadFav;
- (BOOL)isPrivate;
- (BOOL)canLike;
- (BOOL)canFav;
- (BOOL)isShareIconEnable;
- (BOOL)isForcePrivate;
- (BOOL)isDangerous;
- (id)dangerousText;
- (id)description;
- (unsigned long long)videoId;
- (void)setVideoId:(unsigned long long)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (unsigned long long)commentCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (unsigned long long)favCount;
- (void)setFavCount:(unsigned long long)arg1;
- (unsigned long long)friendLikeCount;
- (void)setFriendLikeCount:(unsigned long long)arg1;
- (unsigned long long)spamFlag;
- (void)setSpamFlag:(unsigned long long)arg1;
- (id)videoNonceId;
- (void)setVideoNonceId:(id)arg1;
- (BOOL)isTest;
- (void)setIsTest:(BOOL)arg1;
- (unsigned long long)readCount;
- (void)setReadCount:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)favFlag;
- (void)setFavFlag:(unsigned long long)arg1;
- (unsigned long long)urlValidDuration;
- (void)setUrlValidDuration:(unsigned long long)arg1;
- (unsigned long long)privateFlag;
- (void)setPrivateFlag:(unsigned long long)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (unsigned long long)permissionFlag;
- (void)setPermissionFlag:(unsigned long long)arg1;
- (id)finder;
- (void)setFinder:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)spamWording;
- (void)setSpamWording:(id)arg1;
- (unsigned long long)bulletCount;
- (void)setBulletCount:(unsigned long long)arg1;
- (unsigned long long)likeFlag;
- (void)setLikeFlag:(unsigned long long)arg1;
- (unsigned long long)warnFlag;
- (void)setWarnFlag:(unsigned long long)arg1;
- (id)warnWording;
- (void)setWarnWording:(id)arg1;
- (void).cxx_destruct;
@end
