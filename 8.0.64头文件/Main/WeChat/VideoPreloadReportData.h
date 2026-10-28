@interface VideoPreloadReportData : MMObject
{
    unsigned int _preloadVideoPercent; // +0x8
    unsigned int _preloadDuration; // +0xc
    unsigned int _preloadDataSize; // +0x10
    unsigned int _preloadVideoSize; // +0x14
    NSString * _mediaId; // +0x18
}
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (unsigned int)preloadVideoPercent;
- (void)setPreloadVideoPercent:(unsigned int)arg1;
- (unsigned int)preloadDuration;
- (void)setPreloadDuration:(unsigned int)arg1;
- (unsigned int)preloadDataSize;
- (void)setPreloadDataSize:(unsigned int)arg1;
- (unsigned int)preloadVideoSize;
- (void)setPreloadVideoSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
