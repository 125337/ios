@interface EcsAliasProfileInfo : NSObject
{
    long long _aliasId; // +0x8
    NSString * _nickname; // +0x10
    NSString * _headImgUrl; // +0x18
    unsigned long long _version; // +0x20
}
+ (id)infoWithAliasId:(long long)arg1 nickname:(id)arg2 headImgUrl:(id)arg3 version:(unsigned long long)arg4;
- (long long)aliasId;
- (id)nickname;
- (id)headImgUrl;
- (unsigned long long)version;
- (void).cxx_destruct;
@end
