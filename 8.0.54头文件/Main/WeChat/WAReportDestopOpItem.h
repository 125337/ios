@interface WAReportDestopOpItem : WAReportBaseItem
{
    unsigned int _eventTime; // +0x8
    unsigned long long _opActionType; // +0x10
    unsigned long long _opScene; // +0x18
}
- (id)reportString;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (unsigned long long)opActionType;
- (void)setOpActionType:(unsigned long long)arg1;
- (unsigned long long)opScene;
- (void)setOpScene:(unsigned long long)arg1;
@end

