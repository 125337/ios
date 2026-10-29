@interface CreateLiteAppViewParams : NSObject
{
    BOOL _isHalfScreen; // +0x8
    BOOL _autoWidth; // +0x9
    BOOL _autoHeight; // +0xa
    BOOL _enablePullUp; // +0xb
    BOOL _enablePullDown; // +0xc
    BOOL _enableFullscreenPullDown; // +0xd
    BOOL _withMask; // +0xe
    BOOL _landscape; // +0xf
    BOOL _autoRotate; // +0x10
    id /* block */ _bodySizeChange; // +0x18
    double _heightPercent; // +0x20
}
- (id)init;
- (id)init:(BOOL)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (BOOL)autoWidth;
- (void)setAutoWidth:(BOOL)arg1;
- (BOOL)autoHeight;
- (void)setAutoHeight:(BOOL)arg1;
- (id /* block */)bodySizeChange;
- (void)setBodySizeChange:(id /* block */)arg1;
- (BOOL)enablePullUp;
- (void)setEnablePullUp:(BOOL)arg1;
- (BOOL)enablePullDown;
- (void)setEnablePullDown:(BOOL)arg1;
- (BOOL)enableFullscreenPullDown;
- (void)setEnableFullscreenPullDown:(BOOL)arg1;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg1;
- (BOOL)withMask;
- (void)setWithMask:(BOOL)arg1;
- (BOOL)landscape;
- (void)setLandscape:(BOOL)arg1;
- (BOOL)autoRotate;
- (void)setAutoRotate:(BOOL)arg1;
- (void).cxx_destruct;
@end

