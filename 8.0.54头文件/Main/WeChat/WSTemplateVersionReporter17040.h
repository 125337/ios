@interface WSTemplateVersionReporter17040 : WSReportBaseItem
{
    unsigned long long _type; // +0x8
    unsigned long long _templateVersion; // +0x10
    unsigned long long _useType; // +0x18
}
+ (id)genLastReportMMKVKey:(unsigned long long)arg1;
+ (id)genVersionMMKVKey:(unsigned long long)arg1;
+ (unsigned long long)GetReportTypeByBiz:(unsigned long long)arg1;
+ (void)ReportAllType;
- (id)initWithType:(unsigned long long)arg1 version:(unsigned int)arg2;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)tryReportOneDayOneTime;
- (void)doReport;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)templateVersion;
- (void)setTemplateVersion:(unsigned long long)arg1;
- (unsigned long long)useType;
- (void)setUseType:(unsigned long long)arg1;
@end

