@interface MAVBaseMultiVideoCompositionEffect : NSObject <TAVVideoCompositionMixer>
{
    MAVMetalContext * _context; // +0x8
    id /* block */ _renderCallback; // +0x10
    NSArray * _lastTrackList; // +0x18
    long long _lastRenderPts; // +0x20
    CGSize _assetSize; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)destroyCacheFrame;
- (void)destroyTextureCache;
- (void)setAssetSize:(CGSize)arg1;
- (id)applyEffectToImageCollection:(id)arg1 renderInfo:(id)arg2;
- (BOOL)enableRenderPixelBufDirected;
- (void)applyEffectToPixelBufferCollection:(id)arg1 renderInfo:(id)arg2 toDestPixelBuffer:(__CVBuffer *)arg3;
- (void)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3 toPixelBuffer:(__CVBuffer *)arg4;
- (id)createInputTrackListFromPixelBuffer:(id)arg1 pts:(long long)arg2;
- (id)context;
- (void)setContext:(id)arg1;
- (id /* block */)renderCallback;
- (void)setRenderCallback:(id /* block */)arg1;
- (CGSize)assetSize;
- (id)lastTrackList;
- (void)setLastTrackList:(id)arg1;
- (long long)lastRenderPts;
- (void)setLastRenderPts:(long long)arg1;
- (void).cxx_destruct;
@end

