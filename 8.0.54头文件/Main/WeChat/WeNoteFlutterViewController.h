@interface WeNoteFlutterViewController : MMFlutterViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate, FavTagViewDelegate, MinimizationTransitionControllerDelegate, WNSaveImageResourceMgrExt, IFavoritesExt, IFavoritesRepairSvrDataExt, IFavCdnDownloadMgrExt, IRecordDownloadExt, MMTipsViewControllerDelegate, WNAlertViewHelperDelegate, IMsgExt, WNSaveImageLogicDataSource, RTEAttachmentViewProviderDelegate, WNAttachmentBaseViewDelegate, WeNoteAffLogicDelegate>
{
    unsigned int m_oriVersion; // +0x68
    WeNoteFlutterInstance * m_flutterInstance; // +0x70
    WeNoteAffDelegateLogic * m_affDelegateLogic; // +0x78
    MMScrollActionSheet * m_scrollActionSheet; // +0x80
    BOOL m_bDeletePopView; // +0x88
    MiniRecTransitionController * m_minimizationTransitionController; // +0x90
    WeNoteReportLogic * m_reportLogic; // +0x98
    NSMutableArray * m_lazyDownloadDatas; // +0xa0
    WNSaveImageLogic * m_saveImageLogic; // +0xa8
    WNContentStorage * m_contentStorage; // +0xb0
    UIImage * m_snapshotImage; // +0xb8
    BOOL m_forceLoadImage; // +0xc0
    long long m_convertToImgRemainCheckCount; // +0xc8
    RTEAttachmentViewProvider * m_attachmentViewProvider; // +0xd0
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForLightMode; // +0xd8
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForDarkMode; // +0xe0
    RTEAttachmentViewProvider * m_attachmentViewProviderForLongImageUtilForTransparentMode; // +0xe8
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForLightMode; // +0xf0
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForDarkMode; // +0xf8
    RTEAttachmentViewProvider * m_attachmentViewProviderForSquareImageUtilForTransparentMode; // +0x100
    NSString * m_identifier; // +0x108
    unsigned int m_maxObjectId; // +0x110
    BOOL m_waitForUpload; // +0x114
    FavoritesItemDataField * m_openingData; // +0x118
    BOOL m_enableLazyDownload; // +0x120
    NSString * m_sessionId; // +0x128
    BOOL m_holdOnAudio; // +0x130
    unsigned long long m_htmlBeginDownloadTime; // +0x138
    unsigned long long m_htmlDownloadEndTime; // +0x140
    BOOL _bEditable; // +0x148
    BOOL _bPresentedByMiniTask; // +0x149
    BOOL _bShowLocateToMsg; // +0x14a
    unsigned long long _maxFileSize; // +0x150
    unsigned long long _scene; // +0x158
    FavoritesItem * _favItem; // +0x160
    CMessageWrap * _messageWrap; // +0x168
    WCDataItem * _wcDataItem; // +0x170
    FavDataItemWrap * _dataWrap; // +0x178
    FavoritesItemDataField * _scrollToData; // +0x180
}
- (BOOL)isEmpty;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (void)forwardNoteToUser:(id)arg1;
- (void)realForwardNoteToUser:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)setConversionOntop:(BOOL)arg1;
- (void)forwardNote2WC;
- (void)realForwardNote2WC;
- (id)minimizationTaskData;
- (void)checkPullNoticeScreenBefore;
- (void)onClickMoreBtn;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)reportSetOnTop:(BOOL)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getFavForawrdViewController;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)tryAddToMinimize:(id)arg1;
- (void)addToMinimizeWithGenerateType:(unsigned long long)arg1;
- (id)minimizationTransitionController;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)installMinimizationTransitionController;
- (void)updateToMinimize;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (void)saveNoteAsImage;
- (void)continueSaveNoteAsImage;
- (void)realSaveNoteAsImage;
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
- (id)initWithFlutterInstance:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setIdentifierId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)tryToInitWeNoteModel;
- (void)realInitWeNoteModel;
- (void)initReportLogic;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)clearInstance;
- (void)setEditable:(BOOL)arg1;
- (int)enterNoteScene;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)disMissSelf;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldInteractiveDismiss;
- (void)saveNoteWithCompleteHandler:(id /* block */)arg1;
- (void)loadNote;
- (void)configWithFavItem:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configWithMsg:(id)arg1;
- (BOOL)checkMsgFile;
- (void)configWithWCDataItem:(id)arg1;
- (void)configWithDataWrap:(id)arg1;
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
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (BOOL)checkHTMLWithDataId:(id)arg1 isSuccess:(BOOL)arg2;
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
- (void)OnDelFavoritesItems:(id)arg1;
- (BOOL)canShowLocateToMsg;
- (void)locateToMsg;
- (void)OnUpdateItems:(id)arg1;
- (BOOL)bEditable;
- (void)setBEditable:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

