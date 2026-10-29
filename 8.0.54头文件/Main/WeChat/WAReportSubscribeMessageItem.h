@interface WAReportSubscribeMessageItem : WAReportBaseItem
{
    BOOL _keepOption; // +0x8
    unsigned long long _templateType; // +0x10
    NSString * _templateItems; // +0x18
    unsigned long long _operationType; // +0x20
    NSString * _bizUserName; // +0x28
    NSString * _clickIndexString; // +0x30
    NSString * _clickCountString; // +0x38
    unsigned long long _type; // +0x40
    NSString * _kvUid; // +0x48
}
- (void)makeSafeString;
- (id)reportString;
- (int)reportID;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (unsigned long long)operationType;
- (void)setOperationType:(unsigned long long)arg1;
- (BOOL)keepOption;
- (void)setKeepOption:(BOOL)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (id)clickIndexString;
- (void)setClickIndexString:(id)arg1;
- (id)clickCountString;
- (void)setClickCountString:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)kvUid;
- (void)setKvUid:(id)arg1;
- (void).cxx_destruct;
@end

