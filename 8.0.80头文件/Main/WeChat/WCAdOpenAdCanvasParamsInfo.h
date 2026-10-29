@interface WCAdOpenAdCanvasParamsInfo : NSObject
{
    BOOL _noStore; // +0x8
    BOOL _preLoad; // +0x9
    BOOL _openFirstSightVoice; // +0xa
    BOOL _openInHalfScreen; // +0xb
    float _targetDistance; // +0xc
    NSString * _canvasId; // +0x10
    NSString * _adInfoXml; // +0x18
    NSString * _extraData; // +0x20
    NSString * _twistCardId; // +0x28
    long long _fromOuterIndex; // +0x30
    NSString * _uxInfo; // +0x38
    long long _source; // +0x40
    NSString * _canvasDynamicInfo; // +0x48
    NSString * _canvasDynamicExtInfo; // +0x50
    NSString * _gesturePoints; // +0x58
    NSString * _samplePoints; // +0x60
}
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (BOOL)noStore;
- (void)setNoStore:(BOOL)arg1;
- (BOOL)preLoad;
- (void)setPreLoad:(BOOL)arg1;
- (id)adInfoXml;
- (void)setAdInfoXml:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (BOOL)openFirstSightVoice;
- (void)setOpenFirstSightVoice:(BOOL)arg1;
- (id)twistCardId;
- (void)setTwistCardId:(id)arg1;
- (long long)fromOuterIndex;
- (void)setFromOuterIndex:(long long)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (id)gesturePoints;
- (void)setGesturePoints:(id)arg1;
- (id)samplePoints;
- (void)setSamplePoints:(id)arg1;
- (float)targetDistance;
- (void)setTargetDistance:(float)arg1;
- (BOOL)openInHalfScreen;
- (void)setOpenInHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
