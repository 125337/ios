@interface WAReportHomeButtonItem : WAReportBaseItem
{
    unsigned long long _eventTimestamp; // +0x8
    unsigned long long _eventId; // +0x10
}
- (int)reportID;
- (id)reportString;
- (unsigned long long)eventTimestamp;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
@end

