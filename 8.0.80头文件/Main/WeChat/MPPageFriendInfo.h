@interface MPPageFriendInfo : MMObject <PBCoding>
{
    unsigned int _friendReadCount; // +0x8
    NSString * _friendReadCountStr; // +0x10
}
+ (void)PBArrayAdd_friendReadCountStr;
+ (void)PBArrayAdd_friendReadCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)friendReadCountStr;
- (void)setFriendReadCountStr:(id)arg1;
- (unsigned int)friendReadCount;
- (void)setFriendReadCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
