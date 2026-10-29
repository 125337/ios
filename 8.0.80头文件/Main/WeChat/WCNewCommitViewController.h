@interface WCNewCommitViewController : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, WCGroupTagViewControllerDelegate, SightViewDelegate, WCDragableSelectorViewDelegate, WCMomentsPrivacyViewControllerDelegate, WCSightVideoCompositeTaskDelegate, MomentsFlutterPrivacyViewControllerlDelegate, MMGrowTextViewDictationIconLayoutHost, UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, MMTableViewInfoDelegate, ContactsSelectorControllerDelegate, IMsgExt, WCFacadeExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    WCTableViewManager * m_tableViewManager; // +0x70
    UIView * _headView; // +0x78
    UIView * _mediaContainerView; // +0x80
    WCSelectorView * _withImageView; // +0x88
    WCSelectorView * _withContactView; // +0x90
    UIView * _footerView; // +0x98
    UILabel * _privacyTipsLabel; // +0xa0
    MMUIButton * _qzoneButton; // +0xa8
    UIImage * _sightThumbImage; // +0xb0
    UIImageView * _sightThumbImageView; // +0xb8
    UIActivityIndicatorView * _sightLoadingView; // +0xc0
    SightIconView * _progressView; // +0xc8
    WCInputController * _inputController; // +0xd0
    UIView * _backgroundView; // +0xd8
    UIImageView * _inputView; // +0xe0
    UIButton * _expressionButton; // +0xe8
    unsigned int _iInputSection; // +0xf0
    id <WCCommitViewAnimationDelegate> _delegate; // +0xf8
    WCDataItem * _cacheDateItem; // +0x100
    MMLoadingView * _loadingView; // +0x108
    MMTimer * _fireTimer; // +0x110
    WCLocationInfo * _poiInfo; // +0x118
    WCMusicInfo * _musicInfo; // +0x120
    BOOL _bNeedAnimation; // +0x128
    BOOL _bShowLocation; // +0x129
    BOOL _bHideAddView; // +0x12a
    WCPasteTextLengthLogic * pastelogic; // +0x130
    WCTimelinePOIPickerViewController * _poiPickerViewController; // +0x138
    NSString * _loadingOKStr; // +0x140
    WCMomentsPostReportSession * _postReportSession; // +0x148
    WCTimelineExtBean * _extBean; // +0x150
    WCDragTipView * _dragTipView; // +0x158
    BOOL m_isUseMMAsset; // +0x160
    BOOL m_hasConfirmReturn; // +0x161
    BOOL m_bFromWCList; // +0x162
    BOOL _isPrivatePost; // +0x163
    BOOL _isFromExtension; // +0x164
    BOOL _enteredWithDraft; // +0x165
    BOOL _lockPrivateVisibility; // +0x166
    BOOL _togetherEnabled; // +0x167
    BOOL _askXiaoWeiPendingPost; // +0x168
    BOOL _hasShowDragTip; // +0x169
    BOOL _canShowLastSelectTagCell; // +0x16a
    BOOL _isClickedLastSelectTagCell; // +0x16b
    BOOL _isClickedLastLikeEasterEggCell; // +0x16c
    BOOL _hasReportedLikeEggOptionBtnExp; // +0x16d
    BOOL _hasReportedEggLastUsedBtnExp; // +0x16e
    BOOL _hasClickDone; // +0x16f
    BOOL _hasShownErrorTips; // +0x170
    BOOL _hasToastedForPrivateMention; // +0x171
    BOOL _hasAppearedOnce; // +0x172
    BOOL _dynamicTagEnabled; // +0x173
    BOOL _dictationEnabled; // +0x174
    BOOL _dictationEnabledResolved; // +0x175
    EmoticonBoardView * m_emoticonBoardView; // +0x178
    WCMomentsPageContext * _pageContext; // +0x180
    MMGrowTextView * _textView; // +0x188
    WCMomentsSpringTextContainerView * _springTextContainerView; // +0x190
    ContactsSelectorController * _contactsSelectorController; // +0x198
    unsigned long long _type; // +0x1a0
    NSString * _poiReportStr4Commit; // +0x1a8
    SightDraft * _sightDraft; // +0x1b0
    MMAsset * _sightAsset; // +0x1b8
    NSArray * _tempSelectContacts; // +0x1c0
    NSArray * _interactSelectContacts; // +0x1c8
    NSArray * _excludeSelectContacts; // +0x1d0
    NSArray * _excludeLabelNames; // +0x1d8
    NSString * _selectGroupName; // +0x1e0
    WCTimelineEnhanceDraftController * _enhanceDraftSaveController; // +0x1e8
    WCTimelineTrashReportData * _trashReportData; // +0x1f0
    id <WCBaseCommitViewResultDelegate> _baseResultDelegate; // +0x1f8
    UIView * _askXiaoWeiEntryView; // +0x200
    WCCommitAskXiaoWeiHandler * _askXiaoWeiHandler; // +0x208
    NSString * _lastClkXiaoWeiId; // +0x210
    NSString * _xiaoWeiOriginalText; // +0x218
    NSString * _xiaoWeiLastBackfillText; // +0x220
    ImageSelectorController * _imageSelectorController; // +0x228
    SightView * _m_sightFullScreenPreviewView; // +0x230
    WCDragDeleteBarView * _deleteBarView; // +0x238
    WCPOIStarView * _poiStarView; // +0x240
    WCCommitPrivacySetting * _lastPostPrivacySetting; // +0x248
    WCSnsLikeEasterEggInfo * _likeEasterEggInfo; // +0x250
    WCSnsLikeEasterEggInfo * _lastLikeEasterEggInfo; // +0x258
    NSMutableDictionary * _likeEasterEggThumbImageCache; // +0x260
    NSMutableSet * _likeEasterEggThumbProbingMd5s; // +0x268
    long long _likeEasterEggEmojiSource; // +0x270
    MMTipsViewController * _savingAlertView; // +0x278
    MMUILabel * _remainWordCountLabel; // +0x280
    long long _lastRemainWordCount; // +0x288
    MMLoadingView * _tigerToastView; // +0x290
    WCMomentsAnimatedFireworksView * _animatedFireworksView; // +0x298
    WCEcsLogoNameView * _ecsView; // +0x2a0
    WCTableViewNormalCellManager * _locationCellManager; // +0x2a8
    WCTableViewNormalCellManager * _mentionCellManager; // +0x2b0
    WCTableViewNormalCellManager * _privacyCellManager; // +0x2b8
    double _commitOptionCellsLayoutWidth; // +0x2c0
    long long _springContentStyle; // +0x2c8
    long long _springPostScene; // +0x2d0
}
- (BOOL)isSpringStyle;
- (void)showLoadingView;
- (void)onLoadingShowOK:(id)arg1;
- (void)beginAnimationStepOne;
- (void)beginAnimationStepTwo;
- (void)beginAnimationStepTwoWithCustomView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initInputToolView;
- (void)initRemainWordCountLabel;
- (void)updateRemainWordCountLabelWithRemain:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (void)initInputController;
- (void)asyncUpdateContentOffset;
- (void)updateContentOffset;
- (void)becomeInput;
- (void)resignInput;
- (void)didCommitText:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)inputController:(id)arg1 didChangeInputViewY:(double)arg2;
- (void)MMGrowTextViewDidClickDictationStartIntent:(id)arg1;
- (void)inputControllerDidExposeDictationIcon:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidChange;
- (void)showToastForCroppingTigerText;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)reportTopicTagInputMenuItemAction:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onCollectionViewCellMoved:(CGPoint)arg1;
- (BOOL)onEndCollectionViewCellMovement:(long long)arg1;
- (void)onDragableSelectorViewHeightChanged;
- (BOOL)isForbidPageSheet;
- (void)commonInit;
- (id)init;
- (id)initWithImages:(id)arg1 contacts:(id)arg2;
- (id)initWithSightDraft:(id)arg1;
- (id)initWithTextType;
- (id)getViewController;
- (id)pageContext;
- (BOOL)canShowLastSelectTagCell;
- (BOOL)canShowUseMyGroupDesc;
- (BOOL)canShowUseMyGroupCell;
- (double)thumbnailGridAvailableWidth;
- (double)thumbnailImageSideLength;
- (BOOL)canShowLikeEasterEggCell;
- (BOOL)canShowLastLikeEasterEggCell;
- (CGSize)thumbnailSize;
- (double)getImageSize;
- (CGSize)thumbnailSizeForType:(unsigned long long)arg1;
- (void)setM_bFromWCList:(BOOL)arg1;
- (id)postingDataItem;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (void)postReportSessionWillStart;
- (void)postReportSessionDidClickPost;
- (void)postReportSessionWillFinish;
- (unsigned long long)mediaTakenCountFromMediaArray:(id)arg1;
- (void)setupInputAreaReportInfo:(unsigned long long)arg1;
- (id)createCustomFooterViewForContactList;
- (void)makeUseMyGroupCell:(id)arg1;
- (void)makeLastSelectTagCell:(id)arg1 cellManager:(id)arg2;
- (void)makeLastSelectTagSummaryCell:(id)arg1 cellManager:(id)arg2;
- (void)makeLikeEasterEggCell:(id)arg1 andNormalCellManger:(id)arg2;
- (id)likeEasterEggThumbViewWithInfo:(id)arg1;
- (void)probeLikeEasterEggThumbWithInfo:(id)arg1;
- (id)likeEasterEggThumbImageCache;
- (id)likeEasterEggThumbProbingMd5s;
- (void)downloadLikeEasterEggThumbWithInfo:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)makeLastLikeEasterEggCell:(id)arg1;
- (void)onLastLikeEasterEggCellClick;
- (void)updateLikeEasterEggInfo:(id)arg1;
- (void)onLastSelectTagMoreEntryClick;
- (void)onLastSelectTagCellClick;
- (id)_vaildContacts:(id)arg1;
- (void)saveLastPostPrivacySetting;
- (void)saveLastLikeEasterEggInfo;
- (BOOL)isStringArr:(id)arg1 equalTo:(id)arg2;
- (void)makeEvaluatePOICell:(id)arg1;
- (BOOL)shouldShowEvaluatePOI;
- (id)navigationBarBackgroundColor;
- (id)textContainerView;
- (BOOL)isDictationEnabled;
- (id)dictationIconContainerForGrowTextView:(id)arg1;
- (BOOL)shouldDisableDictationIconTextMaskForGrowTextView:(id)arg1;
- (double)dictationIconInputBarTopY;
- (double)dictationIconTextLineCenterYForGrowTextView:(id)arg1;
- (void)growTextView:(id)arg1 layoutDictationIconView:(id)arg2;
- (void)createSubviews;
- (void)addEcsShareViewIfNeeded;
- (void)onAskXiaoWeiFromTextMenu;
- (void)onAskXiaoWeiEntryTapped;
- (void)onAskXiaoWeiTappedImpl;
- (void)_performAskXiaoWeiUpload;
- (BOOL)_isMiaoJianNotComposed:(id)arg1;
- (id)_askXiaoWeiMiaoJianMaterial;
- (id)_askXiaoWeiMiaoJianMaterialAssetIds;
- (unsigned long long)_askXiaoWeiImageIndexForLocalId:(id)arg1 inImages:(id)arg2;
- (id)_uiImageFromLocalPath:(id)arg1;
- (id)_processedImageFromLocalPath:(id)arg1;
- (BOOL)isAppendImagesExceedMaxCount:(unsigned long long)arg1;
- (unsigned long long)fillImagesWithLocalIdMap:(id)arg1 appendPaths:(id)arg2 skippedAppendCount:(unsigned long long *)arg3;
- (id)askXiaoWeiContentSnapshotSuffix;
- (void)_submitAskXiaoWeiUploadTask:(id)arg1;
- (BOOL)_isAskXiaoWeiEntryEnabled;
- (void)setupAskXiaoWeiEntryView;
- (void)_layoutAskXiaoWeiEntryView;
- (unsigned long long)_currentPublisherType;
- (int)_xiaoWeiEnterScene;
- (id)_xiaoWeiReporterExtraParams;
- (id)_snsXiaoWeiCommonParams;
- (void)reportXiaoWeiTextFillWithContent:(id)arg1 type:(unsigned long long)arg2 method:(unsigned long long)arg3;
- (void)addMediaView;
- (void)_initFireworksPlayerViewIfNeeded;
- (void)_layoutFireworksPlayerView;
- (void)_layoutEcsView;
- (id)fireworksDisplayRectList;
- (void)startPlayRandomFireworksIfNeeded;
- (void)stopPlayRandomFireworksIfNeeded;
- (id)createPrivacyTipsLabel;
- (void)reloadFooterView;
- (void)setDeleteBarHidden:(BOOL)arg1;
- (id)getShowAddress;
- (BOOL)isLockedPrivateMode;
- (BOOL)isPrivatePostDisabledUI;
- (BOOL)isLikeEasterEggDisabledByPrivacy;
- (BOOL)isMentionCellDisabled;
- (void)makeContactCell:(id)arg1 andNormalCellManger:(id)arg2;
- (id)mentionNamesText;
- (id)getVisiblePrivacyTitle;
- (id)getInvisiblePrivacyTitle;
- (void)makePrivacyCell:(id)arg1 andNormalCellManger:(id)arg2;
- (void)makePrivacyForComplex:(id)arg1 andNormalCellManger:(id)arg2;
- (id)createTitleLabelForPrivacyCellWithTitle:(id)arg1 color:(id)arg2;
- (id)createContentLabelForPrivacyCellWithTitle:(id)arg1 numberOfLines:(long long)arg2;
- (id)createPrefixedContentLabelWithText:(id)arg1 numberOfLines:(long long)arg2;
- (void)reloadData;
- (void)adjustTigerTextContainerView;
- (void)reloadHeadViewSubviewsY;
- (double)thumbnailSettingMargin;
- (void)reloadType;
- (void)initView;
- (void)configDataReportForPostBtn:(id)arg1;
- (id)genSnsPostBtnReportDict;
- (long long)likeEasterEggReportVisibleStatus;
- (id)likeEasterEggReportParams;
- (id)lastUsedEggBtnReportParams;
- (long long)likeEasterEggEmojiSource;
- (void)initTextViewContent;
- (id)stringByTrimmingWhitespaceNewlineAttachment:(id)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidLoad;
- (void)resetEditBehaviorReporter;
- (void)setPostPrivacy:(long long)arg1;
- (void)setupEnhanceDraftSaveController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (double)commitContentWidth;
- (void)layoutCommitContentContainer;
- (void)layoutCommitInputViewsForDismissedState;
- (void)refreshCommitOptionCellsForContainerWidthIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)protectNavbarIsVisiable;
- (void)showPrivacyAlertView;
- (void)showTogetherAlertView;
- (void)showTogetherAlertViewWithMessage:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)onPrivacyAlertViewConfirm;
- (void)onTogetherAlertViewConfirm;
- (void)setupPrivatePostNavTitleView;
- (void)onPrivacyCellClicked;
- (void)onWithContactCellClicked;
- (void)onLocationCellClicked;
- (void)onLikeEasterEggCellClicked;
- (void)OnReturn;
- (BOOL)shouldShowAlert:(long long)arg1;
- (BOOL)shouldShowAlertForward;
- (void)onSaveBtnClickedWithTag:(long long)arg1;
- (void)onCancelSaveBtnClickedWithTag:(long long)arg1;
- (void)showSaveOrNotAlert:(long long)arg1;
- (void)doExit;
- (void)reportYuanBaoTemplateInfo:(id)arg1;
- (BOOL)processImage;
- (void)afterProcessSingleImage;
- (BOOL)checkImageState;
- (void)setErrorTips:(long long)arg1 forMMImage:(id)arg2;
- (long long)errorTipsForMMImage:(id)arg1;
- (void)showErrorTipsIfNeeded;
- (void)configLivePhotoReportForAlertView:(id)arg1 errorTips:(long long)arg2;
- (void)markErrorTipsShown;
- (void)clearErrorTipsState;
- (void)reportImageExifExceptionWithAsset:(id)arg1 error:(id)arg2;
- (void)validateImagesBeforePosting;
- (void)removeInvalidImages:(id)arg1 tag:(id)arg2;
- (void)postImages;
- (id)getUsernamesByTagNames:(id)arg1;
- (id)geTempSelectContactUsernames;
- (BOOL)checkTogetherWithGroupConflicts;
- (id)buildLocationInfoForUploadTask;
- (void)addPoiInfoForTask:(id)arg1;
- (void)OnDone;
- (void)onConfirmPostingImages;
- (int)currentFeedType;
- (void)postNewItemForSight;
- (void)_onPostNewItemForSightFailed;
- (void)setupPrivacyForUploadTask:(id)arg1;
- (void)processUploadTask:(id)arg1;
- (void)didFinishCommiting;
- (void)didCancelCommiting;
- (void)onWCPostPrivacyChanged;
- (void)updateCommitBtnTitle;
- (void)ImageSelectorController:(id)arg1 willSelectAssetOfType:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 willDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 didDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 willDeleteAllImagesFromType:(unsigned long long)arg2;
- (void)ImageSelectorController:(id)arg1 didDeleteAllImagesFromType:(unsigned long long)arg2 deletedImagesCount:(long long)arg3;
- (void)ImageSelectorController:(id)arg1 didSelectSightDraft:(id)arg2;
- (void)imagesUpdated;
- (void)onClickDownloadFailImage:(id)arg1;
- (BOOL)shouldJustReturnMMAsset;
- (void)updateSelectorView;
- (void)onRemindContactSelected:(id)arg1;
- (void)onImageOrderChange;
- (void)ImageSelectorControllerDidPresentCamera;
- (void)ImageSelectorControllerStartEditing;
- (void)ImageSelectorControllerStartPreview;
- (void)ImageSelectorControllerDidShowActionSheet;
- (void)ImageSelectorControllerDidTakeMedia;
- (void)ImageSelectorControllerDidPresentAssetPicker;
- (void)ImageSelectorControllerStartExportingWithAssetId:(id)arg1;
- (void)ImageSelectorControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (BOOL)showAddView;
- (void)hideInputController;
- (BOOL)couldSelectContacts;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)dealloc;
- (void)recordReportStr;
- (void)setSpringContentStyle:(long long)arg1;
- (void)addSpringInfoIntoUploadTask:(id)arg1;
- (void)updateSpringStyleRightBarEnabledState;
- (id)extBean;
- (void)setExtBean:(id)arg1;
- (void)loadBeanIfNeeded;
- (BOOL)needClearEcsShareInfoAfterLoadDraftBean;
- (void)addBeanIntoUploadTask:(id)arg1;
- (void)clearExtBean;
- (BOOL)_canSelectPrivacySetting:(long long)arg1;
- (void)_privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (void)_privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3 interactContacts:(id)arg4 excludeContacts:(id)arg5 excludeLabels:(id)arg6;
- (void)_privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3 interactContacts:(id)arg4 excludeContacts:(id)arg5 excludeLabels:(id)arg6 groupName:(id)arg7;
- (BOOL)canSelectPrivacySetting:(long long)arg1;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (void)privacySettingDataCallback:(long long)arg1 contacts:(id)arg2 labelNames:(id)arg3 interactContacts:(id)arg4 excludeContacts:(id)arg5 excludeLabelNames:(id)arg6 groupName:(id)arg7;
- (void)_checkCompositeTaskForSightDraft:(id)arg1;
- (void)_removeCompositeTaskListenerForSightDraft:(id)arg1;
- (void)_removeAllCompositeTaskDataForSightDraft:(id)arg1;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(BOOL)arg2 withSightDraft:(id)arg3;
- (void)commonRelayoutEcsView:(id)arg1;
- (void)commonUpdateWCUploadTask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bNeedAnimation;
- (void)setBNeedAnimation:(BOOL)arg1;
- (BOOL)bShowLocation;
- (void)setBShowLocation:(BOOL)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)loadingOKStr;
- (void)setLoadingOKStr:(id)arg1;
- (BOOL)m_isUseMMAsset;
- (void)setM_isUseMMAsset:(BOOL)arg1;
- (id)m_emoticonBoardView;
- (void)setM_emoticonBoardView:(id)arg1;
- (BOOL)m_hasConfirmReturn;
- (void)setM_hasConfirmReturn:(BOOL)arg1;
- (BOOL)m_bFromWCList;
- (void)setPageContext:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)springTextContainerView;
- (void)setSpringTextContainerView:(id)arg1;
- (id)contactsSelectorController;
- (void)setContactsSelectorController:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isPrivatePost;
- (void)setIsPrivatePost:(BOOL)arg1;
- (BOOL)isFromExtension;
- (void)setIsFromExtension:(BOOL)arg1;
- (BOOL)enteredWithDraft;
- (void)setEnteredWithDraft:(BOOL)arg1;
- (BOOL)lockPrivateVisibility;
- (void)setLockPrivateVisibility:(BOOL)arg1;
- (BOOL)bHideAddView;
- (void)setBHideAddView:(BOOL)arg1;
- (id)poiReportStr4Commit;
- (void)setPoiReportStr4Commit:(id)arg1;
- (id)sightDraft;
- (void)setSightDraft:(id)arg1;
- (id)sightAsset;
- (void)setSightAsset:(id)arg1;
- (id)tempSelectContacts;
- (void)setTempSelectContacts:(id)arg1;
- (id)interactSelectContacts;
- (void)setInteractSelectContacts:(id)arg1;
- (id)excludeSelectContacts;
- (void)setExcludeSelectContacts:(id)arg1;
- (id)excludeLabelNames;
- (void)setExcludeLabelNames:(id)arg1;
- (id)selectGroupName;
- (void)setSelectGroupName:(id)arg1;
- (id)enhanceDraftSaveController;
- (void)setEnhanceDraftSaveController:(id)arg1;
- (id)trashReportData;
- (void)setTrashReportData:(id)arg1;
- (BOOL)togetherEnabled;
- (id)baseResultDelegate;
- (void)setBaseResultDelegate:(id)arg1;
- (id)askXiaoWeiEntryView;
- (void)setAskXiaoWeiEntryView:(id)arg1;
- (id)askXiaoWeiHandler;
- (void)setAskXiaoWeiHandler:(id)arg1;
- (id)lastClkXiaoWeiId;
- (void)setLastClkXiaoWeiId:(id)arg1;
- (id)xiaoWeiOriginalText;
- (void)setXiaoWeiOriginalText:(id)arg1;
- (id)xiaoWeiLastBackfillText;
- (void)setXiaoWeiLastBackfillText:(id)arg1;
- (BOOL)askXiaoWeiPendingPost;
- (void)setAskXiaoWeiPendingPost:(BOOL)arg1;
- (id)imageSelectorController;
- (void)setImageSelectorController:(id)arg1;
- (id)m_sightFullScreenPreviewView;
- (void)setM_sightFullScreenPreviewView:(id)arg1;
- (id)deleteBarView;
- (void)setDeleteBarView:(id)arg1;
- (BOOL)hasShowDragTip;
- (void)setHasShowDragTip:(BOOL)arg1;
- (id)poiStarView;
- (void)setPoiStarView:(id)arg1;
- (void)setCanShowLastSelectTagCell:(BOOL)arg1;
- (BOOL)isClickedLastSelectTagCell;
- (void)setIsClickedLastSelectTagCell:(BOOL)arg1;
- (id)lastPostPrivacySetting;
- (void)setLastPostPrivacySetting:(id)arg1;
- (id)likeEasterEggInfo;
- (void)setLikeEasterEggInfo:(id)arg1;
- (id)lastLikeEasterEggInfo;
- (void)setLastLikeEasterEggInfo:(id)arg1;
- (void)setLikeEasterEggThumbImageCache:(id)arg1;
- (void)setLikeEasterEggThumbProbingMd5s:(id)arg1;
- (void)setLikeEasterEggEmojiSource:(long long)arg1;
- (BOOL)isClickedLastLikeEasterEggCell;
- (void)setIsClickedLastLikeEasterEggCell:(BOOL)arg1;
- (BOOL)hasReportedLikeEggOptionBtnExp;
- (void)setHasReportedLikeEggOptionBtnExp:(BOOL)arg1;
- (BOOL)hasReportedEggLastUsedBtnExp;
- (void)setHasReportedEggLastUsedBtnExp:(BOOL)arg1;
- (BOOL)hasClickDone;
- (void)setHasClickDone:(BOOL)arg1;
- (id)savingAlertView;
- (void)setSavingAlertView:(id)arg1;
- (BOOL)hasShownErrorTips;
- (void)setHasShownErrorTips:(BOOL)arg1;
- (BOOL)hasToastedForPrivateMention;
- (void)setHasToastedForPrivateMention:(BOOL)arg1;
- (BOOL)hasAppearedOnce;
- (void)setHasAppearedOnce:(BOOL)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (id)remainWordCountLabel;
- (void)setRemainWordCountLabel:(id)arg1;
- (long long)lastRemainWordCount;
- (void)setLastRemainWordCount:(long long)arg1;
- (void)setDictationEnabled:(BOOL)arg1;
- (BOOL)dictationEnabledResolved;
- (void)setDictationEnabledResolved:(BOOL)arg1;
- (id)tigerToastView;
- (void)setTigerToastView:(id)arg1;
- (id)animatedFireworksView;
- (void)setAnimatedFireworksView:(id)arg1;
- (id)ecsView;
- (void)setEcsView:(id)arg1;
- (id)locationCellManager;
- (void)setLocationCellManager:(id)arg1;
- (id)mentionCellManager;
- (void)setMentionCellManager:(id)arg1;
- (id)privacyCellManager;
- (void)setPrivacyCellManager:(id)arg1;
- (double)commitOptionCellsLayoutWidth;
- (void)setCommitOptionCellsLayoutWidth:(double)arg1;
- (long long)springContentStyle;
- (long long)springPostScene;
- (void)setSpringPostScene:(long long)arg1;
- (void).cxx_destruct;
@end
