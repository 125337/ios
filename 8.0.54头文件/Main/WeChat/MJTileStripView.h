@interface MJTileStripView : UIView
{
    BOOL _doneFirstLayout; // +0x8
    NSOrderedSet * _activeTileAttributesSet; // +0x10
    id <MJReusableTileLayersManager> _reusableTileManager; // +0x18
    id <MJTileStripViewDelegate> _delegate; // +0x20
    id <OMCThumbnailProvider> _thumbnailProvider; // +0x28
    CALayer * _contentLayer; // +0x30
    NSMapTable * _tileLayersByAttrs; // +0x38
}
- (id)initWithThumbnailProvider:(id)arg1 reusableTileManager:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)recycleTilesWithAttributesSet:(id)arg1;
- (void)recycleTilesWithAttributesSet:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)recycleTilesWithShiftingAttributes:(vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>>)arg1 appendingTileAttributes:(vector<MJTileReusableAttributes *, std::allocator<MJTileReusableAttributes *>>)arg2;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)arg1 animationDuration:(double)arg2;
- (id)internalDequeueTileLayerWithAttributes:(id)arg1;
- (void)addTileLayer:(id)arg1 withAttributes:(id)arg2;
- (void)flushTileLayerThumbnail:(id)arg1;
- (id)activeTileAttributesSet;
- (id)reusableTileManager;
- (void)setReusableTileManager:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thumbnailProvider;
- (void)setThumbnailProvider:(id)arg1;
- (id)contentLayer;
- (id)tileLayersByAttrs;
- (void)setTileLayersByAttrs:(id)arg1;
- (void).cxx_destruct;
@end

