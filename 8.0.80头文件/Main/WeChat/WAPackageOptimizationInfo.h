@interface WAPackageOptimizationInfo : NSObject
{
    BOOL _needDownload; // +0x8
    double _startTime; // +0x10
}
- (id)toDictionary;
- (BOOL)needDownload;
- (void)setNeedDownload:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
@end
