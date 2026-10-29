@interface EcsAliasProfileMsg : NSObject
{
    long long _aliasId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headImgUrl; // +0x18
}
+ (id)makeWithAliasId:(long long)arg1 nickname:(id)arg2 headImgUrl:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)aliasId;
- (void)setAliasId:(long long)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
