@interface MMLinearRegressionResult : NSObject
{
    double _slope; // +0x8
    double _intercept; // +0x10
    double _correlation; // +0x18
}
- (double)slope;
- (void)setSlope:(double)arg1;
- (double)intercept;
- (void)setIntercept:(double)arg1;
- (double)correlation;
- (void)setCorrelation:(double)arg1;
@end
