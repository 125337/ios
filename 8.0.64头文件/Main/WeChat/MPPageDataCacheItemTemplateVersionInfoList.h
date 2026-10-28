@interface MPPageDataCacheItemTemplateVersionInfoList : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray * _templateVersionInfoList; // +0x8
}
+ (void)PBArrayAdd_templateVersionInfoList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)templateVersionInfoList;
- (void)setTemplateVersionInfoList:(id)arg1;
- (void).cxx_destruct;
@end
