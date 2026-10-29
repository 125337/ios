@interface MMWebOptimPrefetchDomainInfo : MMObject <PBCoding>
{
    unsigned int _openType; // +0x8
    NSString * _domain; // +0x10
    NSMutableDictionary * _dicResInfo; // +0x18
}
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_dicResInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)dicResInfo;
- (void)setDicResInfo:(id)arg1;
- (unsigned int)openType;
- (void)setOpenType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
