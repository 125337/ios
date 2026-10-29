@interface GameCenterPromotedGamesFeedsItem : MMObject <PBCoding>
{
    NSArray * _usernameList; // +0x8
    NSString * _detail; // +0x10
    NSArray * _nicknameList; // +0x18
}
+ (void)PBArrayAdd_usernameList;
+ (void)PBArrayAdd_detail;
+ (void)PBArrayAdd_nicknameList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)usernameList;
- (void)setUsernameList:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)nicknameList;
- (void)setNicknameList:(id)arg1;
- (void).cxx_destruct;
@end

