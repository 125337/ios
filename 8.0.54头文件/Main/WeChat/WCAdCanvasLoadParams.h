@interface WCAdCanvasLoadParams : NSObject
{
    unsigned int _enterScene; // +0x8
    unsigned long long _canvasId; // +0x10
    NSString * _uxInfo; // +0x18
    NSString * _canvasDynamicInfo; // +0x20
    WCAdSupportCapabilityInfo * _supportCapability; // +0x28
    NSString * _dynamicCanvasLibVersion; // +0x30
    unsigned long long _loadStartTimeMs; // +0x38
}
- (id)init;
- (id)cacheKey;
- (id)canvasIdStr;
- (id)description;
- (unsigned long long)canvasId;
- (void)setCanvasId:(unsigned long long)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)supportCapability;
- (void)setSupportCapability:(id)arg1;
- (id)dynamicCanvasLibVersion;
- (void)setDynamicCanvasLibVersion:(id)arg1;
- (unsigned long long)loadStartTimeMs;
- (void)setLoadStartTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

