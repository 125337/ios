@interface MJVisualClipSegmentCell : MJSegmentCell <MJTileStripViewContainer>
{
    BOOL _isSegmentInfoOverlayVisible; // +0x8
    MJTileStripView * _tileStripView; // +0x10
    id <MJTileStripViewManager> _tileStripViewManager; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupthumbPlaceholder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)prepareForReuse;
- (void)syncWithSegmentUIState;
- (void)syncWithMutation;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)addTileStripView:(id)arg1;
- (void)addTileTileStripViewIfNeeded;
- (void)enqueueTileStripViewIfNeeded;
- (void)setIsSegmentInfoOverlayVisible:(BOOL)arg1;
- (void)updateOverlay;
- (id)durationInfoOverlay;
- (id)muteInfoOverlay;
- (id)tileStripView;
- (void)setTileStripView:(id)arg1;
- (id)tileStripViewManager;
- (void)setTileStripViewManager:(id)arg1;
- (BOOL)isSegmentInfoOverlayVisible;
- (void).cxx_destruct;
@end
