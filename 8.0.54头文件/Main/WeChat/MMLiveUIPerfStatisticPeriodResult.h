@interface MMLiveUIPerfStatisticPeriodResult : NSObject
{
    NSArray * _blurPerfStatResultList; // +0x8
    NSArray * _uiAnimPerfStatResultList; // +0x10
    NSArray * _pagAnimPerfStatResultList; // +0x18
}
+ (int)getMaxRecordCntInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getPersistTimePercentInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxComposeAreaPercentInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getMaxAverAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)getAverAnimFrameRateInPeriod:(double)arg1 fromStatResults:(id)arg2;
+ (double)standardPercent:(double)arg1 digitNum:(unsigned long long)arg2 limit:(BOOL)arg3;
- (int)getMaxBlurCntInPeriod:(double)arg1;
- (double)getBlurPersistTimePercentInPeriod:(double)arg1;
- (double)getMaxBlurAreaPercentInPeriod:(double)arg1;
- (int)getMaxUIAnimationCntInPeriod:(double)arg1;
- (double)getUIAnimationPersistTimePercentInPeriod:(double)arg1;
- (double)getMaxUIAnimationAreaPercentInPeriod:(double)arg1;
- (double)getMaxUIAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxUIAnimationAverFrameRateInPeriod:(double)arg1;
- (double)getAverUIAnimationFrameRateInPeriod:(double)arg1;
- (int)getMaxPAGAnimationCntInPeriod:(double)arg1;
- (double)getPAGAnimationPersistTimePercentInPeriod:(double)arg1;
- (double)getMaxPAGAnimationAreaPercentInPeriod:(double)arg1;
- (double)getMaxPAGAnimationFrameRateInPeriod:(double)arg1;
- (double)getMaxPAGAnimationAverFrameRateInPeriod:(double)arg1;
- (double)getAverPAGAnimationFrameRateInPeriod:(double)arg1;
- (id)blurPerfStatResultList;
- (void)setBlurPerfStatResultList:(id)arg1;
- (id)uiAnimPerfStatResultList;
- (void)setUiAnimPerfStatResultList:(id)arg1;
- (id)pagAnimPerfStatResultList;
- (void)setPagAnimPerfStatResultList:(id)arg1;
- (void).cxx_destruct;
@end

