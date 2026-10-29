@interface MyFavoritesViewController : FavBaseListViewController <FavForwardLogicDelegate, FavTagViewDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, FavSightViewDelegate, ViewLocationDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate>
{
    UIButton * m_bannerBtn; // +0xe0
    MMUIWindow * m_fullScreenWindow; // +0xe8
    FavWarningBannerView * m_warningBanner; // +0xf0
    FavClickStreamData * m_clickData; // +0xf8
    UIView * canvasPageAnimateOriginView; // +0x100
    double m_originHeaderHeight; // +0x108
    FavMultiSelectToolView * m_multiSelectActionView; // +0x110
    MMUIView * m_spaceHeaderview; // +0x118
    MMTimer * m_syncTimer; // +0x120
    int m_deleteType; // +0x128
    MMUIButton * m_favBarBtn; // +0x130
    double m_lastContentOffset; // +0x138
    BOOL m_didVibrate; // +0x140
    BOOL m_isWarningbanner; // +0x141
    BOOL m_isWarningbannerFullDisplay; // +0x142
    BOOL m_isSpaceTipFullDisplay; // +0x143
    int m_reportStatus; // +0x144
    BOOL _createNewDirectly; // +0x148
    id <MyFavoritesViewControllerDelegate> _m_delegate; // +0x150
}
- (id)init;
- (void)updateData;
- (void)viewDidLoad;
- (void)startAutoSyncTimer;
- (void)stopAutoSyncTimer;
- (void)onTimeSync;
- (void)viewWillAppear:(BOOL)arg1;
- (void)hideVisibleCellMenu;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)initNavigationBar;
- (void)onClickNewBtn;
- (void)onReturn;
- (id)warningBanner;
- (void)initMultiSelectActionView;
- (void)updateSelectActionView;
- (BOOL)shouldIgnoreTableHeadViewForContentInset;
- (void)onMultiSelect;
- (void)setImageTableViewBottomInset:(double)arg1;
- (void)onMultiSelectDone;
- (void)updateTableViewInset;
- (void)hideSelectActionView;
- (void)onForwardItems;
- (void)forwardData:(id)arg1;
- (void)addTagForItems;
- (void)onDeleteItems;
- (int)getListPageType;
- (void)realDeleteData:(id)arg1;
- (void)deleteDataAtIndexPath:(id)arg1;
- (void)disableBtns;
- (void)enableBtns;
- (void)jumpToViewStreamVideo:(id)arg1;
- (void)checkForBanner;
- (BOOL)checkForFailBanner;
- (BOOL)checkForCapacityWarningBanner;
- (void)showUploadFailForCapacityTips;
- (void)showCapacityWarningTips;
- (void)showSpaceHalfScreenViewController;
- (void)showWarningBanner;
- (void)hideWarningBanner;
- (void)initSpaceTip;
- (void)onSpaceTipOrWarningbannerExposure;
- (int)getCapBarReportStatus;
- (void)updateSpaceTip;
- (void)showSpaceTip;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)triggerVibrationFeedback;
- (id)getCapacityString;
- (id)getTempCapacityString:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)onSelectItem:(id)arg1;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(BOOL)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnFavCapacityInfoUpdate;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)onFavTagEditOK;
- (void)onFavTagEditCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (void)registerYReportSdk;
- (void)onFinderFeedFlowViewMultiSelect;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (void)onFinderFeedFlowViewForward:(id)arg1;
- (void)onFinderFeedFlowViewEditTag:(id)arg1;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)onLongPressSquareImg:(id)arg1 withInfo:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)createNewDirectly;
- (void)setCreateNewDirectly:(BOOL)arg1;
- (void).cxx_destruct;
@end

