@interface ZoomFactorDisplayButtonListView : UIView <ZoomFactorControlUtilsDelegate>
{
    BOOL _needApplyButtonsOpacityGradient; // +0x8
    id <ZoomFactorDisplayButtonListViewDelegate> _delegate; // +0x10
    ZoomFactorCursorButtonItem * _zoomFactorCursorButtonItem; // +0x18
    long long _activeButtonIdx; // +0x20
    NSArray * _zoomFactorButtons; // +0x28
    NSArray * _zoomFactorDisplayValueArray; // +0x30
    double _maxZoomFactorDisplayValue; // +0x38
    UIView * _zoomFactorJumpingButtonListContainerView; // +0x40
    double _previousLayoutWidth; // +0x48
}
- (id)hitTestButtonsOutsideBounds:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 parentFrame:(CGRect)arg2 zoomFactorDisplayValueArray:(id)arg3 maxZoomFactorDisplayValue:(double)arg4;
- (void)layoutSubViews;
- (void)layoutSubviews;
- (void)keepViewNormalLevelState;
- (void)keepViewAnimatingLevelState;
- (void)initButtonListContainerView:(CGRect)arg1;
- (void)initCursorButtonItem;
- (void)initButtonList;
- (void)onClickZoomControlButton:(id)arg1;
- (void)updateZoomFactorDisplayButtonListViewPosition:(id)arg1;
- (void)switchInitStateToSingleCursorButton;
- (void)switchSingleCursorButtonToInitState;
- (void)onAutoMacroSwitchAreaViewHidden:(BOOL)arg1;
- (void)setButton:(long long)arg1 hidden:(BOOL)arg2;
- (void)refreshButtonsOpacityGradient;
- (void)applyButtonsOpacityGradient;
- (void)updateZoomVideoFactor:(double)arg1;
- (void)updateOrientation:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)zoomFactorCursorButtonItem;
- (void)setZoomFactorCursorButtonItem:(id)arg1;
- (long long)activeButtonIdx;
- (void)setActiveButtonIdx:(long long)arg1;
- (id)zoomFactorButtons;
- (void)setZoomFactorButtons:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (double)maxZoomFactorDisplayValue;
- (void)setMaxZoomFactorDisplayValue:(double)arg1;
- (id)zoomFactorJumpingButtonListContainerView;
- (void)setZoomFactorJumpingButtonListContainerView:(id)arg1;
- (BOOL)needApplyButtonsOpacityGradient;
- (void)setNeedApplyButtonsOpacityGradient:(BOOL)arg1;
- (double)previousLayoutWidth;
- (void)setPreviousLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
