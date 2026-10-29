@interface WCFinderFeedStickerAdViewController : WCFinderFeedListViewController <WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderAdPromotionButton * _countDownView; // +0x70
    UIBarButtonItem * _countDownButtonItem; // +0x78
    WCFinderFeedStickerAdParam * _param; // +0x80
}
- (id)initWithParam:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onTimelineViewEnterBackground;
- (void)onTimelineViewEnterForeground;
- (void)setUpDimissGesture;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)handleEdgePan:(id)arg1;
- (void)handleDragDownGesture:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateAdNavigationBarItem;
- (void)closeButtonAction;
- (BOOL)disableInteractiveDismiss;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)closeAdViewControllerWithType:(unsigned long long)arg1;
- (void)continuePlayAction;
- (void)clickCapsuleButton;
- (BOOL)finderFeedListView:(id)arg1 disableSetRate:(id)arg2;
- (BOOL)disableNoMoreState;
- (id)reportDict;
- (int)feedViewControllerScene;
- (id)countDownView;
- (void)setCountDownView:(id)arg1;
- (id)countDownButtonItem;
- (void)setCountDownButtonItem:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end
