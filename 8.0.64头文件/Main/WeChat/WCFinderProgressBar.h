@interface WCFinderProgressBar : UIView
{
    BOOL _showLargeBar; // +0x8
    BOOL _showAnchorPoint; // +0x9
    id <WCFinderProgressBarDelegate> _delegate; // +0x10
    id <WCFinderProgressBarExtendDelegate> _extendDelegate; // +0x18
    MMUIButton * _dotBtn; // +0x20
    double _lastHapticTimestamp; // +0x28
    NSNumber * _valueNum; // +0x30
    double _lastX; // +0x38
    NSMutableArray * _anchorPointViews; // +0x40
    NSMutableArray * _highlightAnchorPointViews; // +0x48
}
+ (double)progressBarEdgeSpeedUpPercent;
+ (double)progressBarEdgeSpeedUpScale;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)manualSetMidViewValue:(double)arg1;
- (void)updateUIWithValue:(double)arg1;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)removeProgressAnimation;
- (void)resetAnimation;
- (id)leftBarView;
- (id)rightBarView;
- (id)midBarView;
- (BOOL)isInMidBarDraggingState;
- (void)handleDynamicAnchorPointWithGesState:(long long)arg1;
- (void)updateHapticTimestamp;
- (void)triggerHapticIfNeeded:(double)arg1;
- (void)_triggerHaptic;
- (BOOL)shouldTriggerHaptic:(double)arg1;
- (BOOL)_shouldTriggerMidBarHaptic:(double)arg1;
- (BOOL)shouldAnimateToProgress:(double)arg1 duration:(double)arg2;
- (BOOL)checkProgressValueValid:(double)arg1;
- (id)anchorPointViews;
- (BOOL)canShowHighlightAnchorPoints;
- (void)layoutHighlightAnchorPointView:(id)arg1;
- (void)layoutAllHighlightAnchorPointViews;
- (void)updateHighlightAnchorPointsWithHighlightProgressNumberList:(id)arg1;
- (void)clearHighlightAnchorPointViews;
- (id)getConfig;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extendDelegate;
- (void)setExtendDelegate:(id)arg1;
- (BOOL)isShowLargeBar;
- (void)setShowLargeBar:(BOOL)arg1;
- (BOOL)isShowAnchorPoint;
- (void)setShowAnchorPoint:(BOOL)arg1;
- (id)dotBtn;
- (double)lastHapticTimestamp;
- (void)setLastHapticTimestamp:(double)arg1;
- (id)valueNum;
- (void)setValueNum:(id)arg1;
- (double)lastX;
- (void)setLastX:(double)arg1;
- (void)setAnchorPointViews:(id)arg1;
- (id)highlightAnchorPointViews;
- (void)setHighlightAnchorPointViews:(id)arg1;
- (void).cxx_destruct;
@end
