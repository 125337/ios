@interface PAGCompositionImpl : PAGLayerImpl
+ (id)Make:(CGSize)arg1;
- (long long)width;
- (long long)height;
- (void)setContentSize:(CGSize)arg1;
- (long long)numChildren;
- (id)getLayerAt:(int)arg1;
- (long long)getLayerIndex:(id)arg1;
- (void)setLayerIndex:(long long)arg1 layer:(id)arg2;
- (CGRect)getBounds;
- (BOOL)addLayer:(id)arg1;
- (BOOL)addLayer:(id)arg1 atIndex:(int)arg2;
- (BOOL)contains:(id)arg1;
- (id)removeLayer:(id)arg1;
- (id)removeLayerAt:(int)arg1;
- (void)removeAllLayers;
- (void)swapLayer:(id)arg1 withLayer:(id)arg2;
- (void)swapLayerAt:(int)arg1 withIndex:(int)arg2;
- (id)audioBytes;
- (long long)audioStartTime;
- (id)audioMarkers;
- (id)getLayersByName:(id)arg1;
- (id)getLayersUnderPoint:(CGPoint)arg1;
@end
