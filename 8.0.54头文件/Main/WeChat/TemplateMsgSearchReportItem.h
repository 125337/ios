@interface TemplateMsgSearchReportItem : NSObject
{
    unsigned long long _EventID; // +0x8
    unsigned long long _TimeSecond; // +0x10
    NSString * _OperateResult; // +0x18
    unsigned long long _OperatePage; // +0x20
}
- (void)report;
- (unsigned long long)EventID;
- (void)setEventID:(unsigned long long)arg1;
- (unsigned long long)TimeSecond;
- (void)setTimeSecond:(unsigned long long)arg1;
- (id)OperateResult;
- (void)setOperateResult:(id)arg1;
- (unsigned long long)OperatePage;
- (void)setOperatePage:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

