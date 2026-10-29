@interface _TtC6WeChat28WSNativeHotListContainerView : UIView <WSHotListTeachView, UIScrollViewDelegate, UITableViewDelegate, FTSWebSearchAdViewDelegate>
{
    BOOL isVisable; // +0x8
     delegate; // +0x10
     vc; // +0x18
     settingVC; // +0x20
     hasAppear; // +0x28
     pendingScrollToHotSearch; // +0x29
     scrollToHotSearchTimer; // +0x30
     dragStartOffsetY; // +0x38
     hasReportedThisDrag; // +0x40
     $__lazy_storage_$_session; // +0x48
     tableView; // +0x50
     $__lazy_storage_$_settingButton; // +0x58
     listAdapter; // +0x60
     $__lazy_storage_$_dataSource; // +0x68
}
- (BOOL)isVisable;
- (void)setIsVisable:(BOOL)arg1;
- (id)initWithVc:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (double)currentOcclusionHeight;
- (void)onNeedRefreshUI;
- (void)onNeedRefreshSettings;
- (void)applicationDidBecomeActive;
- (void)updateContentExtraInsets:(UIEdgeInsets)arg1;
- (void)requestScrollToHotSearch;
- (void)scrollToHotSearch;
- (double)getTableViewContentHeight;
- (double)getHotListContentViewHeight;
- (double)getHotListContentViewHeightExceptHotSearch;
- (void)onRaiseSettingHalfScreen;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)showDynamicViewAnimated:(BOOL)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onViewAppear;
- (void)onPopOrDismissed;
- (void)onViewDisappear;
- (void)onTapAdItem:(id)arg1;
- (void)onTapHint:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
