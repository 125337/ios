@interface KvReportItem21116 : KvReportBaseItem
{
    unsigned int _preloadVideoPercent_22; // +0x8
    unsigned int _preloadDuration_23; // +0xc
    unsigned int _preloadDataSize_24; // +0x10
    unsigned int _preloadVideoSize_25; // +0x14
    NSString * _mediaId_21; // +0x18
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (id)mediaId_21;
- (void)setMediaId_21:(id)arg1;
- (unsigned int)preloadVideoPercent_22;
- (void)setPreloadVideoPercent_22:(unsigned int)arg1;
- (unsigned int)preloadDuration_23;
- (void)setPreloadDuration_23:(unsigned int)arg1;
- (unsigned int)preloadDataSize_24;
- (void)setPreloadDataSize_24:(unsigned int)arg1;
- (unsigned int)preloadVideoSize_25;
- (void)setPreloadVideoSize_25:(unsigned int)arg1;
- (void).cxx_destruct;
@end

