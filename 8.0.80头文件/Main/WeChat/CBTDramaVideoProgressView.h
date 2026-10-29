@interface CBTDramaVideoProgressView : MMUIView
{
    BOOL _dragging; // +0x8
    id <CBTDramaVideoProgressViewDelegate> _delegate; // +0x10
    UILongPressGestureRecognizer * _longPressGR; // +0x18
    UITapGestureRecognizer * _tapGR; // +0x20
    NSMutableArray * _trackViews; // +0x28
    NSMutableArray * _fillViews; // +0x30
    long long _segmentCount; // +0x38
    double _segmentSpacing; // +0x40
    double _barHeight; // +0x48
    double _cachedSegmentSpacing; // +0x50
    UIColor * _trackColor; // +0x58
    UIColor * _fillColor; // +0x60
    double _cachedSegmentWidth; // +0x68
    long long _draggingIndex; // +0x70
    CBTDramaItemViewModel * _currentModel; // +0x78
    UISelectionFeedbackGenerator * _haptic; // +0x80
    UIColor * _dragHighlightColor; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 dramaModel:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)updateProgressWithDramaModel:(id)arg1;
- (long long)segmentIndexAtLocationX:(double)arg1;
- (void)rebuildIfNeededWithDramaModel:(id)arg1;
- (void)layoutBars;
- (void)applyProgressWithDramaModel:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onLongPress:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)longPressGR;
- (void)setLongPressGR:(id)arg1;
- (id)tapGR;
- (void)setTapGR:(id)arg1;
- (id)trackViews;
- (void)setTrackViews:(id)arg1;
- (id)fillViews;
- (void)setFillViews:(id)arg1;
- (long long)segmentCount;
- (void)setSegmentCount:(long long)arg1;
- (double)segmentSpacing;
- (void)setSegmentSpacing:(double)arg1;
- (double)barHeight;
- (void)setBarHeight:(double)arg1;
- (double)cachedSegmentSpacing;
- (void)setCachedSegmentSpacing:(double)arg1;
- (id)trackColor;
- (void)setTrackColor:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (double)cachedSegmentWidth;
- (void)setCachedSegmentWidth:(double)arg1;
- (BOOL)dragging;
- (void)setDragging:(BOOL)arg1;
- (long long)draggingIndex;
- (void)setDraggingIndex:(long long)arg1;
- (id)currentModel;
- (void)setCurrentModel:(id)arg1;
- (id)haptic;
- (void)setHaptic:(id)arg1;
- (id)dragHighlightColor;
- (void)setDragHighlightColor:(id)arg1;
- (void).cxx_destruct;
@end
