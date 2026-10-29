@interface WAReportWidgetTestSpeedItem : WAReportWidgetBaseItem
{
    unsigned int _eventId; // +0x8
    unsigned int _eventResult; // +0xc
    unsigned int _costTime; // +0x10
    unsigned int _dataSize; // +0x14
    unsigned int _downloadScene; // +0x18
}
- (int)reportID;
- (id)reportString;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (unsigned int)eventResult;
- (void)setEventResult:(unsigned int)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (unsigned int)downloadScene;
- (void)setDownloadScene:(unsigned int)arg1;
@end
