@interface WASessionNotifyCloseItem : NSObject <PBCoding>
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _headImageURL; // +0x18
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImageURL;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (void).cxx_destruct;
@end

