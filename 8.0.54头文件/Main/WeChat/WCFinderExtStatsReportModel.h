@interface WCFinderExtStatsReportModel : WCFinderExtStatsReportBaseModel
{
    NSString * _searchData; // +0x20
    NSArray * _resultList; // +0x28
    NSNumber * _fromTab; // +0x30
    NSNumber * _toTab; // +0x38
    NSNumber * _value; // +0x40
    NSString * _strValue; // +0x48
}
- (id)generateOtherKVsDictionary;
- (id)searchData;
- (void)setSearchData:(id)arg1;
- (id)resultList;
- (void)setResultList:(id)arg1;
- (id)fromTab;
- (void)setFromTab:(id)arg1;
- (id)toTab;
- (void)setToTab:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)strValue;
- (void)setStrValue:(id)arg1;
- (void).cxx_destruct;
@end

