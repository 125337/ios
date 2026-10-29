@interface EcsAliasProfileNewAliasResult : NSObject
{
    long long _aliasId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headImgUrl; // +0x18
}
+ (id)resultWithAliasId:(long long)arg1 nickname:(id)arg2 headImgUrl:(id)arg3;
- (long long)aliasId;
- (id)nickname;
- (id)headImgUrl;
- (void).cxx_destruct;
@end
