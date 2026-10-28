@interface WCFinderPlayRateSelectPanelView : MMUIView
{
    BOOL _currentIsTouchingBtn; // +0x8
    id /* block */ _shownAction; // +0x10
    id /* block */ _dismissAction; // +0x18
    id /* block */ _selectAction; // +0x20
    UIView * _gradientView; // +0x28
    UIView * _maskBGView; // +0x30
    UIView * _contentView; // +0x38
    UILabel * _tipsLabel; // +0x40
    UIImageView * _iconView; // +0x48
    double _curruntShowingPlayRate; // +0x50
    WCFinderFeedContentVM * _contentVM; // +0x58
    WCFinderNormalProgressBar * _progressBar; // +0x60
}
- (void)showOnView:(id)arg1 withVM:(id)arg2;
- (void)onDismissAction;
- (void)onDismiss;
- (BOOL)isTouchingLockAreaWithGuesture:(id)arg1;
- (void)handleLongPressGuesture:(id)arg1 stateModel:(id)arg2;
- (void)_showGradientView;
- (void)setProgressBarValue:(double)arg1;
- (void)addObserver;
- (void)removeObserver;
- (void)onEnterBackground:(id)arg1;
- (void)onResignActive:(id)arg1;
- (void)handleEnterBackgroundEvent;
- (id /* block */)shownAction;
- (void)setShownAction:(id /* block */)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)maskBGView;
- (void)setMaskBGView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (double)curruntShowingPlayRate;
- (void)setCurruntShowingPlayRate:(double)arg1;
- (BOOL)currentIsTouchingBtn;
- (void)setCurrentIsTouchingBtn:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (void).cxx_destruct;
@end
