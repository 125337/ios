@interface WCAdLookbookLogic : WCAdvertiseOperationLogicBase
{
    BOOL _effectPagPlayedFlag; // +0x8
    UIView * _effectPagViewCache; // +0x10
    UIView * _slideEdgePagViewCache; // +0x18
    long long _brandNewAnimatingState; // +0x20
    UIView * _brandNewMediaView; // +0x28
    WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink * _brandNewAnimationDisplayLink; // +0x30
}
- (id)effectPagViewCache;
- (void)setEffectPagViewCache:(id)arg1;
- (id)slideEdgePagViewCache;
- (void)setSlideEdgePagViewCache:(id)arg1;
- (BOOL)effectPagPlayedFlag;
- (void)setEffectPagPlayedFlag:(BOOL)arg1;
- (long long)brandNewAnimatingState;
- (void)setBrandNewAnimatingState:(long long)arg1;
- (id)brandNewMediaView;
- (void)setBrandNewMediaView:(id)arg1;
- (id)brandNewAnimationDisplayLink;
- (void)setBrandNewAnimationDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end
