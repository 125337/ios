@interface WCFinderLiveReplayRateOperationView : UIView
{
    BOOL _isShown; // +0x8
    BOOL _isPortraitLayout; // +0x9
    BOOL _isAnimating; // +0xa
    id /* block */ _panelOpenCallback; // +0x10
    id /* block */ _panelCloseCallback; // +0x18
    id /* block */ _onRateChangedCallback; // +0x20
    UIView * _backView; // +0x28
    ColorGradientView * _gradientView; // +0x30
    NSMutableArray * _rateBtnList; // +0x38
    double _selectedRate; // +0x40
    MMUIButton * _selectedBtn; // +0x48
    NSArray * _rateList; // +0x50
}
- (id)initWithRateList:(id)arg1 defaultRate:(double)arg2;
- (id)initWithDefaultRate:(double)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)handleForLayoutOrientationChanged;
- (void)layoutBackView;
- (void)layoutGradientView;
- (CGRect)gradientRect;
- (double)gradientContentWidth;
- (double)gradientContentHeight;
- (void)layoutRateBtns;
- (void)updateRateBtnTitleColor:(id)arg1;
- (void)updateRateBtnsOrigin;
- (double)getAllBtnLengthWithBtnDistance:(double)arg1;
- (id)getRateText:(double)arg1;
- (id)getRateToast:(double)arg1;
- (id)rateBtnList;
- (void)onRateButtonClicked:(id)arg1;
- (void)onSingleTapGestureRecognizer:(id)arg1;
- (void)showPanelWithAnimated;
- (void)closePanelWithAnimated;
- (BOOL)shouldConsumeTouchFromFullScreenGesture:(id)arg1 fromView:(id)arg2;
- (BOOL)shouldConsumeTouchFromFullScreenPanGesture:(id)arg1 fromView:(id)arg2;
- (id /* block */)panelOpenCallback;
- (void)setPanelOpenCallback:(id /* block */)arg1;
- (id /* block */)panelCloseCallback;
- (void)setPanelCloseCallback:(id /* block */)arg1;
- (id /* block */)onRateChangedCallback;
- (void)setOnRateChangedCallback:(id /* block */)arg1;
- (BOOL)isShown;
- (void)setIsShown:(BOOL)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (void)setRateBtnList:(id)arg1;
- (double)selectedRate;
- (void)setSelectedRate:(double)arg1;
- (id)selectedBtn;
- (void)setSelectedBtn:(id)arg1;
- (id)rateList;
- (void)setRateList:(id)arg1;
- (BOOL)isPortraitLayout;
- (void)setIsPortraitLayout:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
