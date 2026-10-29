@interface MMFinderLiveCreateLiveGuidePanel : MMPageSheetBaseView <MMFinderLiveCreateLiveTopicGuideViewDelegate, MMFinderLiveCreateLivePOIGuideViewDelegate, MMFinderLiveCreateLiveGuideConfirmViewDelegate, WCTimelinePOIPickerViewControllerDelegate>
{
    BOOL _needUpdateDelegateInfo; // +0x8
    BOOL _directStartLiveAfterPOISelected; // +0x9
    BOOL _pageSheetIsDisappearing; // +0xa
    id <MMFinderLiveCreateLiveGuidePanelDelegate> _delegate; // +0x10
    MMFinderLiveCreateLiveGuideLogic * _guideLogic; // +0x18
    WCFinderLiveStarterReporter * _reporter; // +0x20
    MMUILabel * _titleView; // +0x28
    MMFinderLiveCreateLiveTopicGuideView * _topicGuideView; // +0x30
    MMFinderLiveCreateLivePOIGuideView * _poiGuideView; // +0x38
    MMFinderLiveCreateLiveGuideConfirmView * _confirmView; // +0x40
    double _keyboardHeight; // +0x48
}
- (id)initWithCreateLiveGuideLogic:(id)arg1;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initTitleView;
- (void)initTopicGuideView;
- (void)initPOIGuideView;
- (void)initConfirmView;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)layoutTitleView;
- (void)layoutTopicGuideViewIfNeeded;
- (void)layoutPOIGuideViewIfNeeded;
- (void)layoutConfirmView;
- (void)showWithAnimated:(BOOL)arg1 resetStatus:(BOOL)arg2;
- (unsigned long long)getSupportedOrientationMask;
- (void)updateConfirmViewState;
- (void)updateDetailViewHeightAfterLayout;
- (void)updateDelegateInfoBeforeDisappear;
- (void)routeToPOIPickerViewController;
- (id)createPOIPickerViewControllerStartLiveButton;
- (void)innerDismissAndStartLive;
- (void)configTitleViewBeforeAppear;
- (void)configTopicGuideViewBeforeAppear;
- (void)configPOIGuideViewBeforeAppear;
- (void)configConfirmViewBeforeAppear;
- (void)reportCreateLiveGuidePanelAction:(unsigned long long)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (void)onTopicContentHeightDidChange;
- (void)onTopicContentValidStateDidChange:(BOOL)arg1;
- (void)onPOIGuideViewTryShowPOIPickerView;
- (void)onPOIGuideViewHeightDidChange;
- (void)onPOIGuideViewBottomPOIItemClicked;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onConfirmViewStartLiveButtonClicked;
- (void)onConfirmViewCancelButtonClicked;
- (BOOL)isShowingKeyboard;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)guideLogic;
- (void)setGuideLogic:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)topicGuideView;
- (void)setTopicGuideView:(id)arg1;
- (id)poiGuideView;
- (void)setPoiGuideView:(id)arg1;
- (id)confirmView;
- (void)setConfirmView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)needUpdateDelegateInfo;
- (void)setNeedUpdateDelegateInfo:(BOOL)arg1;
- (BOOL)directStartLiveAfterPOISelected;
- (void)setDirectStartLiveAfterPOISelected:(BOOL)arg1;
- (BOOL)pageSheetIsDisappearing;
- (void)setPageSheetIsDisappearing:(BOOL)arg1;
- (void).cxx_destruct;
@end
