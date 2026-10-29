@interface OMCDecibelHeightCalculator : NSObject
{
    SharedPtr<XMFDecibelHeightCalcF32> _backingCalc; // +0x8
}
- (id)initWithMaxHeight:(float)arg1 minDecibel:(float)arg2 powerRatio:(float)arg3;
- (void)calculateHeightsWithDecibels:(const void *)arg1 outputHeights:(void *)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

