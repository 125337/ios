@interface WCFinderLikeInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _unRead; // +0x8
    BOOL _isSelfPosted; // +0x9
    BOOL _isAuthorViewer; // +0xa
    unsigned int _followFlag; // +0xc
    unsigned int _memberFlag; // +0x10
    unsigned int _orderCount; // +0x14
    unsigned int _interactionCount; // +0x18
    unsigned int _thankFlag; // +0x1c
    NSString * _nickName; // +0x20
    NSString * _headImgUrl; // +0x28
    unsigned long long _likeId; // +0x30
    unsigned long long _likeFlag; // +0x38
    unsigned long long _refuseFlag; // +0x40
    NSString * _wxUsername; // +0x48
    NSString * _displayName; // +0x50
    NSString * _feedID; // +0x58
    FinderLikeInfo * _info; // +0x60
    long long _comboLikeCount; // +0x68
}
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_likeId;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_refuseFlag;
+ (void)PBArrayAdd_wxUsername;
+ (void)PBArrayAdd_unRead;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)likeInfoWithFinderLikeInfo:(id)arg1 tid:(id)arg2;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)relationshipTypeForReport;
- (unsigned int)relationshipIconTypeForReport;
- (id)description;
- (id)displayName;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (unsigned long long)likeId;
- (void)setLikeId:(unsigned long long)arg1;
- (unsigned long long)likeFlag;
- (void)setLikeFlag:(unsigned long long)arg1;
- (unsigned long long)refuseFlag;
- (void)setRefuseFlag:(unsigned long long)arg1;
- (id)wxUsername;
- (void)setWxUsername:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (BOOL)unRead;
- (void)setUnRead:(BOOL)arg1;
- (unsigned int)followFlag;
- (void)setFollowFlag:(unsigned int)arg1;
- (unsigned int)memberFlag;
- (void)setMemberFlag:(unsigned int)arg1;
- (unsigned int)orderCount;
- (void)setOrderCount:(unsigned int)arg1;
- (unsigned int)interactionCount;
- (void)setInteractionCount:(unsigned int)arg1;
- (unsigned int)thankFlag;
- (void)setThankFlag:(unsigned int)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isSelfPosted;
- (void)setIsSelfPosted:(BOOL)arg1;
- (BOOL)isAuthorViewer;
- (void)setIsAuthorViewer:(BOOL)arg1;
- (long long)comboLikeCount;
- (void)setComboLikeCount:(long long)arg1;
- (void).cxx_destruct;
@end
