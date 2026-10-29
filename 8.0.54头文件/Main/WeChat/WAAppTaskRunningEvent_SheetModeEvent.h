@interface WAAppTaskRunningEvent_SheetModeEvent : WAAppTaskRunningEvent_Base
{
    unsigned long long _sheetModeEventType; // +0x8
}
- (unsigned long long)eventType;
- (unsigned long long)sheetModeEventType;
- (void)setSheetModeEventType:(unsigned long long)arg1;
@end

