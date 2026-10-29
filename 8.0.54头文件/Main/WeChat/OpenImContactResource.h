@interface OpenImContactResource : NSObject <PBCoding>
{
    unsigned int _funcFlag; // +0x8
    unsigned int _updateTime; // +0xc
    NSString * _acctType; // +0x10
    NSString * _language; // +0x18
    NSMutableDictionary * _wordings; // +0x20
    NSMutableDictionary * _urls; // +0x28
    NSMutableDictionary * _woringResources; // +0x30
}
+ (void)PBArrayAdd_acctType;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_urls;
+ (void)PBArrayAdd_woringResources;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)getWoringResourcesDescWithArrSubWoring:(id)arg1;
- (id)acctType;
- (void)setAcctType:(id)arg1;
- (unsigned int)funcFlag;
- (void)setFuncFlag:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (id)urls;
- (void)setUrls:(id)arg1;
- (id)woringResources;
- (void)setWoringResources:(id)arg1;
- (void).cxx_destruct;
@end

