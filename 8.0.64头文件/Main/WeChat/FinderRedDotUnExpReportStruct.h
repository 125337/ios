@interface FinderRedDotUnExpReportStruct : NSObject
{
    NSString * _path; // +0x8
    NSString * _tipsUuid; // +0x10
    unsigned long long _exposeTimeMs; // +0x18
    NSDictionary * _reportDict; // +0x20
    unsigned long long _businessType; // +0x28
}
- (id)path;
- (void)setPath:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned long long)exposeTimeMs;
- (void)setExposeTimeMs:(unsigned long long)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
