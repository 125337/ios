@interface SightUtilsGenerateSnapShotParams : NSObject
{
    BOOL _isTimeTolerance; // +0x8
    BOOL _autoAdjustHDRColor; // +0x9
    double _requestTime; // +0x10
}
+ (id)defaultParams;
+ (id)paramsWithRequestTime:(double)arg1 isTimeTolerance:(BOOL)arg2;
+ (id)paramsWithRequestTime:(double)arg1 isTimeTolerance:(BOOL)arg2 autoAdjustHDRColor:(BOOL)arg3;
- (double)requestTime;
- (void)setRequestTime:(double)arg1;
- (BOOL)isTimeTolerance;
- (void)setIsTimeTolerance:(BOOL)arg1;
- (BOOL)autoAdjustHDRColor;
- (void)setAutoAdjustHDRColor:(BOOL)arg1;
@end
