@interface WeNoteFlutterViewController : MMFlutterViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate, FavTagViewDelegate, MinimizationTransitionControllerDelegate, WNSaveImageResourceMgrExt, IFavoritesExt, IFavoritesRepairSvrDataExt, IFavCdnDownloadMgrExt, IRecordDownloadExt, MMTipsViewControllerDelegate, WNAlertViewHelperDelegate, IMsgExt, WNSaveImageLogicDataSource, WeNoteNewSaveImageLogicDataSource, RTEAttachmentViewProviderDelegate, WNAttachmentBaseViewDelegate, WeNoteAffLogicDelegate, FavVideoCompressExt>
{
    unsigned int m_oriVersion; // +0x70
    WeNoteFlutterInstance * m_flutterInstance; // +0x78
    WeNoteAffDelegateLogic * m_affDelegateLogic; // +0x80
    MMScrollActionSheet * m_scrollActionSheet; // +0x88
    BOOL m_bDeletePopView; // +0x90
    MiniRecTransitionController * m_minimizationTransitionController; // +0x98
    WeNoteReportLogic * m_reportLogic; // +0xa0
    NSMutableArray * m_lazyDownloadDatas; // +0xa8
    WNSaveImageLogic * m_saveImageLogic; // +0xb0
    WeNoteNewSaveImageLogic * m_newSaveImageLogic; // +0xb8
    WNContentStorage * m_contentStorage; // +0xc0
    UIImage * m_snapshotImage; // +0xc8
    BOOL m_forceLoadImage; // +0xd0
    long long m_convertToImgRemainCheckCount; // +0xd8
    long long m_shareImageStartIndex; // +0xe0
    long long m_shareImageEndIndex; // +0xe8
    RTEAttachmentViewProvider * m_attachmentViewProvider; // +0xf0
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForLightMode; // +0xf8
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForDarkMode; // +0x100
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForTransparentMode; // +0x108
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForLightMode; // +0x110
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForDarkMode; // +0x118
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForTransparentMode; // +0x120
    id /* block */ m_pendingForwardBlock; // +0x128
    NSString * m_identifier; // +0x130
    unsigned int m_maxObjectId; // +0x138
    BOOL m_waitForUpload; // +0x13c
    FavoritesItemDataField * m_openingData; // +0x140
    BOOL m_enableLazyDownload; // +0x148
    NSString * m_sessionId; // +0x150
    BOOL m_holdOnAudio; // +0x158
    unsigned long long m_htmlBeginDownloadTime; // +0x160
    unsigned long long m_htmlDownloadEndTime; // +0x168
    MMTimer * m_saveTimer; // +0x170
    BOOL _enableNullAutoDelete; // +0x178
    BOOL _bEditable; // +0x179
    BOOL _bPresentedByMiniTask; // +0x17a
    BOOL _bShowLocateToMsg; // +0x17b
    BOOL _disableMinimize; // +0x17c
    BOOL _usePlaceholderTransition; // +0x17d
    BOOL _bConfigFromFavItem; // +0x17e
    id /* block */ _viewDidAppearCompletion; // +0x180
    unsigned long long _maxFileSize; // +0x188
    unsigned long long _scene; // +0x190
    FavoritesItem * _favItem; // +0x198
    CMessageWrap * _messageWrap; // +0x1a0
    WCDataItem * _wcDataItem; // +0x1a8
    FavDataItemWrap * _dataWrap; // +0x1b0
    FavoritesItemDataField * _scrollToData; // +0x1b8
    long long _entryScene; // +0x1c0
    NSString * _plusSessionId; // +0x1c8
    unsigned long long _m_viewDidLoadTime; // +0x1d0
}
- (BOOL)isEmpty;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (BOOL)isMarkdownNoteAndUploadFailed;
- (void)forwardNoteToUser:(id)arg1;
- (void)realForwardNoteToUser:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)setConversionOntop:(BOOL)arg1;
- (void)forwardNote2WC;
- (void)realForwardNote2WC;
- (id)minimizationTaskData;
- (id)multiContentTaskData;
- (void)checkPullNoticeScreenBefore;
- (void)onClickMoreBtn;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)openSwitchModelLiteApp;
- (void)reportSetOnTop:(BOOL)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getFavForawrdViewController;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)tryAddToMinimize:(id)arg1;
- (void)addToMinimizeWithGenerateType:(unsigned long long)arg1;
- (BOOL)tryAddToMultiContent;
- (id)minimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)installMinimizationTransitionController;
- (void)tryUpdateToMinimize;
- (void)tryUpdateToMinimizeWithInteractive:(BOOL)arg1;
- (void)fixMinimizationIssueWhenPopedOrDismiss;
- (BOOL)isStarMinimizePage;
- (BOOL)isMultiContentPage;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (id)currentMultiContentTaskBizName;
- (id)currentMultiContentTaskBizKey;
- (void)saveNoteAsImage;
- (void)continueSaveNoteAsImage;
- (id)clipContentSectionListData:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (void)_fillPreTabCount:(id)arg1 fromPreviousSection:(id)arg2;
- (void)realSaveNoteAsImage;
- (void)saveSectionNoteAsImageStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (void)refuseSaveNoteAsImage;
- (id)getFooterViewImage;
- (void)getNoteImage:(id /* block */)arg1;
- (void)getTableViewimage:(id /* block */)arg1;
- (void)downloadResourceSuccess:(unsigned int)arg1;
- (void)downloadResourceFail:(unsigned int)arg1;
- (void)downloadResourceNone:(unsigned int)arg1;
- (void)handleSuccessState;
- (void)handleFailState;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(BOOL)arg2;
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithFlutterInstance:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)preloadResourcesIfNeeded;
- (void)setIdentifierId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)tryToInitWeNoteModel;
- (void)realInitWeNoteModel;
- (void)initReportLogic;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reportPageOut;
- (void)clearInstance;
- (void)setEditable:(BOOL)arg1;
- (int)enterNoteScene;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)handleRecordingOnDisappear;
- (BOOL)disMissSelf;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldInteractiveDismiss;
- (void)syncRecordingFavLocalIdAfterSaveIfNeeded;
- (void)patchDataListWithLiveRecordingIfNeeded;
- (void)activateRecordingFloatingWindow;
- (void)tryRestoreRecordingFromFloatingWindow;
- (void)handleDictationOnDisappear;
- (void)activateDictationFloatingWindow;
- (void)tryRestoreDictationFromFloatingWindow;
- (void)applicationWillResignActive;
- (void)saveNoteWithCompleteHandler:(id /* block */)arg1 isAutoSave:(BOOL)arg2;
- (BOOL)fixRegisterIFavCdnDownloadMgrExt;
- (void)loadNote;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithMsg:(id)arg1;
- (BOOL)checkMsgFile;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithDataWrap:(id)arg1;
- (void)ensureDataWrap;
- (void)checkHTMLFile;
- (void)tryToParseHTML:(id)arg1;
- (void)onOpenAttachmentWith:(id)arg1;
- (void)didControllerAppear;
- (BOOL)isInTranslation;
- (void)checkCompressImageForFavItem;
- (BOOL)checkCompressImageForFavData:(id)arg1;
- (BOOL)getCompressImageWithPath:(id)arg1;
- (void)compressImageWithGCD:(id)arg1 completeHandle:(id /* block */)arg2;
- (id)genAttachmentId;
- (void)startAutoSaveTimer;
- (void)stopAutoSaveTimer;
- (void)onTimeSave;
- (BOOL)isNewCreateEmptyNote;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (BOOL)checkHTMLWithDataId:(id)arg1 isSuccess:(BOOL)arg2 retCode:(int)arg3;
- (void)onChatNewMsgSent:(id)arg1;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)getAlertTitleForType:(unsigned long long)arg1;
- (BOOL)needHideKeyboardToShowAlert;
- (void)hideKeyboard;
- (void)showKeyboard;
- (id)viewController;
- (id)reportLogic;
- (id)wnFlutterInstance;
- (void)tryToDownloadVideoWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (void)setPopGestureEnable:(BOOL)arg1;
- (void)setNavigationBackEnable:(BOOL)arg1;
- (void)setEdgeGestureEnable:(BOOL)arg1;
- (id)getMidImageWidthAndHeightForImage:(id)arg1;
- (id)getMidImageWidthAndHeightForVideo:(id)arg1;
- (void)insertDatas:(id)arg1;
- (void)insertText:(id)arg1;
- (void)holdOnAudio;
- (unsigned long long)getMaxFileSize;
- (id)creatRTETextViewWithCustomFrame:(CGRect)arg1;
- (id)creatRTETextViewWithCustomFrame:(CGRect)arg1 andTextContainerInset:(UIEdgeInsets)arg2;
- (id)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (id)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (id)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (id)getAttachmentViewProvider;
- (id)realGetAttachmentViewProviderWithColorType:(unsigned long long)arg1;
- (void)onCreatAttachmentView:(id)arg1;
- (BOOL)hasRotated;
- (BOOL)isForceLoadImage;
- (BOOL)canEditNote;
- (id)getHighliteOrderListNode;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (BOOL)canShowLocateToMsg;
- (void)locateToMsg;
- (void)OnUpdateItems:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (BOOL)hasEdited;
- (BOOL)hasEverEdited;
- (BOOL)bEditable;
- (void)setBEditable:(BOOL)arg1;
- (id /* block */)viewDidAppearCompletion;
- (void)setViewDidAppearCompletion:(id /* block */)arg1;
- (unsigned long long)maxFileSize;
- (void)setMaxFileSize:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)messageWrap;
- (id)wcDataItem;
- (id)dataWrap;
- (BOOL)bPresentedByMiniTask;
- (void)setBPresentedByMiniTask:(BOOL)arg1;
- (id)scrollToData;
- (void)setScrollToData:(id)arg1;
- (BOOL)bShowLocateToMsg;
- (void)setBShowLocateToMsg:(BOOL)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (id)plusSessionId;
- (void)setPlusSessionId:(id)arg1;
- (unsigned long long)m_viewDidLoadTime;
- (void)setM_viewDidLoadTime:(unsigned long long)arg1;
- (BOOL)disableMinimize;
- (void)setDisableMinimize:(BOOL)arg1;
- (BOOL)usePlaceholderTransition;
- (void)setUsePlaceholderTransition:(BOOL)arg1;
- (BOOL)bConfigFromFavItem;
- (void)setBConfigFromFavItem:(BOOL)arg1;
- (void).cxx_destruct;
@end
