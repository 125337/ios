@interface MMWebOptimPrefetchResInfo : MMObject <PBCoding>
{
    unsigned int _opType; // +0x8
    NSString * _domain; // +0x10
    NSString * _path; // +0x18
    NSString * _manifestUrl; // +0x20
    NSString * _referDomain; // +0x28
    NSData * _hashId; // +0x30
    NSString * _appId; // +0x38
    NSString * _userName; // +0x40
    NSData * _businessData; // +0x48
}
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_manifestUrl;
+ (void)PBArrayAdd_referDomain;
+ (void)PBArrayAdd_hashId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_businessData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)manifestUrl;
- (void)setManifestUrl:(id)arg1;
- (id)referDomain;
- (void)setReferDomain:(id)arg1;
- (id)hashId;
- (void)setHashId:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
