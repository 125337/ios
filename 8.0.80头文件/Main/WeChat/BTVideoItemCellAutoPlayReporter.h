@interface BTVideoItemCellAutoPlayReporter : MMObject
{
    BTVideoItemCellAutoPlayReportData * m_data; // +0x8
    unsigned int m_autoPlayId; // +0x10
    unsigned long long m_buffStartTime; // +0x18
    unsigned long long m_firstFrameStartTime; // +0x20
    BOOL m_reportOnVideoPlayOnce; // +0x28
    BOOL m_reportOnVideoPauseOnce; // +0x29
}
- (void)reset;
- (id)init;
- (void)onVideoCreate:(id)arg1;
- (void)onVideoPrepareToPlay;
- (void)onVideoPlay;
- (void)onVideoPause:(unsigned long long)arg1 playDuration:(unsigned long long)arg2;
- (void)onVideoBeginBuffering;
- (void)onVideoEndBuffering;
- (void)onOpenVideoLandingPage;
- (unsigned long long)getPlayDuration;
- (unsigned int)getAutoPlayId;
- (void)doReport:(unsigned int)arg1 buffDuration:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
