@interface WCFinderFullMusicEventViewController : MMUIViewController <WCFinderMusicEventViewDelegate, WCFinderInvalidMusicTopicViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderMusicEventView * _musicEventView; // +0x68
    WCFinderTopicRouteParams * _params; // +0x70
    NSString * _navigationBarTitle; // +0x78
    UIBarButtonItem * _moreRightButtonItem; // +0x80
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBarTitle;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)currentViewController;
- (void)initMusicNaviItems;
- (void)onFinderMusicTopicHeaderViewRefresh;
- (double)topInsetOfFinderTabPageView;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (void)onConfirmButtonClicked;
- (id)musicEventView;
- (void)setMusicEventView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (id)moreRightButtonItem;
- (void)setMoreRightButtonItem:(id)arg1;
- (void).cxx_destruct;
@end

