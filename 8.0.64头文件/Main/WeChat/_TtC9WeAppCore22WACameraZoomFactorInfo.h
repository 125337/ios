@interface _TtC9WeAppCore22WACameraZoomFactorInfo : NSObject
{
     isWideSuppored; // +0x8
     isUltraWideSuppored; // +0x9
     isTelephotoSuppored; // +0xa
     isDualWideSupported; // +0xb
     isTripleSupported; // +0xc
     minZoomFactor; // +0x10
     maxZoomFactor; // +0x18
     sortedAvailableZoomFactors; // +0x20
     mainCameraZoomFactorIndex; // +0x28
     visualFactorScale; // +0x30
}
- (BOOL)isWideSuppored;
- (void)setIsWideSuppored:(BOOL)arg1;
- (BOOL)isUltraWideSuppored;
- (void)setIsUltraWideSuppored:(BOOL)arg1;
- (BOOL)isTelephotoSuppored;
- (void)setIsTelephotoSuppored:(BOOL)arg1;
- (BOOL)isDualWideSupported;
- (void)setIsDualWideSupported:(BOOL)arg1;
- (BOOL)isTripleSupported;
- (void)setIsTripleSupported:(BOOL)arg1;
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
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
