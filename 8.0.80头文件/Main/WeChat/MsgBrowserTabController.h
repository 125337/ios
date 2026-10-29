@interface MsgBrowserTabController : MMUIViewController <IntelligentCategoryDisplayViewDelegate, MMDropableTitleViewDelegate, IMsgBrowserContainer>
{
    BOOL _showNewUI; // +0x70
    BOOL _bEditing; // +0x71
    BOOL _sliderActive; // +0x72
    BOOL _categoryMenuShow; // +0x73
    CMessageWrap * _curMsgWrap; // +0x78
    MsgBrowserConfig * _config; // +0x80
    UIView * _contentView; // +0x88
    MMDropableTitleView * _dropableTitleView; // +0x90
    MMUIView * _categoryMenuBgView; // +0x98
    IntelligentCategoryDisplayView * _categoryMenuView; // +0xa0
    long long _currentCategoryType; // +0xa8
    MMUIViewController<IMsgBrowserContent> * _currentChild; // +0xb0
    NSMutableDictionary * _childVCCache; // +0xb8
    NSString * _chatName; // +0xc0
    NSString * _sessionId; // +0xc8
}
+ (id)browseViewControllerWithMsgWrap:(id)arg1 categoryType:(long long)arg2 config:(id)arg3;
+ (void)applyConfig:(id)arg1 toIntelligentVC:(id)arg2;
- (id)initWithMsgWrap:(id)arg1 showNewUI:(BOOL)arg2 categoryType:(long long)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)adjustTableViewInset:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)initNavBar;
- (void)initContentView;
- (void)initCategoryDisplayUI;
- (void)updateContentLayout;
- (void)initCurrentChild;
- (id)createOrReuseChildForCategoryType:(long long)arg1;
- (id)createChildForCategoryType:(long long)arg1;
- (void)attachChild:(id)arg1;
- (void)detachCurrentChild;
- (void)switchToCategoryType:(long long)arg1;
- (void)msgBrowseChild:(id)arg1 didUpdateSelectedCount:(long long)arg2;
- (void)msgBrowseChild:(id)arg1 didChangeEditState:(BOOL)arg2;
- (void)msgBrowseChild:(id)arg1 didChangeSliderMode:(BOOL)arg2;
- (void)updateNavBarForEditState;
- (void)updateNavBarForSelectedCount:(long long)arg1;
- (void)onClickReturn;
- (void)onClickSelect;
- (void)onClickCancel;
- (void)onClickSelectAll;
- (void)onClickDropableTitleView:(id)arg1;
- (void)onClickDropableTitleViewNew:(id)arg1;
- (void)onSelectCategoryDisplayType:(long long)arg1;
- (void)showCategoryDisplayNew;
- (void)dismissCategoryDisplayNew;
- (void)showCategoryDisplay;
- (void)dismissCategoryDisplay;
- (void)reloadCategoryDisplayView;
- (id)getCategoryDisplayContainerView;
- (unsigned int)getCategoryDisplayTypeNew;
- (id)titleForCategoryDisplayType:(long long)arg1;
- (unsigned int)reportActionForType:(long long)arg1;
- (void)reloadTitleView;
- (void)reloadData;
- (id)curMsgWrap;
- (void)setCurMsgWrap:(id)arg1;
- (BOOL)showNewUI;
- (void)setShowNewUI:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)dropableTitleView;
- (void)setDropableTitleView:(id)arg1;
- (BOOL)bEditing;
- (void)setBEditing:(BOOL)arg1;
- (BOOL)sliderActive;
- (void)setSliderActive:(BOOL)arg1;
- (id)categoryMenuBgView;
- (void)setCategoryMenuBgView:(id)arg1;
- (id)categoryMenuView;
- (void)setCategoryMenuView:(id)arg1;
- (BOOL)categoryMenuShow;
- (void)setCategoryMenuShow:(BOOL)arg1;
- (long long)currentCategoryType;
- (void)setCurrentCategoryType:(long long)arg1;
- (id)currentChild;
- (void)setCurrentChild:(id)arg1;
- (id)childVCCache;
- (void)setChildVCCache:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
