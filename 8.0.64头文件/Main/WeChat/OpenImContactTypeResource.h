@interface OpenImContactTypeResource : NSObject <PBCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _language; // +0x10
    NSString * _acctType; // +0x18
    NSMutableDictionary * _wordings; // +0x20
    NSMutableDictionary * _urls; // +0x28
}
+ (void)PBArrayAdd_acctType;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_wordings;
+ (void)PBArrayAdd_urls;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)acctType;
- (void)setAcctType:(id)arg1;
- (id)wordings;
- (void)setWordings:(id)arg1;
- (id)urls;
- (void)setUrls:(id)arg1;
- (void).cxx_destruct;
@end
