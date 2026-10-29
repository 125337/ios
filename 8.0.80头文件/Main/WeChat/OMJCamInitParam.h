@interface OMJCamInitParam : NSObject
{
    BOOL _openMD5Check; // +0x8
    BOOL _openLayerRenderStats; // +0x9
}
- (id)initWithOpenMD5Check:(BOOL)arg1 openLayerRenderStats:(BOOL)arg2;
- (id)description;
- (BOOL)openMD5Check;
- (BOOL)openLayerRenderStats;
@end
