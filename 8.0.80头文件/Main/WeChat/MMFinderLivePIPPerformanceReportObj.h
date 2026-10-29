@interface MMFinderLivePIPPerformanceReportObj : NSObject
{
    int _sumDecodeCollectCnt; // +0x8
    int _sumPIPRenderCollectCnt; // +0xc
    int _largeFPSDifferenceCnt; // +0x10
    int _lessFPSDifferenceCnt; // +0x14
    int _maxDecodeFPS; // +0x18
    int _minDecodeFPS; // +0x1c
    int _maxPIPRenderFPS; // +0x20
    int _minPIPRenderFPS; // +0x24
    int _sumPixelRenderCollectCnt; // +0x28
    int _sumNewRenderBufferCollectCnt; // +0x2c
    int _sumAttachWidgetsCollectCnt; // +0x30
    int _sumRenderToBufferCollectCnt; // +0x34
    int _topFPSDifferenceListCnt; // +0x38
    int _topFPSLimit; // +0x3c
    NSMutableArray * _latestDecodeComputeResultList; // +0x40
    NSMutableArray * _latestRenderComputeResultList; // +0x48
    unsigned long long _sumDecodeFPS; // +0x50
    unsigned long long _sumPIPRenderFPS; // +0x58
    unsigned long long _sumDifferenceFPS; // +0x60
    unsigned long long _sumDifferenceComputeCnt; // +0x68
    double _sumPixelRenderDuration; // +0x70
    double _sumNewRenderBufferDuration; // +0x78
    double _sumAttachWidgetsDuration; // +0x80
    double _sumRenderToBufferDuration; // +0x88
    double _computeResultDifferenceTime; // +0x90
    double _largeFPSDifference; // +0x98
    double _lessFPSDifference; // +0xa0
    NSMutableArray * _topFPSDifferenceResultList; // +0xa8
    NSRecursiveLock * _lock; // +0xb0
}
- (id)init;
- (void)initDefaultData;
- (void)addDecodeLoopMetrics:(id)arg1;
- (void)addRenderLoopMetrics:(id)arg1;
- (id)description;
- (id)getDecodeComputeResult:(id)arg1;
- (id)getRenderComputeResult:(id)arg1;
- (void)compareDecodeRenderComputeResult;
- (BOOL)isRenderResult:(id)arg1 nearToDecodeResult:(id)arg2;
- (void)computeFPSDiffenceForRenderResult:(id)arg1 decodeResult:(id)arg2;
- (int)getDecodeFPS:(id)arg1;
- (int)getPIPRenderFPS:(id)arg1;
- (double)getPixelRenderDuration:(id)arg1;
- (double)getNewRenderBufferDuration:(id)arg1;
- (double)getAttachWidgesDuration:(id)arg1;
- (double)getRenderToBufferDuration:(id)arg1;
- (id)latestDecodeComputeResultList;
- (id)latestRenderComputeResultList;
- (id)topFPSDifferenceResultList;
- (int)averageDecodeFPS;
- (int)averagePIPRenderFPS;
- (int)pixelRenderAverageDuration;
- (int)newRenderAverageDuration;
- (int)attachWidgesAverageDuration;
- (int)renderToAverageDuration;
- (id)topFPSOverLimitResultList;
- (int)sumDecodeCollectCnt;
- (void)setSumDecodeCollectCnt:(int)arg1;
- (int)sumPIPRenderCollectCnt;
- (void)setSumPIPRenderCollectCnt:(int)arg1;
- (int)largeFPSDifferenceCnt;
- (void)setLargeFPSDifferenceCnt:(int)arg1;
- (int)lessFPSDifferenceCnt;
- (void)setLessFPSDifferenceCnt:(int)arg1;
- (void)setLatestDecodeComputeResultList:(id)arg1;
- (void)setLatestRenderComputeResultList:(id)arg1;
- (unsigned long long)sumDecodeFPS;
- (void)setSumDecodeFPS:(unsigned long long)arg1;
- (int)maxDecodeFPS;
- (void)setMaxDecodeFPS:(int)arg1;
- (int)minDecodeFPS;
- (void)setMinDecodeFPS:(int)arg1;
- (unsigned long long)sumPIPRenderFPS;
- (void)setSumPIPRenderFPS:(unsigned long long)arg1;
- (int)maxPIPRenderFPS;
- (void)setMaxPIPRenderFPS:(int)arg1;
- (int)minPIPRenderFPS;
- (void)setMinPIPRenderFPS:(int)arg1;
- (unsigned long long)sumDifferenceFPS;
- (void)setSumDifferenceFPS:(unsigned long long)arg1;
- (unsigned long long)sumDifferenceComputeCnt;
- (void)setSumDifferenceComputeCnt:(unsigned long long)arg1;
- (double)sumPixelRenderDuration;
- (void)setSumPixelRenderDuration:(double)arg1;
- (int)sumPixelRenderCollectCnt;
- (void)setSumPixelRenderCollectCnt:(int)arg1;
- (double)sumNewRenderBufferDuration;
- (void)setSumNewRenderBufferDuration:(double)arg1;
- (int)sumNewRenderBufferCollectCnt;
- (void)setSumNewRenderBufferCollectCnt:(int)arg1;
- (double)sumAttachWidgetsDuration;
- (void)setSumAttachWidgetsDuration:(double)arg1;
- (int)sumAttachWidgetsCollectCnt;
- (void)setSumAttachWidgetsCollectCnt:(int)arg1;
- (double)sumRenderToBufferDuration;
- (void)setSumRenderToBufferDuration:(double)arg1;
- (int)sumRenderToBufferCollectCnt;
- (void)setSumRenderToBufferCollectCnt:(int)arg1;
- (double)computeResultDifferenceTime;
- (void)setComputeResultDifferenceTime:(double)arg1;
- (double)largeFPSDifference;
- (void)setLargeFPSDifference:(double)arg1;
- (double)lessFPSDifference;
- (void)setLessFPSDifference:(double)arg1;
- (int)topFPSDifferenceListCnt;
- (void)setTopFPSDifferenceListCnt:(int)arg1;
- (int)topFPSLimit;
- (void)setTopFPSLimit:(int)arg1;
- (void)setTopFPSDifferenceResultList:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
