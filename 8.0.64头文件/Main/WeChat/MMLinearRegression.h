@interface MMLinearRegression : NSObject
{
    NSMutableArray * _workingArray; // +0x8
    double _slope; // +0x10
    double _intercept; // +0x18
    double _correlation; // +0x20
    double _sumY; // +0x28
    double _sumX; // +0x30
    double _sumXY; // +0x38
    double _sumX2; // +0x40
    double _sumY2; // +0x48
}
+ (id)sharedInstance;
- (id)workingArray;
- (void)addDataObject:(id)arg1;
- (void)clear;
- (id)getArray;
- (id)calculate;
- (id)calculateRegression:(id)arg1;
- (void)setWorkingArray:(id)arg1;
- (double)slope;
- (void)setSlope:(double)arg1;
- (double)intercept;
- (void)setIntercept:(double)arg1;
- (double)correlation;
- (void)setCorrelation:(double)arg1;
- (double)sumY;
- (void)setSumY:(double)arg1;
- (double)sumX;
- (void)setSumX:(double)arg1;
- (double)sumXY;
- (void)setSumXY:(double)arg1;
- (double)sumX2;
- (void)setSumX2:(double)arg1;
- (double)sumY2;
- (void)setSumY2:(double)arg1;
- (void).cxx_destruct;
@end
