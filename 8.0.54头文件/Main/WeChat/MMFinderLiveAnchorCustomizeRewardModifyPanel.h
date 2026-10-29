@interface MMFinderLiveAnchorCustomizeRewardModifyPanel : MMPageSheetBaseView <MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate>
{
    BOOL _isShowing; // +0x8
    NSObject<MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate> * _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveAnchorCustomizeRewardItem * _rewardItem; // +0x20
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic * _logic; // +0x28
    MMFinderLiveAnchorCustomizeRewardNavBar * _navBar; // +0x30
    MMFinderLiveAnchorCustomizeRewardStylePreviewView * _previewView; // +0x38
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanel * _styleSelectPanel; // +0x40
    UIView * _backgroundView; // +0x48
    double _keyboardHeight; // +0x50
}
- (id)initWithTaskId:(id)arg1 rewardItem:(id)arg2;
- (void)initStyleSelectLogic;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initNavBar;
- (void)initPreviewView;
- (void)initStyleSelectPanel;
- (void)initBackgroundView;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)pageSheetDidDismiss;
- (void)pageSheetDidShow;
- (void)onAnchorCancelRewardChange;
- (void)onAnchorCommitRewardChange;
- (void)onKeyboardShowing:(id)arg1;
- (void)onKeyboardHiding:(id)arg1;
- (id)getViewForPresentingActionSheet;
- (id)getViewControllerForPresentingImagePicker;
- (void)onPreviewPagFileChanged;
- (void)onAnchorSelectedStyleResourceStartLoading;
- (void)onAnchorSelectedStyleResourceEndLoading;
- (void)onCommitAnchorCustomizeRewardStyleStart;
- (void)onCommitAnchorCustomizeRewardStyleEndWithErrorMsg:(id)arg1 errorPage:(id)arg2;
- (double)contentWidth;
- (double)contentHeight;
- (double)safeAreaTopMargin;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)rewardItem;
- (void)setRewardItem:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)styleSelectPanel;
- (void)setStyleSelectPanel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

