@interface WAReportVideoActionItem : WAReportBaseItem
{
    unsigned int _isFullScreen; // +0x8
    unsigned int _eventId; // +0xc
    unsigned int _clientTimestamp; // +0x10
    unsigned int _publiclibversion; // +0x14
    NSString * _eventNote; // +0x18
    NSString * _videoTitle; // +0x20
    NSString * _videoUrl; // +0x28
    NSString * _eventNote1; // +0x30
}
- (int)reportID;
- (id)reportString;
- (unsigned int)isFullScreen;
- (void)setIsFullScreen:(unsigned int)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (id)eventNote;
- (void)setEventNote:(id)arg1;
- (unsigned int)clientTimestamp;
- (void)setClientTimestamp:(unsigned int)arg1;
- (unsigned int)publiclibversion;
- (void)setPubliclibversion:(unsigned int)arg1;
- (id)videoTitle;
- (void)setVideoTitle:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)eventNote1;
- (void)setEventNote1:(id)arg1;
- (void).cxx_destruct;
@end
