@interface WCAdCommonInteractionReportInfo : NSObject
{
    BOOL _didSucceed; // +0x8
    BOOL _currentResult; // +0x9
    double _maxAccelerationGForce; // +0x10
}
- (BOOL)didSucceed;
- (void)setDidSucceed:(BOOL)arg1;
- (BOOL)currentResult;
- (void)setCurrentResult:(BOOL)arg1;
- (double)maxAccelerationGForce;
- (void)setMaxAccelerationGForce:(double)arg1;
@end

