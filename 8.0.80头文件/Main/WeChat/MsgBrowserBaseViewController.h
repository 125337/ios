@interface MsgBrowserBaseViewController : MMUIViewController <WCSearchDelegate, WCDataSearchDelegate, MsgNewImgDataLogicDelegate, MultiSelectContollerDelegate, MMAssetPickerSliderDelegate, IMsgBrowserContent>
{
    BOOL _isEditing; // +0x70
    BOOL _shouldCache; // +0x71
    BOOL _bHasLoad; // +0x72
    BOOL _bLoading; // +0x73
    BOOL _bLoadingAllData; // +0x74
    BOOL _sliderActive; // +0x75
    CBaseContact * _contact; // +0x78
    NSString * _contactName; // +0x80
    NSString * _sessionId; // +0x88
    long long _categoryType; // +0x90
    UIViewController<IMsgBrowserContainer> * _browseContainer; // +0x98
    MMUIView * _m_tableTopView; // +0xa0
    WCDataSearcher * _m_searcher; // +0xa8
    IntelligentMsgImgLabelListView * _m_labelListView; // +0xb0
    MsgNewImgDataLogic * _dataLogic; // +0xb8
    NSMutableArray * _msgArr; // +0xc0
    NSMutableArray * _msgArrPage; // +0xc8
    id <MMUIViewControllerDelegate> _m_delegate; // +0xd0
    NSMutableSet * _setSelectedLocalIds; // +0xd8
    unsigned long long _selectAllToken; // +0xe0
    UIView * _bottomToolBar; // +0xe8
    NSArray * _footerButtonTypes; // +0xf0
    MultiSelectController * _multiSelectController; // +0xf8
    MMAssetPickerSlider * _slider; // +0x100
    WCActionSheet * _m_actionSheet; // +0x108
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (CGRect)contentAreaFrame;
- (double)sliderFullscreenTopBlankHeight;
- (void)initContentView;
- (void)layoutContentView;
- (void)scrollContentViewToTop;
- (void)updateLoadingState;
- (id)genNoResultViewWithSearchText:(id)arg1 containerSize:(CGSize)arg2;
- (id)genNoResultViewInContainerSize:(CGSize)arg1;
- (void)reloadData;
- (void)didLoadNextPage:(id)arg1;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (void)initData;
- (void)reloadMsgArray;
- (BOOL)isNeedGetMore;
- (void)appendLoadMsgArrPageData;
- (id)appendLoadMsgArrPageDataReturningAppended;
- (void)reloadDataAndView;
- (void)updateContentViewAfterReload;
- (void)fetchNextPage;
- (void)fetchNextPageWithPagingIntent:(BOOL)arg1;
- (void)doSearch:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (void)initTableTopView;
- (void)resetTableTopView;
- (void)updateTableTopViewFrame;
- (void)refreshSearchBarPlaceholderAlignIfWidthChanged;
- (BOOL)wcsSearchBarShouldEndEditing:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)syncSearchBarPlaceholderAlign:(id)arg1;
- (void)cancelSearch;
- (void)initBottomToolBar;
- (void)addFooterButton:(unsigned long long)arg1;
- (id)btnForActionType:(unsigned long long)arg1;
- (id)createFooterButtonWithSVG:(id)arg1 action:(SEL)arg2;
- (void)updateFooterViewFrame;
- (void)updateFooterButtonsEnabled;
- (void)forwardMsgWithLocalIds:(id)arg1;
- (void)favoriteMsgWithLocalIds:(id)arg1;
- (id)selectedLocalIdStrings;
- (id)selectedMessageWraps;
- (void)ensureAllDataLoadedWithCompletion:(id /* block */)arg1;
- (void)onFooterForward;
- (void)onFooterFav;
- (void)onFooterDelete;
- (void)onFooterDownload;
- (void)onFooterMore;
- (void)showFileDownloadOperationSheet;
- (void)onForwardMessageOK;
- (void)onMultiOprationComplete;
- (id)getCurrentViewController;
- (void)shareMsgListToThirdPartyService:(id)arg1;
- (id)handleModifyMultiMsgOperateLog:(id)arg1;
- (void)enterEditMode;
- (void)exitEditMode;
- (void)onClickSelectAll;
- (void)selectAllLoadedMessages;
- (long long)selectedCount;
- (BOOL)isAllMessagesSelected;
- (BOOL)isLocalIdSelected:(unsigned int)arg1;
- (void)onCellCheckedChange:(id)arg1 checked:(BOOL)arg2;
- (BOOL)supportsEditMode;
- (void)msgBrowseEnterEditMode;
- (void)msgBrowseExitEditMode;
- (void)msgBrowseToggleSelectAll;
- (id)sliderTargetScrollView;
- (id)activeSliderScrollView;
- (void)sliderFullscreenStateChanged:(BOOL)arg1;
- (id)sliderDateTextForScrollPosition;
- (void)sliderWillEnterFullscreen;
- (void)sliderWillExitFullscreen;
- (void)initPickerSlider;
- (void)updateSliderFrame;
- (void)updateSliderFrameWithPreservedThumbCenter:(CGPoint)arg1;
- (BOOL)shouldShowPickerSlider;
- (void)updatePickerSliderVisibility;
- (void)sliderOnScrollViewDidScroll:(id)arg1;
- (void)sliderOnScrollViewWillBeginDragging:(id)arg1;
- (void)sliderOnScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (double)scrollPercentForSlider;
- (void)assetPickerSlider:(id)arg1 didChangeValue:(double)arg2;
- (void)assetPickerSlider:(id)arg1 didChangeActiveState:(BOOL)arg2;
- (void)assetPickerSliderDidBeginMove:(id)arg1;
- (void)assetPickerSliderDidEndMove:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)contactName;
- (void)setContactName:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)categoryType;
- (void)setCategoryType:(long long)arg1;
- (id)browseContainer;
- (void)setBrowseContainer:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (BOOL)shouldCache;
- (void)setShouldCache:(BOOL)arg1;
- (id)m_tableTopView;
- (void)setM_tableTopView:(id)arg1;
- (id)m_searcher;
- (void)setM_searcher:(id)arg1;
- (id)m_labelListView;
- (void)setM_labelListView:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)msgArr;
- (void)setMsgArr:(id)arg1;
- (id)msgArrPage;
- (void)setMsgArrPage:(id)arg1;
- (BOOL)bHasLoad;
- (void)setBHasLoad:(BOOL)arg1;
- (BOOL)bLoading;
- (void)setBLoading:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)setSelectedLocalIds;
- (void)setSetSelectedLocalIds:(id)arg1;
- (BOOL)bLoadingAllData;
- (void)setBLoadingAllData:(BOOL)arg1;
- (unsigned long long)selectAllToken;
- (void)setSelectAllToken:(unsigned long long)arg1;
- (id)bottomToolBar;
- (void)setBottomToolBar:(id)arg1;
- (id)footerButtonTypes;
- (void)setFooterButtonTypes:(id)arg1;
- (id)multiSelectController;
- (void)setMultiSelectController:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (BOOL)sliderActive;
- (void)setSliderActive:(BOOL)arg1;
- (id)m_actionSheet;
- (void)setM_actionSheet:(id)arg1;
- (void).cxx_destruct;
@end
