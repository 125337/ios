@interface Finder_Data : NSObject
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _logo_url; // +0x18
    NSNumber * _finder_uin; // +0x20
}
+ (id)makeWithUsername:(id)arg1 nickname:(id)arg2 logo_url:(id)arg3 finder_uin:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)logo_url;
- (void)setLogo_url:(id)arg1;
- (id)finder_uin;
- (void)setFinder_uin:(id)arg1;
- (void).cxx_destruct;
@end

