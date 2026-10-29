@interface VoIPCallRecordingTask : NSObject
{
    BOOL _isScreenShotEntry; // +0x8
    id /* block */ _completion; // +0x10
    unsigned long long _anchorNs; // +0x18
    unsigned long long _futureEndNs; // +0x20
    VoIPCallBufferSnapshot * _prefrozenSnapshot; // +0x28
    VoIPCallRecordingReportContext * _reportContext; // +0x30
}
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (unsigned long long)anchorNs;
- (void)setAnchorNs:(unsigned long long)arg1;
- (unsigned long long)futureEndNs;
- (void)setFutureEndNs:(unsigned long long)arg1;
- (BOOL)isScreenShotEntry;
- (void)setIsScreenShotEntry:(BOOL)arg1;
- (id)prefrozenSnapshot;
- (void)setPrefrozenSnapshot:(id)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (void).cxx_destruct;
@end
