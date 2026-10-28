@interface WAWeAppBindJumpToAppInfo : NSObject <PBCoding>
{
    NSString * _jumpToAppID; // +0x8
    NSString * _jumpToUserName; // +0x10
}
+ (void)PBArrayAdd_jumpToAppID;
+ (void)PBArrayAdd_jumpToUserName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)jumpToAppID;
- (void)setJumpToAppID:(id)arg1;
- (id)jumpToUserName;
- (void)setJumpToUserName:(id)arg1;
- (void).cxx_destruct;
@end
