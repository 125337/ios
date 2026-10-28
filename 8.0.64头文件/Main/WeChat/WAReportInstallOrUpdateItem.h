@interface WAReportInstallOrUpdateItem : WAReportBaseItem
{
    BOOL _isUseModule; // +0x8
    unsigned int _eventID; // +0xc
    unsigned int _eventResult; // +0x10
    unsigned int _eventPercent; // +0x14
    unsigned int _eventTime; // +0x18
    long long _costTime; // +0x20
}
- (id)reportString;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (unsigned int)eventResult;
- (void)setEventResult:(unsigned int)arg1;
- (unsigned int)eventPercent;
- (void)setEventPercent:(unsigned int)arg1;
- (long long)costTime;
- (void)setCostTime:(long long)arg1;
- (unsigned int)eventTime;
- (void)setEventTime:(unsigned int)arg1;
- (BOOL)isUseModule;
- (void)setIsUseModule:(BOOL)arg1;
@end
