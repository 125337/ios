@interface MiaoJianShareReportModel : WCTimeline3rdShareBaseReporter
{
    unsigned int _type; // +0x8
    unsigned int _outcome; // +0xc
    unsigned int _templateType; // +0x10
    NSString * _publicID; // +0x18
    NSString * _sessionID; // +0x20
    NSString * _localID; // +0x28
}
- (void)bindDataItem:(id)arg1;
- (void)updateOutcome:(unsigned int)arg1 serverItem:(id)arg2 localItem:(id)arg3;
- (BOOL)isSupport:(id)arg1;
- (BOOL)containKey:(id)arg1 inDict:(id)arg2;
- (unsigned int)uintOfStringValKey:(id)arg1 inDict:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)publicID;
- (void)setPublicID:(id)arg1;
- (unsigned int)outcome;
- (void)setOutcome:(unsigned int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (void).cxx_destruct;
@end
