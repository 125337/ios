@interface WCFinderLandscapeLockSpeedPanelView : MMUIView
{
    BOOL _isShowing; // +0x8
    BOOL _isDismissing; // +0x9
    UIImageView * _iconView; // +0x10
    UILabel * _tipsLabel; // +0x18
}
+ (BOOL)isPointInPanelArea:(CGPoint)arg1 cell:(id)arg2;
- (void)_setupSubviewsIfNeeded;
- (void)_layoutIconAndLabelCentered;
- (void)showInCell:(id)arg1 stateModel:(id)arg2 currentRate:(double)arg3;
- (void)updateTipsWithStateModel:(id)arg1 currentRate:(double)arg2;
- (void)dismiss;
- (void)_addBackgroundObserver;
- (void)_removeBackgroundObserver;
- (void)_onAppEnterBackground;
- (void)dealloc;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (void).cxx_destruct;
@end
