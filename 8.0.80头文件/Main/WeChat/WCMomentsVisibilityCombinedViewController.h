@interface WCMomentsVisibilityCombinedViewController : MMUIViewController <UIScrollViewDelegate, WCMomentsVisibilityTabBarDelegate, WCMomentsVisibilityBottomBarDelegate, WCMomentsContactTagListViewControllerDelegate, MultiSelectContactsViewControllerDelegate>
{
    BOOL _isVisibleGroup; // +0x70
    BOOL _isSyncingScroll; // +0x71
    WCMomentsVisibilityCombinedConfig * _config; // +0x78
    id <WCMomentsVisibilityCombinedDelegate> _combinedDelegate; // +0x80
    NSMutableOrderedSet * _selectedTagIDs; // +0x88
    NSMutableArray * _selectedContacts; // +0x90
    NSMutableArray * _excludeContacts; // +0x98
    NSMutableArray * _excludeTagNames; // +0xa0
    NSDictionary * _initialSelectedContactDic; // +0xa8
    WCMomentsVisibilityTabBar * _tabBar; // +0xb0
    UIScrollView * _pagingScrollView; // +0xb8
    WCMomentsVisibilityBottomBar * _bottomBar; // +0xc0
    WCMomentsCombinedTagListViewController * _tagVC; // +0xc8
    WCMomentsCombinedContactListViewController * _contactVC; // +0xd0
    double _keyboardAdjustOffset; // +0xd8
}
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)buildTabBar;
- (void)buildPagingScrollView;
- (void)buildChildVCs;
- (void)buildBottomBar;
- (void)relayoutContainers;
- (void)refreshBottomBar;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)syncTabSelectionFromScrollView;
- (void)tabBar:(id)arg1 didTapIndex:(long long)arg2;
- (void)bottomBarDidTapConfirm:(id)arg1;
- (void)bottomBarDidTapFold:(id)arg1;
- (void)onTapCancel:(id)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)updateInteractivePopGesture;
- (void)registerKeyboardNotifications;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)combinedDelegate;
- (void)setCombinedDelegate:(id)arg1;
- (id)selectedTagIDs;
- (void)setSelectedTagIDs:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)excludeContacts;
- (void)setExcludeContacts:(id)arg1;
- (id)excludeTagNames;
- (void)setExcludeTagNames:(id)arg1;
- (id)initialSelectedContactDic;
- (void)setInitialSelectedContactDic:(id)arg1;
- (id)tabBar;
- (void)setTabBar:(id)arg1;
- (id)pagingScrollView;
- (void)setPagingScrollView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)tagVC;
- (void)setTagVC:(id)arg1;
- (id)contactVC;
- (void)setContactVC:(id)arg1;
- (BOOL)isVisibleGroup;
- (void)setIsVisibleGroup:(BOOL)arg1;
- (BOOL)isSyncingScroll;
- (void)setIsSyncingScroll:(BOOL)arg1;
- (double)keyboardAdjustOffset;
- (void)setKeyboardAdjustOffset:(double)arg1;
- (void).cxx_destruct;
@end
