@interface WCAdDynamicCanvasDSLData : NSObject
{
    NSArray * _preload; // +0x8
    WCAdDynamicCanvasDSLFallbackInfo * _fallback; // +0x10
    WCAdDynamicCanvasDSLHalfScreenInfo * _halfScreenInfo; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)fromDSLJson:(id)arg1;
- (id)preload;
- (void)setPreload:(id)arg1;
- (id)fallback;
- (void)setFallback:(id)arg1;
- (id)halfScreenInfo;
- (void)setHalfScreenInfo:(id)arg1;
- (void).cxx_destruct;
@end

