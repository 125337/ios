@interface EmoticonCameraEffectConfig : NSObject
{
    XEffectEffectManager * _effectMgr; // +0x8
    CALayer * _overlayLayer; // +0x10
    CGRect _cropFrame; // +0x18
}
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (id)effectMgr;
- (void)setEffectMgr:(id)arg1;
- (id)overlayLayer;
- (void)setOverlayLayer:(id)arg1;
- (void).cxx_destruct;
@end

