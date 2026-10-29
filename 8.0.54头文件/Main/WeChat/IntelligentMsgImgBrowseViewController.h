@interface IntelligentMsgImgBrowseViewController : MMUIViewController <MMDropableTitleViewDelegate, MsgImgFullScreenWindowDelegate, IntelligentMsgBrowseViewDelegate, MultiSelectContollerDelegate, IMsgExt, MsgDataSaveLogicDelegate, MsgImgFullScreenViewControllerDelegate, MsgImgWeakBrowseViewControllerDelegate, ViewAppMsgControllerDelegate, WCActionSheetDelegate, MsgNewImgDataLogicDelegate, IVideoExt, IntelligentMsgBrowseResultCommonDelegate>
{
    NSString * m_sessionId; // +0x68
    BOOL m_bEditing; // +0x70
    MMDropableTitleView * m_titleView; // +0x78
    MMUIView * m_categoryDisplayBgView; // +0x80
    MMTableViewInfo * m_categoryDisplayTableInfo; // +0x88
    BOOL m_categoryDisplayShow; // +0x90
    unsigned int m_categoryDisplayType; // +0x94
    IntelligentMsgBrowseView * m_msgBrowseView; // +0x98
    MsgImgFullScreenWindow * m_imgFullScreenWnd; // +0xa0
    UIView * m_filterFooterView; // +0xa8
    UIButton * m_forwardBtn; // +0xb0
    UIButton * m_favBtn; // +0xb8
    UIButton * m_deleteBtn; // +0xc0
    UIButton * m_saveBtn; // +0xc8
    MultiSelectController * m_multiSelectController; // +0xd0
    MsgNewImgDataLogic * m_dataLogic; // +0xd8
    BOOL m_bHasLoadData; // +0xe0
    ViewAppMsgController * m_viewAppMsgController; // +0xe8
    MsgDataSaveLogic * m_MsgDataSaveLogic; // +0xf0
    NSMutableSet * m_arrMsgExpired; // +0xf8
    BOOL m_isShowSearcherResultTableView; // +0x100
    MMUIView * m_searchMaskView; // +0x108
    BOOL m_isNeedResetTableTopView; // +0x110
    MMUIView * m_tableTopView; // +0x118
    WCDataSearcher * m_searcher; // +0x120
    IntelligentMsgImgLabelListView * m_labelListView; // +0x128
    BOOL m_bHadNotResult; // +0x130
    unsigned int m_clickMediaResultType; // +0x134
    unsigned int m_clickMediaStartTime; // +0x138
    BOOL m_isIntelligentMsgImgSwitchOpen; // +0x13c
    BOOL m_bHighlightCurrentImage; // +0x13d
    BOOL _didChangeVCHierarchy; // +0x13e
    unsigned int _m_eFilterType; // +0x140
    id <IntelligentMsgImgBrowseViewControllerDelegate> m_delegate; // +0x148
    CMessageWrap * m_curMsgWrap; // +0x150
    NSString * m_nsChatName; // +0x158
    double m_scrollOffset; // +0x160
    MMTableView * m_tableView; // +0x168
}
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
- (id)initWithMsgWrap:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractivePop;
- (id)getShowTopViewController;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (void)initNavBar;
- (void)initView;
- (void)resizeMsgBrowseView;
- (void)resetTableTopView;
- (void)initTableView;
- (void)initMsgBrowseView;
- (void)addFilterFooterView:(id)arg1;
- (void)updateEditView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onEdit;
- (id)getSelectArray;
- (void)onForward;
- (void)onFav;
- (void)doDelete;
- (void)onDel;
- (void)onSave;
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
- (BOOL)shouldNeedShowImgFastBrowseBtn:(id)arg1;
- (id)getViewController;
- (BOOL)useBlackStatusbar;
- (void)onIntelligentMsgBrowseViewGetMoreMsg:(id)arg1 Last:(BOOL)arg2 Next:(BOOL)arg3;
- (id)expiredMsgForIntelligentMsgBrowseView:(id)arg1;
- (id)messageWrapsForIntelligentMsgBrowseView:(id)arg1;
- (void)reLoadInitData;
- (void)reloadViewWithCategoryDisplay:(BOOL)arg1;
- (void)reloadViewWithCategoryDisplayCore;
- (void)relaodTableTopViewInCategoryDisplay:(BOOL)arg1;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (BOOL)intelligentMsgBrowseView:(id)arg1 willChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)intelligentMsgBrowseView:(id)arg1 didChangeCheckMarkTo:(BOOL)arg2 withMsgInfo:(id)arg3;
- (void)setIsShowSearcherResultTableViewFlag:(BOOL)arg1;
- (void)wcsIntelligentMsgBrowseViewDidPresentSearch:(id)arg1;
- (void)wcsIntelligentMsgBrowseViewDismissSearch:(id)arg1;
- (id)getIntelligentMsgSearcher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)doScrollTableAndTopView:(BOOL)arg1;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)reportIntelligentMsgDoClickPicture:(unsigned int)arg1;
- (void)reportIntelligentMsgDoClickMediaWithWrap:(id)arg1 msgTab:(unsigned int)arg2;
- (void)reportIntelligentMsgDoClickMediaStayTime;
- (void)reportIntelligentImgMsgExposureActionLog;
- (void)asyncReportIntelligentImgMsgExposureActionLog;
- (void)registerYReportSdk;
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
- (unsigned int)m_eFilterType;
- (void)setM_eFilterType:(unsigned int)arg1;
- (BOOL)didChangeVCHierarchy;
- (void)setDidChangeVCHierarchy:(BOOL)arg1;
- (void).cxx_destruct;
@end

