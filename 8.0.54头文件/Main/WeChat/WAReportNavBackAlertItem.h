@interface WAReportNavBackAlertItem : WAReportBaseItem
{
    long long _timestampOfDialog; // +0x8
    long long _eventId; // +0x10
    NSString * _eventNote; // +0x18
}
- (id)reportString;
- (long long)timestampOfDialog;
- (void)setTimestampOfDialog:(long long)arg1;
- (long long)eventId;
- (void)setEventId:(long long)arg1;
- (id)eventNote;
- (void)setEventNote:(id)arg1;
- (void).cxx_destruct;
@end

