@interface TextStateHeadClickReportItem : KvReportBaseItem
{
    NSString * _toUsername; // +0x8
    NSString * _toTextStateId; // +0x10
    NSString * _toIconId; // +0x18
    unsigned long long _scene; // +0x20
    unsigned long long _hasTextStateIcon; // +0x28
    unsigned long long _clickResult; // +0x30
    unsigned long long _actionTimeStamp; // +0x38
    NSString * _extInfo; // +0x40
}
- (void)setEnumHasTextStateIcon:(BOOL)arg1;
- (void)doReport;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)toTextStateId;
- (void)setToTextStateId:(id)arg1;
- (id)toIconId;
- (void)setToIconId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)hasTextStateIcon;
- (void)setHasTextStateIcon:(unsigned long long)arg1;
- (unsigned long long)clickResult;
- (void)setClickResult:(unsigned long long)arg1;
- (unsigned long long)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
