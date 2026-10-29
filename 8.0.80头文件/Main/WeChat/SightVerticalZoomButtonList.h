@interface SightVerticalZoomButtonList : UIView <ZoomFactorControlUtilsDelegate>
{
    BOOL _needApplyButtonsOpacityGradient; // +0x8
    id <SightVerticalZoomButtonListDelegate> _delegate; // +0x10
    long long _activeButtonIdx; // +0x18
    ZoomFactorCursorButtonItem * _zoomFactorCursorButtonItem; // +0x20
    NSArray * _zoomFactorButtons; // +0x28
    NSArray * _zoomFactorDisplayValueArray; // +0x30
    UIView * _jumpingButtonListContainerView; // +0x38
    long long _hiddenButtonIdxForTransition; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 zoomFactorDisplayValueArray:(id)arg2;
- (void)initButtonListContainerView:(CGRect)arg1;
- (void)initCursorButtonItem;
- (void)initButtonList;
- (void)keepViewNormalLevelState;
- (void)layoutSubviews;
- (void)layoutInitialButtonList;
- (void)alignActiveButtonToCenter;
- (double)buttonListTotalHeight;
- (double)activeButtonCenterY;
- (void)onClickZoomControlButton:(id)arg1;
- (void)updatePositionToButton:(id)arg1;
- (void)syncCursorToActiveButton;
- (void)setActiveButtonHidden:(BOOL)arg1;
- (void)setNeedApplyButtonsOpacityGradient:(BOOL)arg1;
- (void)applyButtonsOpacityGradient;
- (void)switchInitStateToSingleCursorButton;
- (void)switchSingleCursorButtonToInitState;
- (void)updateOrientation:(long long)arg1;
- (void)updateZoomVideoFactor:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)activeButtonIdx;
- (void)setActiveButtonIdx:(long long)arg1;
- (id)zoomFactorCursorButtonItem;
- (id)zoomFactorButtons;
- (void)setZoomFactorButtons:(id)arg1;
- (id)zoomFactorDisplayValueArray;
- (void)setZoomFactorDisplayValueArray:(id)arg1;
- (id)jumpingButtonListContainerView;
- (void)setJumpingButtonListContainerView:(id)arg1;
- (BOOL)needApplyButtonsOpacityGradient;
- (long long)hiddenButtonIdxForTransition;
- (void)setHiddenButtonIdxForTransition:(long long)arg1;
- (void).cxx_destruct;
@end
