@interface WCFinderUserMessage : NSObject <PBCoding>
{
    unsigned long long _originFansCount; // +0x8
    unsigned long long _followingCount; // +0x10
    unsigned long long _addFansCount; // +0x18
}
+ (void)PBArrayAdd_originFansCount;
+ (void)PBArrayAdd_followingCount;
+ (void)PBArrayAdd_addFansCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)originFansCount;
- (void)setOriginFansCount:(unsigned long long)arg1;
- (unsigned long long)followingCount;
- (void)setFollowingCount:(unsigned long long)arg1;
- (unsigned long long)addFansCount;
- (void)setAddFansCount:(unsigned long long)arg1;
@end

