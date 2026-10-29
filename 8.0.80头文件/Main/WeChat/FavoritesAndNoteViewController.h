@interface FavoritesAndNoteViewController : MMUIViewController <MyFavoritesViewControllerParentContainerDelegate>
{
    BOOL _showsNoteOnly; // +0x70
    BOOL _isDarkModeWhenCreated; // +0x71
    int _defaultTabIndex; // +0x74
    id <FavoritesAndNoteViewControllerDelegate> _delegate; // +0x78
    MMUnderlineTabsView * _sectionTab; // +0x80
    NSMutableArray * _sectionItems; // +0x88
    MyFavoritesViewController * _favoritesViewController; // +0x90
    MMFlutterInstance * _noteFlutterInstance; // +0x98
    NoteListFlutterViewController * _noteFlutterVC; // +0xa0
    FavMainSearchViewController * _mainSearchVC; // +0xa8
}
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)configViews;
- (void)configSections;
- (id)genTabItemWithTitle:(id)arg1 isSelected:(BOOL)arg2;
- (void)configViewControllers;
- (void)ensureNoteFlutterVCCreated;
- (void)addViewController:(id)arg1;
- (long long)getCurrentSelectedTab;
- (id)currentNoteViewController;
- (void)scrollToTop;
- (void)clickFavoritesTab;
- (void)clickStarTab;
- (void)clickNoteTab;
- (void)showViewController:(id)arg1;
- (id)generateSearchBarButton;
- (void)onTapSearchBarButton;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)reloadNavigationButtons;
- (void)onReturn;
- (void)onTabsViewValueChangedInternal:(unsigned long long)arg1;
- (long long)actualTabForSelectedIndex:(unsigned long long)arg1;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)shouldAddNoteEntranceBarButton;
- (void)shouldHideNoteEntranceBarButton;
- (void)didEnterMultiSelectModeWithLeftBarButtonItem:(id)arg1 rightBarButtonItem:(id)arg2;
- (void)didExitMultiSelectMode;
- (void)didRequestRightBarButtonItemUpdate:(id)arg1;
- (void)didUpdateMultiSelectTitle:(id)arg1;
- (void)didRequestDisableInteractivePop;
- (void)didRequestEnableInteractivePop;
- (void)setBarButtonsEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showsNoteOnly;
- (void)setShowsNoteOnly:(BOOL)arg1;
- (int)defaultTabIndex;
- (void)setDefaultTabIndex:(int)arg1;
- (BOOL)isDarkModeWhenCreated;
- (void)setIsDarkModeWhenCreated:(BOOL)arg1;
- (id)sectionTab;
- (void)setSectionTab:(id)arg1;
- (id)sectionItems;
- (void)setSectionItems:(id)arg1;
- (id)favoritesViewController;
- (void)setFavoritesViewController:(id)arg1;
- (id)noteFlutterInstance;
- (void)setNoteFlutterInstance:(id)arg1;
- (id)noteFlutterVC;
- (void)setNoteFlutterVC:(id)arg1;
- (id)mainSearchVC;
- (void)setMainSearchVC:(id)arg1;
- (void).cxx_destruct;
@end
