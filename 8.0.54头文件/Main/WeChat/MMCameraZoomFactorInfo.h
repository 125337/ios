@interface MMCameraZoomFactorInfo : NSObject
{
    BOOL _isWideSuppored; // +0x8
    BOOL _isUltraWideSuppored; // +0x9
    BOOL _isTelephotoSuppored; // +0xa
    BOOL _isDualWideSupported; // +0xb
    BOOL _isTripleSupported; // +0xc
    double _minZoomFactor; // +0x10
    double _maxZoomFactor; // +0x18
    NSArray * _sortedAvailableZoomFactors; // +0x20
    long long _mainCameraZoomFactorIndex; // +0x28
    double _visualFactorScale; // +0x30
}
- (id)description;
- (BOOL)isWideSuppored;
- (void)setIsWideSuppored:(BOOL)arg1;
- (BOOL)isUltraWideSuppored;
- (void)setIsUltraWideSuppored:(BOOL)arg1;
- (BOOL)isTelephotoSuppored;
- (void)setIsTelephotoSuppored:(BOOL)arg1;
- (double)minZoomFactor;
- (void)setMinZoomFactor:(double)arg1;
- (double)maxZoomFactor;
- (void)setMaxZoomFactor:(double)arg1;
- (id)sortedAvailableZoomFactors;
- (void)setSortedAvailableZoomFactors:(id)arg1;
- (long long)mainCameraZoomFactorIndex;
- (void)setMainCameraZoomFactorIndex:(long long)arg1;
- (double)visualFactorScale;
- (void)setVisualFactorScale:(double)arg1;
- (BOOL)isDualWideSupported;
- (void)setIsDualWideSupported:(BOOL)arg1;
- (BOOL)isTripleSupported;
- (void)setIsTripleSupported:(BOOL)arg1;
- (void).cxx_destruct;
@end

