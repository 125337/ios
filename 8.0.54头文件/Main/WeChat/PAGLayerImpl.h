@interface PAGLayerImpl : NSObject
{
    shared_ptr<pag::PAGLayer> _pagLayer; // +0x8
}
+ (id)ToPAGLayer:(shared_ptr<pag::PAGLayer>)arg1;
+ (id)BatchConvertToPAGLayers:(const void *)arg1;
+ (id)BatchConvertToPAGMarkers:(void *)arg1;
- (id)initWithPagLayer:(shared_ptr<pag::PAGLayer>)arg1;
- (shared_ptr<pag::PAGLayer>)pagLayer;
- (void)setPagLayer:(shared_ptr<pag::PAGLayer>)arg1;
- (long long)layerType;
- (id)layerName;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (void)resetMatrix;
- (CGAffineTransform)getTotalMatrix;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (long long)editableIndex;
- (id)parent;
- (id)markers;
- (long long)localTimeToGlobal:(long long)arg1;
- (long long)globalToLocalTime:(long long)arg1;
- (long long)duration;
- (float)frameRate;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)currentTime;
- (void)setCurrentTime:(long long)arg1;
- (double)getProgress;
- (void)setProgress:(double)arg1;
- (id)trackMatteLayer;
- (CGRect)getBounds;
- (void)dealloc;
- (BOOL)excludedFromTimeline;
- (void)setExcludedFromTimeline:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

