@interface WCFinderEnterExtraReportInfoModel : NSObject
{
    NSString * _jsonInfoByAPI; // +0x8
    NSString * _redDotTipsUuid; // +0x10
    unsigned long long _isPIPEnter; // +0x18
    unsigned long long _pipEnterType; // +0x20
    unsigned long long _ref_commentscene; // +0x28
    unsigned long long _collection_id; // +0x30
}
- (id)init;
- (id)genReportEnterInfoWithCustomDict:(id)arg1;
- (id)jsonInfoByAPI;
- (void)setJsonInfoByAPI:(id)arg1;
- (id)redDotTipsUuid;
- (void)setRedDotTipsUuid:(id)arg1;
- (unsigned long long)isPIPEnter;
- (void)setIsPIPEnter:(unsigned long long)arg1;
- (unsigned long long)pipEnterType;
- (void)setPipEnterType:(unsigned long long)arg1;
- (unsigned long long)ref_commentscene;
- (void)setRef_commentscene:(unsigned long long)arg1;
- (unsigned long long)collection_id;
- (void)setCollection_id:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
