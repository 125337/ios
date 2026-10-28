@interface RingToneSystemMsgExposureReporter : KvReportBaseItem
{
    unsigned int _titleType; // +0x8
    unsigned long long _type; // +0x10
    unsigned long long _action; // +0x18
    NSString * _wording; // +0x20
    NSString * _feedID; // +0x28
    NSString * _uin; // +0x30
    NSString * _userName; // +0x38
}
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;
- (void)doReport;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)uin;
- (void)setUin:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)titleType;
- (void)setTitleType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
