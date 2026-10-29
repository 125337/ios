@interface IntelligentMsgImgBrowseViewController : MMUIViewController <MMDropableTitleViewDelegate, IntelligentCategoryDisplayViewDelegate, MMDropableTitleViewDelegate, IntelligentCategoryDisplayViewDelegate, MsgImgFullScreenWindowDelegate, IntelligentMsgBrowseViewDelegate, MultiSelectContollerDelegate, IMsgExt, MsgDataSaveLogicDelegate, MsgImgFullScreenViewControllerDelegate, MsgImgFullScreenTransitionDelegate, MsgImgWeakBrowseViewControllerDelegate, ViewAppMsgControllerDelegate, WCActionSheetDelegate, MsgNewImgDataLogicDelegate, IVideoExt, MsgFileBrowseViewControllerDelegate, MMImgFullScreenViewControllerDelegate, IDownloadImageExt, IMsgRevokeExt, MsgFileBrowseViewControllerDelegate, IntelligentMsgBrowseResultCommonDelegate, IMsgBrowserContent>
{
    NSString * m_sessionId; // +0x70
    BOOL m_bEditing; // +0x78
    MMDropableTitleView * m_titleView; // +0x80
    MMUIView * m_categoryDisplayBgView; // +0x88
    MMTableViewInfo * m_categoryDisplayTableInfo; // +0x90
    IntelligentCategoryDisplayView * m_categoryDisplayView; // +0x98
    BOOL m_categoryDisplayShow; // +0xa0
    unsigned int m_categoryDisplayType; // +0xa4
    IntelligentMsgBrowseView * m_msgBrowseView; // +0xa8
    MsgImgFullScreenWindow * m_imgFullScreenWnd; // +0xb0
    UIView * m_filterFooterView; // +0xb8
    UIButton * m_forwardBtn; // +0xc0
    UIButton * m_favBtn; // +0xc8
    UIButton * m_deleteBtn; // +0xd0
    UIButton * m_saveBtn; // +0xd8
    UIButton * m_moreBtn; // +0xe0
    MMScrollActionSheet * m_scrollActionSheet; // +0xe8
    MultiSelectController * m_multiSelectController; // +0xf0
    MsgNewImgDataLogic * m_dataLogic; // +0xf8
    BOOL m_bHasLoadData; // +0x100
    ViewAppMsgController * m_viewAppMsgController; // +0x108
    MsgDataSaveLogic * m_MsgDataSaveLogic; // +0x110
    NSMutableSet * m_arrMsgExpired; // +0x118
    NSMutableDictionary * m_setDownloadedMsgIDsDuringBrowse; // +0x120
    BOOL m_isShowSearcherResultTableView; // +0x128
    MMUIView * m_searchMaskView; // +0x130
    BOOL m_isNeedResetTableTopView; // +0x138
    MMUIView * m_tableTopView; // +0x140
    WCDataSearcher * m_searcher; // +0x148
    IntelligentMsgImgLabelListView * m_labelListView; // +0x150
    BOOL m_bHadNotResult; // +0x158
    unsigned int m_clickMediaResultType; // +0x15c
    unsigned int m_clickMediaStartTime; // +0x160
    BOOL m_isIntelligentMsgImgSwitchOpen; // +0x164
    MMUIViewController * m_searchCurVC; // +0x168
    NSDictionary * m_pendingHistoryMenuReportInfo; // +0x170
    CMessageWrap * m_wxMenuMsg; // +0x178
    BOOL m_bHighlightCurrentImage; // +0x180
    BOOL _showNewUI; // +0x181
    unsigned int _m_eFilterType; // +0x184
    id <IntelligentMsgImgBrowseViewControllerDelegate> m_delegate; // +0x188
    CMessageWrap * m_curMsgWrap; // +0x190
    NSString * m_nsChatName; // +0x198
    double m_scrollOffset; // +0x1a0
    MMTableView * m_tableView; // +0x1a8
    UIViewController<IMsgBrowserContainer> * browseContainer; // +0x1b0
    long long _scene; // +0x1b8
    id /* block */ _m_reportHistorySearchPageInBlock; // +0x1c0
    id /* block */ _m_reportHistorySearchImgClickBlock; // +0x1c8
    NSString * _m_historySearchChatSessionId; // +0x1d0
    NSString * _m_historySearchTriggerSearchId; // +0x1d8
    id /* block */ _m_reportHistorySearchClickCategoryTabBlock; // +0x1e0
    id /* block */ _m_reportHistoryCategoryTriggerBlock; // +0x1e8
    id /* block */ _m_reportHistoryCategoryExposureBlock; // +0x1f0
    id /* block */ _m_reportHistoryCategoryClickBlock; // +0x1f8
}
- (BOOL)shouldUseMsgStyleTransitionForFullScreen:(id)arg1;
- (void)initCategoryDisplayUINew;
- (void)reloadCategoryDisplayView;
- (void)onSelectCategoryDisplayType:(long long)arg1;
- (unsigned int)getReportActionForType:(long long)arg1;
- (void)dismissNew;
- (void)showWithAnimatedNew:(BOOL)arg1;
- (void)dismissWithAnimatedNew:(BOOL)arg1;
- (unsigned int)getCategoryDisplayTypeNew;
- (void)reloadCategoryDisplayNavigationBarTitleNew;
- (void)updateEditingTitle;
- (void)onClickDropableTitleViewNew:(id)arg1;
- (id)getContainerView;
- (id)getShadowImageViewNew;
- (id)p_getCategoryDisplayTitleNew:(unsigned int)arg1;
- (void)initCategoryDisplayUI;
- (void)reloadCategoryDisplayTableView;
- (void)onSelectCategoryDisplayCell:(id)arg1;
- (void)dismiss;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)genSelectedImageView;
- (void)makeCategoryDisplayCell:(id)arg1 CellInfo:(id)arg2;
- (unsigned int)getCategoryDisplayType;
- (void)reloadCategoryDisplayNavigationBarTitle;
- (void)onClickDropableTitleView:(id)arg1;
- (id)getTableContainerView;
- (id)getShadowImageView;
- (id)p_getCategoryDisplayTitle:(unsigned int)arg1;
- (BOOL)bInContainer;
- (id)initWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 disPlayType:(unsigned int)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)refreshSearchBarPlaceholderAlignIfWidthChanged;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)getShowTopViewController;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (void)initNavBar;
- (void)initView;
- (void)resizeMsgBrowseView;
- (void)resizeSearchCurView;
- (void)resetTableTopView;
- (void)resetTableTopViewNew;
- (void)initTableView;
- (void)adjustTableViewInset:(id)arg1;
- (void)initMsgBrowseView;
- (void)addFilterFooterView:(id)arg1;
- (void)updateEditView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onEdit;
- (void)onSelectAll;
- (id)getSelectArray;
- (unsigned long long)getSelectedCount;
- (BOOL)isAllMessagesSelected;
- (void)onForward;
- (void)onFav;
- (void)doDelete;
- (void)onDel;
- (void)onSave;
- (void)onMore;
- (id)reportSelectedMessageWraps;
- (void)onOpenSaveActionSheet;
- (void)onOpenDownLoadActionSheet;
- (void)onMsgDataSaveLogicEnd:(BOOL)arg1 expiredMsgs:(id)arg2;
- (double)getMsgBrowseViewY;
- (BOOL)onMsgImgDataMatch:(id)arg1;
- (BOOL)onMsgNewImgLogicDataMatch:(id)arg1;
- (BOOL)messageWrapMatchImage:(id)arg1;
- (BOOL)messageWrapMatchAll:(id)arg1;
- (BOOL)messageWrapMatchFile:(id)arg1;
- (BOOL)messageWrapMatchCategoryDisplaySelect:(id)arg1;
- (void)onMsgNewImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (id)getMsgFrom:(id)arg1;
- (id)createBtnWithImg:(id)arg1 sel:(SEL)arg2;
- (void)updateFilterFooterView;
- (void)initFilterFooterView;
- (void)viewDidTransitionToNewSize;
- (void)onCancel;
- (void)PreviewImage:(id)arg1 MsgSquareThumb:(id)arg2;
- (id)getCurrentViewController;
- (void)onMultiOprationComplete;
- (void)onForwardMessageOK;
- (void)jumpToDetail:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onImgMsgLocate:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (BOOL)onCurrentPageMsgImgDataMatch:(id)arg1;
- (BOOL)isMsgImgSelectedInEditMode:(id)arg1;
- (void)onMsgImgClickTriggerInEditMode:(id)arg1;
- (void)onShowImgMsgLocate:(id)arg1 imageScrollView:(id)arg2 vc:(id)arg3;
- (void)onMsgImgFullScreenViewWillDisappear:(id)arg1;
- (void)flushDownloadedThumbReloadDuringBrowse;
- (BOOL)shouldNeedShowImgFastBrowseBtn:(id)arg1;
- (id)getViewController;
- (BOOL)useBlackStatusbar;
- (void)onMMImgFullScreenPlayAttachVideo:(id)arg1;
- (void)onMMImgFullScreen:(id)arg1 showImageScrollView:(id)arg2;
- (void)onMMImgFullScreenWillHide:(id)arg1 extraInfo:(id)arg2;
- (void)onMMImgFullScreenViewWillDisappear;
- (void)onMMImgPreviewDataRequired:(id)arg1;
- (BOOL)isItemSelectedInEditMode:(id)arg1;
- (void)onSelectItemInEditMode:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)onIntelligentMsgBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (id)expiredMsgForIntelligentMsgBrowseView:(id)arg1;
- (id)messageWrapsForIntelligentMsgBrowseView:(id)arg1;
- (void)reLoadInitData;
- (void)reloadViewWithCategoryDisplayNew:(BOOL)arg1;
- (void)reloadViewWithCategoryDisplay:(BOOL)arg1;
- (void)reloadViewWithCategoryDisplayCore;
- (void)relaodTableTopViewInCategoryDisplay:(BOOL)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)intelligentMsgBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)intelligentMsgBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)setIsShowSearcherResultTableViewFlag:(BOOL)arg1;
- (void)wcsIntelligentMsgBrowseViewDidPresentSearch:(id)arg1;
- (void)wcsIntelligentMsgBrowseViewDismissSearch:(id)arg1;
- (void)restLabelListView;
- (id)getIntelligentMsgSearcher;
- (void)intelligentMsgBrowseView:(id)arg1 didChangeSliderActiveState:(BOOL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)doScrollTableAndTopView:(BOOL)arg1;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (id)transitionComponentForMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnMsgBeRemoved:(id)arg1 n64MsgId:(long long)arg2 FromRevoked:(BOOL)arg3;
- (void)handleRevokeOrRemoveRefresh;
- (void)reportIntelligentMsgDoClickPicture:(unsigned int)arg1;
- (void)reportIntelligentMsgDoClickMediaWithWrap:(id)arg1 msgTab:(unsigned int)arg2;
- (void)reportIntelligentMsgDoClickMediaStayTime;
- (void)reportIntelligentImgMsgExposureActionLog;
- (void)asyncReportIntelligentImgMsgExposureActionLog;
- (void)registerYReportSdk;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)locateWithMsgWrap:(id)arg1;
- (void)shareWithMsgWrap:(id)arg1;
- (void)favoriteWithMsgWrap:(id)arg1;
- (void)deleteWithMsgWrap:(id)arg1;
- (BOOL)intelligentMsgBrowseView:(id)arg1 handleLongPressWithMsgWrap:(id)arg2 fromView:(id)arg3;
- (id)wxMenuItemForActionType:(unsigned long long)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onWXMenuLocate;
- (void)onWXMenuForward;
- (void)onWXMenuFavorite;
- (void)onWXMenuDelete;
- (void)onWXMenuMultiSelect;
- (unsigned long long)filterType;
- (BOOL)isEditing;
- (long long)selectedCount;
- (BOOL)shouldCache;
- (BOOL)supportsEditMode;
- (void)msgBrowseEnterEditMode;
- (void)msgBrowseExitEditMode;
- (void)msgBrowseToggleSelectAll;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_curMsgWrap;
- (void)setM_curMsgWrap:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (double)m_scrollOffset;
- (void)setM_scrollOffset:(double)arg1;
- (BOOL)m_bHighlightCurrentImage;
- (void)setM_bHighlightCurrentImage:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)browseContainer;
- (void)setBrowseContainer:(id)arg1;
- (unsigned int)m_eFilterType;
- (void)setM_eFilterType:(unsigned int)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)showNewUI;
- (void)setShowNewUI:(BOOL)arg1;
- (id /* block */)m_reportHistorySearchPageInBlock;
- (void)setM_reportHistorySearchPageInBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistorySearchImgClickBlock;
- (void)setM_reportHistorySearchImgClickBlock:(id /* block */)arg1;
- (id)m_historySearchChatSessionId;
- (void)setM_historySearchChatSessionId:(id)arg1;
- (id)m_historySearchTriggerSearchId;
- (void)setM_historySearchTriggerSearchId:(id)arg1;
- (id /* block */)m_reportHistorySearchClickCategoryTabBlock;
- (void)setM_reportHistorySearchClickCategoryTabBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistoryCategoryTriggerBlock;
- (void)setM_reportHistoryCategoryTriggerBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistoryCategoryExposureBlock;
- (void)setM_reportHistoryCategoryExposureBlock:(id /* block */)arg1;
- (id /* block */)m_reportHistoryCategoryClickBlock;
- (void)setM_reportHistoryCategoryClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
