@interface LiteAppLivePhotoTrimRangeView : UIView
{
    BOOL _rangeDragging; // +0x8
    UIImage * _thumbImage; // +0x10
    NSArray * _thumbImages; // +0x18
    double _thumbnailAspectRatio; // +0x20
    double _videoDurationSec; // +0x28
    double _startSec; // +0x30
    double _endSec; // +0x38
    double _minSelectionSec; // +0x40
    double _maxSelectionSec; // +0x48
    double _cursorSec; // +0x50
    id /* block */ _changingBlock; // +0x58
    id /* block */ _changedBlock; // +0x60
    id /* block */ _limitReachedBlock; // +0x68
    id /* block */ _pressStateChangedBlock; // +0x70
    double _pxPerSec; // +0x78
    double _totalThumbWidth; // +0x80
    double _scrollOffset; // +0x88
    double _maxScrollOffset; // +0x90
    double _thumbOffset; // +0x98
    long long _draggingHandle; // +0xa0
    double _lastTouchX; // +0xa8
    double _lastTouchDeltaX; // +0xb0
    UIImpactFeedbackGenerator * _haptic; // +0xb8
    CALayer * _maskOverlayLayer; // +0xc0
    CAShapeLayer * _maskHoleLayer; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)initialSelectionDurationSec;
- (void)recalculate;
- (void)setVideoDurationSec:(double)arg1;
- (void)setStartSec:(double)arg1;
- (void)setEndSec:(double)arg1;
- (void)setCursorSec:(double)arg1;
- (void)setThumbImages:(id)arg1;
- (void)configureWithDuration:(double)arg1 startSec:(double)arg2 endSec:(double)arg3;
- (double)visibleLeft;
- (double)visibleRight;
- (double)secToPx:(double)arg1;
- (double)pxToSec:(double)arg1;
- (double)secToScreenX:(double)arg1;
- (double)screenXToSec:(double)arg1;
- (double)selectionCenterScreenX;
- (BOOL)selectionDurationChanging;
- (void)drawThumbImage:(id)arg1 inRect:(CGRect)arg2 fallbackColor:(id)arg3;
- (double)thumbnailCellWidthForSourceImage:(id)arg1;
- (id)resolvedThumbnailImagesForTotalWidth:(double)arg1;
- (void)drawThumbnailStripFromLeft:(double)arg1 totalWidth:(double)arg2 top:(double)arg3 viewWidth:(double)arg4 fallbackColor:(id)arg5;
- (double)currentHandleWidth;
- (void)updateMaskOverlay;
- (void)setNeedsDisplay;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isTouchInTrackVerticalRange:(double)arg1;
- (BOOL)isTouchOnVisibleThumbnailStrip:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)endDragging;
- (BOOL)updateSelectionFromDrag;
- (void)notifySelectionDurationLimitIfNeeded;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)thumbImages;
- (double)thumbnailAspectRatio;
- (void)setThumbnailAspectRatio:(double)arg1;
- (double)videoDurationSec;
- (double)startSec;
- (double)endSec;
- (double)minSelectionSec;
- (void)setMinSelectionSec:(double)arg1;
- (double)maxSelectionSec;
- (void)setMaxSelectionSec:(double)arg1;
- (double)cursorSec;
- (id /* block */)changingBlock;
- (void)setChangingBlock:(id /* block */)arg1;
- (id /* block */)changedBlock;
- (void)setChangedBlock:(id /* block */)arg1;
- (id /* block */)limitReachedBlock;
- (void)setLimitReachedBlock:(id /* block */)arg1;
- (id /* block */)pressStateChangedBlock;
- (void)setPressStateChangedBlock:(id /* block */)arg1;
- (BOOL)rangeDragging;
- (void)setRangeDragging:(BOOL)arg1;
- (double)pxPerSec;
- (void)setPxPerSec:(double)arg1;
- (double)totalThumbWidth;
- (void)setTotalThumbWidth:(double)arg1;
- (double)scrollOffset;
- (void)setScrollOffset:(double)arg1;
- (double)maxScrollOffset;
- (void)setMaxScrollOffset:(double)arg1;
- (double)thumbOffset;
- (void)setThumbOffset:(double)arg1;
- (long long)draggingHandle;
- (void)setDraggingHandle:(long long)arg1;
- (double)lastTouchX;
- (void)setLastTouchX:(double)arg1;
- (double)lastTouchDeltaX;
- (void)setLastTouchDeltaX:(double)arg1;
- (id)haptic;
- (void)setHaptic:(id)arg1;
- (id)maskOverlayLayer;
- (void)setMaskOverlayLayer:(id)arg1;
- (id)maskHoleLayer;
- (void)setMaskHoleLayer:(id)arg1;
- (void).cxx_destruct;
@end
