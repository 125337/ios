@interface WAReportEvaluateSheetActionItem : WAReportBaseItem
{
    unsigned int _eventTime; // +0x8
    unsigned int _evaluateScore; // +0xc
    unsigned long long _eventID; // +0x10
    unsigned long long _result; // +0x18
}
- (id)reportString;
- (unsigned long long)eventID;
- (void)setEventID:(unsigned long long)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (unsigned int)evaluateScore;
- (void)setEvaluateScore:(unsigned int)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
@end

