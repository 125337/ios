@interface WCFinderFavInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _thankFlag; // +0x8
    unsigned int _followFlag; // +0xc
    unsigned int _memberFlag; // +0x10
    unsigned int _orderCount; // +0x14
    unsigned int _interactionCount; // +0x18
    NSString * _nickName; // +0x20
    NSString * _headImgUrl; // +0x28
    NSString * _favId; // +0x30
    NSString * _username; // +0x38
    NSString * _displayName; // +0x40
    NSString * _feedID; // +0x48
    FinderFavInfo * _info; // +0x50
}
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_username;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
+ (id)favInfoWithFinderFavInfo:(id)arg1 tid:(id)arg2;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (unsigned int)relationshipTypeForReport;
- (unsigned int)relationshipIconTypeForReport;
- (id)displayName;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)favId;
- (void)setFavId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)followFlag;
- (void)setFollowFlag:(unsigned int)arg1;
- (unsigned int)memberFlag;
- (void)setMemberFlag:(unsigned int)arg1;
- (unsigned int)orderCount;
- (void)setOrderCount:(unsigned int)arg1;
- (unsigned int)interactionCount;
- (void)setInteractionCount:(unsigned int)arg1;
- (BOOL)thankFlag;
- (void)setThankFlag:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end
