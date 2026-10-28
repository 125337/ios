@interface MMDeviceCameraGroup : NSObject
{
    NSArray * _sortedCameraInfoList; // +0x8
    double _minDigitalZoomFactor; // +0x10
    double _maxDigitalZoomFactor; // +0x18
    double _visualFactorScale; // +0x20
}
+ (void)_insertCameraInfo:(id)arg1 intoSortedList:(id)arg2;
- (id)_initWithCameraInfoList:(id)arg1;
- (void)_resetCameraGroupWithCameraInfoList:(id)arg1;
- (id)sortedCameraInfoList;
- (void)setSortedCameraInfoList:(id)arg1;
- (double)minDigitalZoomFactor;
- (void)setMinDigitalZoomFactor:(double)arg1;
- (double)maxDigitalZoomFactor;
- (void)setMaxDigitalZoomFactor:(double)arg1;
- (double)visualFactorScale;
- (void)setVisualFactorScale:(double)arg1;
- (void).cxx_destruct;
@end
