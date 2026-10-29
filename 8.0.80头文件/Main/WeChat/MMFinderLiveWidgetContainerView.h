@interface MMFinderLiveWidgetContainerView : UIView
{
    unsigned long long _layoutStyle; // +0x8
    id /* block */ _contentSizeDidChangeCallback; // +0x10
    MMFinderLiveWidgetContainerViewConfig * _config; // +0x18
    NSMutableArray * _displayingWidgets; // +0x20
    NSMutableArray * _pendingWidgets; // +0x28
    MMTimer * _currentWidgetAnimationTimer; // +0x30
    double _lastWidgetAnimationStartTs; // +0x38
    MMFinderLiveWidgetItem * _enteringItem; // +0x40
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)addWidgetToDisplayQueue:(id)arg1 leadForEnterAnimation:(double)arg2 startEntranceCallback:(id /* block */)arg3 changeToNormalStateCallback:(id /* block */)arg4;
- (void)addWidgetToDisplayQueueWithItem:(id)arg1;
- (void)removeWidgetAnimated:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeWidgetView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)displayNextPendingWidget;
- (void)displayPendingWidgetsVerticalBigStyle;
- (void)displayAllWidgetsVerticalBigStyle;
- (void)displayAllWidgetsInHorizontalDefaultStyle;
- (void)layoutDisplayingWidgets;
- (void)layoutDisplayingWidgetsWhenRemove:(BOOL)arg1;
- (double)getWidgetLayoutLeft;
- (long long)displayingWidgetCount;
- (void)_doStartCurrentWidgetEnterAnimation;
- (void)onCurrentWidgetEnterAnimationTimeout;
- (BOOL)isWidgetPendingOrBeingDisplayed:(id)arg1;
- (id)widgetPendingOrBeingDisplayedWithCondition:(id /* block */)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (double)getWidgetPadding;
- (unsigned long long)layoutStyle;
- (id /* block */)contentSizeDidChangeCallback;
- (void)setContentSizeDidChangeCallback:(id /* block */)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)displayingWidgets;
- (void)setDisplayingWidgets:(id)arg1;
- (id)pendingWidgets;
- (void)setPendingWidgets:(id)arg1;
- (id)currentWidgetAnimationTimer;
- (void)setCurrentWidgetAnimationTimer:(id)arg1;
- (double)lastWidgetAnimationStartTs;
- (void)setLastWidgetAnimationStartTs:(double)arg1;
- (id)enteringItem;
- (void)setEnteringItem:(id)arg1;
- (void).cxx_destruct;
@end
