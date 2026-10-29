@interface WeNoteViewController : MMUIViewController <WNRTEToolViewDelegate, WNTextViewOperationDelegate, WNContentSearchBarDelegate, WNSearchLogicDelegate, FavForwardLogicDelegate, MMScrollActionSheetDelegate, FavTagViewDelegate, WCActionSheetDelegate, RecentForwardScrollViewDelegate, MMTipsViewControllerDelegate, IVOIPUILogicMgrExt, RTEAttachmentViewProviderDelegate, WNAttachmentBaseViewDelegate, WNSelectionViewDelegate, MinimizationTransitionControllerDelegate, WNTranslateDelegate, WNTranslateTopViewDelegate, WebTransHelpButtonDelegate, WeNoteDataControllerDelegate, WNAlertViewHelperDelegate, StreamVoiceInputViewControllerDelegate, WeNoteAddFavListViewControllerDelegate>
{
    WeNoteDataController * m_dataController; // +0x70
    MMScrollActionSheet * m_scrollActionSheet; // +0x78
    BOOL m_bDeletePopView; // +0x80
    WNRTEToolView * m_toolView; // +0x88
    WNTableview * m_tableView; // +0x90
    UIView * m_headerView; // +0x98
    UIView * m_footerView; // +0xa0
    UIView * m_topMaskView; // +0xa8
    double m_keyboardHeight; // +0xb0
    double m_keyboardAnimationTime; // +0xb8
    long long m_keyboardAnimationCurve; // +0xc0
    BOOL m_forbidUpdateToolView; // +0xc8
    BOOL m_holdOnAudio; // +0xc9
    BOOL m_forceLoadImage; // +0xca
    unsigned int m_oriVersion; // +0xcc
    UIImage * m_snapshotImage; // +0xd0
    StreamVoiceInputViewController * m_voiceInputViewController; // +0xd8
    NSString * m_voiceStreamTitle; // +0xe0
    UIView * m_topBarView; // +0xe8
    BOOL m_isOnSearch; // +0xf0
    WNContentSearchBar * m_contentSearchBar; // +0xf8
    WNSearchLogic * m_searchLogic; // +0x100
    BOOL m_enableOrderListMenu; // +0x108
    RTEAttributeNode * m_hightliteOrderListNode; // +0x110
    long long m_curOrientation; // +0x118
    long long m_lastOrientation; // +0x120
    unsigned long long m_curReadlocation; // +0x128
    id /* block */ m_handlerAfterChangeOri; // +0x130
    BOOL m_forcePortrait; // +0x138
    WNTranslateLogic * m_translateLogic; // +0x140
    long long m_canTranslateContent; // +0x148
    MMTimer * m_saveTimer; // +0x150
    BOOL m_forceHideTimeHeader; // +0x158
    UIButton * m_exposeButton; // +0x160
    UIBarButtonItem * m_moreBarItem; // +0x168
    UIBarButtonItem * m_undoBarItem; // +0x170
    UIBarButtonItem * m_redoBarItem; // +0x178
    RTEAttachmentViewProvider * m_attachmentViewProvider; // +0x180
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForLightMode; // +0x188
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForDarkMode; // +0x190
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForTransparentMode; // +0x198
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForLightMode; // +0x1a0
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForDarkMode; // +0x1a8
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForTransparentMode; // +0x1b0
    WNSelectionView * m_selectionView; // +0x1b8
    MiniRecTransitionController * m_minimizationTransitionController; // +0x1c0
    UIView * m_movingAttachmentView; // +0x1c8
    WNAttachmentBaseView * m_movingInnerView; // +0x1d0
    WNAttachmentBaseView * m_sourceAttachmentView; // +0x1d8
    _NSRange m_sourceAttachmentViewRange; // +0x1e0
    CGPoint m_longPressStartPosition; // +0x1f0
    CADisplayLink * m_scrollDisplayLink; // +0x200
    unsigned long long m_scrollMode; // +0x208
    BOOL m_onScrollingLongImage; // +0x210
    BOOL m_canMovingAttachmentView; // +0x211
    MMWebTransHelpButton * m_translateHelpBtn; // +0x218
    WNTranslateTopView * m_translateTopView; // +0x220
    UIView * m_oTitleView; // +0x228
    BOOL m_hasErrorDataType; // +0x230
    BOOL _bEditable; // +0x231
    BOOL _bShowMoreMenu; // +0x232
    BOOL _bPresentedByMiniTask; // +0x233
    BOOL _bShowLocateToMsg; // +0x234
    unsigned int _maxObjectCount; // +0x238
    FavoritesItemDataField * _scrollToData; // +0x240
    WNSaveImageLogic * _saveImageLogic; // +0x248
    id /* block */ _viewDidAppearCompletion; // +0x250
    unsigned long long _scene; // +0x258
    NSString * _placeHolder; // +0x260
    unsigned long long _maxFileSize; // +0x268
}
- (void)initToolView;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)hideKeyboard;
- (void)onTopBarFrameChanged;
- (void)forceHideToolView;
- (void)updateToolBarHeight;
- (void)onBecomeFirstResponder:(id)arg1;
- (void)onResignFirstResponder:(id)arg1;
- (void)hideToolView;
- (void)onTapWeAppMPShortLink:(id)arg1;
- (BOOL)isOnContentSearching;
- (BOOL)enableOrderListMenu;
- (void)onEditOrderList;
- (unsigned int)objectCount;
- (unsigned long long)getMaxFileSize;
- (void)holdOnAudio;
- (BOOL)ifNonTextParaInfoNumExceedLimit:(long long)arg1;
- (void)insertAttributes:(id)arg1;
- (BOOL)canBold;
- (BOOL)canHighlight;
- (BOOL)isOlLiParagraph;
- (BOOL)isTodoParagraph;
- (BOOL)isUlLiParagraph;
- (BOOL)checkListContent:(unsigned long long)arg1;
- (void)onParagraphSetOl;
- (void)onParagraphSetTodo;
- (void)onAddCurrentTime;
- (void)onParagraphSetUl;
- (void)onBold;
- (void)onHighlight;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (id)getCurrentNoteItem;
- (BOOL)isUsingVoiceInput;
- (void)onShowVoiceInputView;
- (double)getInputToolViewHeight;
- (void)onSendTextMsg:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)showStreamVoiceInputMaskView:(BOOL)arg1;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (void)editStreamVoiceTxtReturn;
- (void)initContentSearchBarView;
- (void)beginSearchContent;
- (void)checkContentSearchBarWidth;
- (void)updateSearchViewHeight;
- (void)onCancelSearch;
- (void)cancelContentSearch;
- (void)onSearchContentWith:(id)arg1;
- (void)willVisibleTextViewAt:(id)arg1;
- (void)scrollSelectedLocationVisible;
- (void)attachmentDidAddToSuperview:(id)arg1;
- (void)forwardNote;
- (void)forwardNoteToUser:(id)arg1;
- (void)realForwardNoteToUser:(id)arg1;
- (id)tryRemoveChatVoiceBeforeForward:(id)arg1;
- (void)forwardNote2WC;
- (void)realForwardNote2WC;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (void)onMenuAction:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)reportSetOnTop:(BOOL)arg1;
- (void)saveNoteAsImage;
- (void)realSaveNoteAsImage;
- (void)getNoteImage:(id /* block */)arg1;
- (void)getTableViewimage:(id /* block */)arg1;
- (id)getFooterViewImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getFavForawrdViewController;
- (void)onFavTagEditBegin:(int)arg1;
- (void)onNoteSecurityCheckOK;
- (void)onNoteSecurityCheckFail;
- (void)onNoteDownloadResourceSuccess;
- (void)onNoteDownloadResourceFail;
- (void)onNoteDownloadResourceNone;
- (void)handleSuccessState;
- (void)handleFailState;
- (void)continueSaveNoteAsImage;
- (void)refuseSaveNoteAsImage;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationWillBecomeActive;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)fixOrientation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)didMoveToNewScene:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)initUI;
- (void)initContent;
- (void)initHeaderAndFooterView;
- (void)onExpose;
- (void)initTableView;
- (void)initSelectView;
- (BOOL)disMissSelf;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (void)viewDidTransitionToNewSize;
- (long long)getCurrentOrientation;
- (void)didChangeOrientation;
- (void)recoverReadingLocation;
- (void)recordReadingLocation;
- (void)setM_uiVcType:(unsigned int)arg1;
- (void)configWithMsg:(id)arg1;
- (void)configWithFavItem:(id)arg1;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithDataWrap:(id)arg1;
- (void)configWithGroupNoticeItem:(id)arg1;
- (BOOL)isEmpty;
- (void)setBEditable:(BOOL)arg1;
- (void)setDataEdited:(BOOL)arg1;
- (void)saveNote:(BOOL)arg1;
- (void)setConversionOntop:(BOOL)arg1;
- (void)menuWillHide;
- (void)reportLandscape;
- (void)configNavbar;
- (id)redoBarItem;
- (id)undoBarItem;
- (void)setForbidUpdateToolViewEnable:(BOOL)arg1;
- (void)updateRightBarBtnStatus;
- (void)didGenerationFinished;
- (void)showLoading;
- (void)stopLoading;
- (void)showKeyboard;
- (void)reloadAll;
- (void)reloadSectionAtIndex:(unsigned long long)arg1;
- (void)updateSelection;
- (void)updateToolViewStatus;
- (void)resetToolViewType;
- (void)scrollSelectionToVisible;
- (void)scrollElementToVisible:(id)arg1;
- (void)realScrollSelectionToVisible;
- (void)scrollRectToVisible:(CGRect)arg1 fromView:(id)arg2;
- (void)scrollRectToVisible:(CGRect)arg1 fromView:(id)arg2 isFast:(BOOL)arg3;
- (void)chectNeedFlashData;
- (void)updateAllOrderedListView;
- (BOOL)isSelectionViewShowing;
- (void)tryShowSelectionViewWithMenue:(BOOL)arg1;
- (void)hideMenu;
- (void)tryUpdateSelectionViewOnScroll;
- (void)cancelSelect;
- (id)getAttachmentViewProvider;
- (id)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (id)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (id)realGetAttachmentViewProviderWithColorType:(unsigned long long)arg1;
- (CGSize)getViewSize;
- (void)onCellHeightChange;
- (void)onTableSectionChange:(id)arg1;
- (void)checkFooterView;
- (void)noteScrollViewDidScroll:(id)arg1 extendHeight:(double)arg2;
- (void)showToastOnToolView:(id)arg1;
- (void)didContentViewScrollEnd;
- (void)onOpenTopicWithUrl:(id)arg1;
- (void)contentViewWillBeginDragging;
- (long long)currentOrientation;
- (void)reloadTableView;
- (id)getCurrentViewController;
- (id)getScollToData;
- (id)getPlaceHolder;
- (id)favItem;
- (id)messageWrap;
- (id)getAllAttachmentImgInfo;
- (id)getOriginAttachmentViewWith:(id)arg1;
- (BOOL)canEditNote;
- (BOOL)isForceLoadImage;
- (void)onAttachmentAttributeStartEdit:(id)arg1;
- (void)onAttachmentAttributeEndEdit:(id)arg1;
- (void)onAttachmentAttributeNeedReload:(id)arg1;
- (BOOL)canOpenAttachmentAttribute:(id)arg1;
- (void)tryToDownloadLargeFileWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (void)onOpenAttachmentWith:(id)arg1;
- (void)onUnknownAttachmentViewAppearWith:(id)arg1;
- (unsigned int)enterNoteScene;
- (void)showMenuOnOrderListAttachmentView:(id)arg1;
- (void)showMenuForOrderListAttributeNode:(id)arg1;
- (id)getHighliteOrderListNode;
- (id)getTranslatedAttachmentInfoWith:(id)arg1;
- (BOOL)hasRotated;
- (void)onCreatAttachmentView:(id)arg1;
- (void)startAutoSaveTimer;
- (void)stopAutoSaveTimer;
- (void)onTimeSave;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (id)getAlertTitleForType:(unsigned long long)arg1;
- (BOOL)needHideKeyboardToShowAlert;
- (CGRect)getSelectionMenuTargetRectOnFirstResponder;
- (void)setPopGestureEnable:(BOOL)arg1;
- (double)getToolBarY;
- (void)tryUpdateToMinimize;
- (BOOL)tryAddToMinimize:(id)arg1;
- (void)addToMinimizeWithGenerateType:(unsigned long long)arg1;
- (void)updateToMinimize;
- (BOOL)tryAddToMultiContent;
- (void)installMinimizationTransitionController;
- (id)minimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)addToTaskHistory;
- (void)removeTaskHistory;
- (BOOL)checkNeedReloadData:(unsigned int)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (id)minimizationTaskData;
- (id)multiContentTaskData;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (id)currentMultiContentTaskBizName;
- (id)currentMultiContentTaskBizKey;
- (BOOL)isStarMinimizePage;
- (BOOL)isMultiContentPage;
- (void)fixMinimizationIssueWhenPopedOrDismiss;
- (void)onLongPress:(id)arg1;
- (unsigned long long)getLongPressMediaType;
- (id)getPressingAttachmentViewFor:(id)arg1;
- (id)getTextViewFor:(id)arg1;
- (void)addShadowToView:(id)arg1;
- (void)removeShadowToView:(id)arg1;
- (void)onStartLongPress:(id)arg1 fromGesture:(id)arg2;
- (void)forceToHideKeyBoard;
- (void)scaleMovingViewWith:(id)arg1;
- (void)onStartMoveAttachmentFromGesture:(id)arg1;
- (void)startScroll;
- (void)stopScroll;
- (void)scrollForConstantSpeed;
- (void)onMoveAttachmentFromGesture:(id)arg1;
- (void)tryToScrollViewWith:(CGPoint)arg1;
- (void)onMoveAttachmentCancel;
- (void)onMoveAttachmentEnd;
- (void)tryToShowMenuWithoutSelectionView;
- (void)clearMoveStatus;
- (BOOL)isMovingAttachment;
- (BOOL)isOnLongPress;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)checkCanTranslateContent;
- (void)initTranslateTitleBtn;
- (BOOL)isInTranslation;
- (void)translateContent:(id)arg1;
- (void)cancelTranslate;
- (void)onTranslateFinishWith:(BOOL)arg1 errMsg:(id)arg2;
- (void)insertContentStroage:(id)arg1;
- (id)generateContentStorageWithAttributes:(id)arg1;
- (id)getMenuItemsWithResponder:(id)arg1;
- (void)onCloseTranslateTopView;
- (void)onChangeTranslateLanguage;
- (void)clickHelperTransButton;
- (void)clickHelperRevertButton;
- (BOOL)canShowLocateToMsg;
- (void)locateToMsg;
- (id)scrollToData;
- (void)setScrollToData:(id)arg1;
- (id)saveImageLogic;
- (void)setSaveImageLogic:(id)arg1;
- (BOOL)bEditable;
- (id /* block */)viewDidAppearCompletion;
- (void)setViewDidAppearCompletion:(id /* block */)arg1;
- (BOOL)bShowMoreMenu;
- (void)setBShowMoreMenu:(BOOL)arg1;
- (BOOL)bPresentedByMiniTask;
- (void)setBPresentedByMiniTask:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (unsigned long long)maxFileSize;
- (void)setMaxFileSize:(unsigned long long)arg1;
- (unsigned int)maxObjectCount;
- (void)setMaxObjectCount:(unsigned int)arg1;
- (BOOL)bShowLocateToMsg;
- (void)setBShowLocateToMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end
