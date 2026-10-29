@interface PAGLayer : NSObject
{
    id _impl; // +0x8
}
- (id)initWithImpl:(id)arg1;
- (long long)layerType;
- (id)layerName;
- (id)impl;
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
- (BOOL)excludedFromTimeline;
- (void)setExcludedFromTimeline:(BOOL)arg1;
- (void)dealloc;
@end

