@interface BrandTimelineMsgDBDigestInfo : MMObject
{
    unsigned int _flag; // +0x8
    NSMutableArray * _items; // +0x10
    NSString * _strategyInfo; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)initWithDigestInfo:(id)arg1;
- (id)initFromJson:(id)arg1;
- (void)internalInit:(id)arg1;
- (id)toJson;
- (id)genAttrDigest:(BOOL)arg1;
- (id)genReportDigest;
- (id)items;
- (void)setItems:(id)arg1;
- (id)strategyInfo;
- (void)setStrategyInfo:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

