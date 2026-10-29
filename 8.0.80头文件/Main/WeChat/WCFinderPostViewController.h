@interface WCFinderPostViewController : MMUIViewController <InputControllerDelegate, UIScrollViewDelegate, MMTableViewInfoDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderEditExtensionReadViewDelegate, RTEHTMLParserDelegate, WCFinderFilterTextViewDelegate, WCActionSheetDelegate, WCFinderMentionUserListViewControllerDelegate, MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, MJImageComposingViewControllerDelegate, WCFinderVideoProducerViewControllerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderShareCustomTransitionProtocol, WCFinderPostViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderPostFullScreenPreviewViewControllerDelegate, WCFinderCreateEvenDelegate, WCFinderPostVerifyAssistDelegate, WCFinderCreateCoordinatorDelegate, MMImagePickerControllerDelegate, WCFinderSearchEventViewControllerDelegate, WCFinderEventPosterViewControllerDelegate, MMStoreEmotionDesignerPackSelectViewControllerDelegate, WCFinderPostLinkActionSheetDelegate, WCFinderPostInputViewDelegate, WCFinderPostJSAPIExt, WCFinderOriginalEduActionSheetDelegate, WCFinderPostCoverInfoViewProtocol, WCFinderCreateUserViewControllerDelegate, WCFinderHalfScreenCreateUserViewControllerDelegate, WCFinderPostDataItemExt, WCFiderEidtMusicPostingAudioAdapterDelegate, WCFinderMultiSelectedRedPacketSheetDelegate, WCFinderPostPOICustomControlDelegate, WCFinderLocationSelectHalfVCDelegate, UITextViewDelegate, WCFinderAdCommentApplyActionSheetDelegate, WCFinderOriginalStatementActionSheetDelegate, WCFinderEditExtensionReadViewDataSource, WCFinderSpecialTopicCreateViewControllerDelegate, WCFinderCommonEduTipsActionSheetDelegate, WCFinderLocationViewControllerDelegate, WCFinderCommonTitleDescActionSheetDelegate, WCFinderCoverEditViewControllerDelegate, WCFinderModifyEditInputViewDelegate, WCFinderModifiedPanelViewDelegate, WCFinderCoverHoriPreviewViewControllerDelegate, WCFinderLikeEasterEggPostSectionDelegate, WCFinderPostShortEditViewControllerDelegate>
{
    BOOL _keyboardShowYet; // +0x70
    BOOL _extLinkIsFromRestore; // +0x71
    BOOL _poiSelectHalfVCShown; // +0x72
    BOOL _hasChangeHotNewsStatus; // +0x73
    BOOL _shareToCommentAreaSelected; // +0x74
    id <WCFinderPostViewControllerDelegate> _delegate; // +0x78
    UIScrollView * _scrollView; // +0x80
    MMBarButtonItem * _publishBarButton; // +0x88
    WCFinderPostTopBaseView * _topEduBannerView; // +0x90
    WCFinderForbidBannerView * _hoverEduBannerView; // +0x98
    UIView * _authorInfoView; // +0xa0
    WCFinderHeadImageView * _avatarImageView; // +0xa8
    UILabel * _nicknameLabel; // +0xb0
    MMUIButton * _brandLabel; // +0xb8
    MMUIButton * _switchButton; // +0xc0
    WCFinderPostCoverInfoView * _coverInfoView; // +0xc8
    WCFinderCoverEditViewController * _coverEditVC; // +0xd0
    WCFinderCoverHoriPreviewViewController * _horizontalCoverPreviewVC; // +0xd8
    MMTableView * _attachTableView; // +0xe0
    UIButton * _extensionReadRecommendedButton; // +0xe8
    WCFinderEditExtensionReadView * _parseLinkView; // +0xf0
    UIControl * _originalControl; // +0xf8
    NSMutableDictionary * _musicOriginInfo; // +0x100
    WCFinderLikeEasterEggPostSectionOldStyle * _easterEggSection; // +0x108
    double _keyboardY; // +0x110
    UIView * _textAreaBGView; // +0x118
    WCInputController * _descInputController; // +0x120
    UIView * _descInputBGView; // +0x128
    EmoticonBoardView * _descEmotionBoardView; // +0x130
    WCFinderPostInputView * _descInputAttrView; // +0x138
    UIButton * _mentionSomebodyButton; // +0x140
    WCInputController * _modifyInputController; // +0x148
    WCFinderModifyEditInputView * _modifyEditInputView; // +0x150
    UIView * _modifyInputBGView; // +0x158
    MMMenuController * _modifyMenuController; // +0x160
    WCFinderModifiedPanelView * _modifiedPanelView; // +0x168
    WCFinderPostModifiedEduTipsPannel * _modifiedEduTipsView; // +0x170
    UIView * _longTextAreaBGView; // +0x178
    WCFinderFilterTextView * _longDescTextView; // +0x180
    UILabel * _longDescLimitLabel; // +0x188
    WCFinderAnimationLoadingView * _loadingView; // +0x190
    WCActionSheet * _eventActionSheet; // +0x198
    WCActionSheetItem * _eventActionSheetItem; // +0x1a0
    WCFinderPostNetResourceAssistCancelToken * _netVideoFetchPromiseCancelToken; // +0x1a8
    AnyPromise * _netVideoFetchPromise; // +0x1b0
    WCFinderPostVerifyAssist * _postVerityAssist; // +0x1b8
    MMTipsViewController * _nameVerityTipsVC; // +0x1c0
    WCFinderCreateCoordinator * _createCoordinator; // +0x1c8
    WCFinderAdCommentApplyActionSheet * _applyActionSheet; // +0x1d0
    UIButton * _postTagEntryBtn; // +0x1d8
    UIImageView * _postTagEntryIcon; // +0x1e0
    WCFinderPostViewModel * _viewModel; // +0x1e8
    NSString * _lastTextViewText; // +0x1f0
    unsigned long long _enterTime; // +0x1f8
    NSString * _flowId; // +0x200
    NSString * _reccommendCreateAcctNickName; // +0x208
    NSMutableDictionary * _videoMapAudioUrls; // +0x210
    WCFinderLocationSelectHalfViewController * _poiSelectVC; // +0x218
    WCFiderEidtMusicPostingAudioAdapter * _editMusicPostingAudioAdapter; // +0x220
    MMUIButton * _needPostATemplateCommentCheckBox; // +0x228
    MJPublisher * _mjPublisher; // +0x230
    NSMutableArray * _attachTableViewConfigs; // +0x238
    NSString * _originalRecommendTips; // +0x240
    _NSRange _selectedRangeBeforEdit; // +0x248
}
+ (BOOL)_isOriginalItem:(id)arg1 supportCurrentDataItem:(id)arg2;
+ (void)showJumpProfileDraftTab:(id)arg1;
+ (BOOL)showNavigationStreamProfileVCDraftTab:(id)arg1;
+ (id)unicodeStringWithString:(id)arg1;
+ (void)updateRestoreContentOffsetTargetTextView:(id)arg1 text:(id)arg2;
- (id)initWithPostSession:(id)arg1;
- (id)initWithDraft:(id)arg1;
- (void)initPostConfig;
- (void)setUpExtension;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (id)easterEggSection;
- (id)longTextAreaBGView;
- (void)setKeyboardY:(double)arg1;
- (id)longDescTextView;
- (id)loadingView;
- (id)attachTableView;
- (id)descInputController;
- (id)modifyInputController;
- (id)descInputAttrView;
- (id)modifyEditInputView;
- (id)descInputBGView;
- (id)modifyInputBGView;
- (id)descEmotionBoardView;
- (id)coverInfoView;
- (long long)getCanSetLinkOptionFlag;
- (id)postAttachLinkInfos;
- (id)hoverEduBannerView;
- (id)topEduBannerView;
- (id)editMusicPostingAudioAdapter;
- (void)viewWillLayoutSubviews;
- (void)layoutPostViewOnly;
- (void)globalUpdateComponents;
- (void)updatePostVCTitle;
- (void)viewDidLoad;
- (void)onClickScrollView;
- (id)genExtStatsReportStrValue;
- (id)onCoverEditGenReportInfoDic;
- (id)genReportInfoDic;
- (id)genPostBtnReportInfoDic;
- (void)checkSelectedHotNewStatus;
- (void)debugCheckAction;
- (void)showNextActionView;
- (void)showAssetFromGPSEdu;
- (id)highlightTopicName;
- (BOOL)hasHighlightTopic;
- (void)updateHighLightTopic:(id)arg1;
- (void)onAdCommentApplyClickRuleAction;
- (void)onAdCommentApplyClickApply;
- (void)onAdCommentApplyClickCancel;
- (BOOL)isFromSnsTimeline;
- (void)setUpTopEduBannerView;
- (void)loadEduActionSheet;
- (void)checkPostOriginalActionSheet;
- (id)fetchPrepareFinder:(BOOL)arg1 waitBlock:(id /* block */)arg2;
- (void)fetchPrepareFinder:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)_showOriginalEduActionSheetAgreeSelect:(BOOL)arg1;
- (void)_showUnifiedOriginalPostInterceptSheetWithPostBlock:(id /* block */)arg1;
- (void)_showOriginalAgreementSecondConfirmOnTopOfSheet:(id)arg1 originalDesc:(id)arg2 postBlock:(id /* block */)arg3;
- (void)reportTopEduBannerWithReportType:(long long)arg1 allow:(double)arg2;
- (void)showInvalidEmojiBanner;
- (void)handlePreloadLogic;
- (void)triggerDataItemCleanAction;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetViewLoaded:(id)arg1;
- (void)openCreateEventViewController;
- (void)openSearchEventController;
- (void)openEventPosterViewController;
- (void)reportEventFlowWith:(unsigned long long)arg1;
- (void)showFinderCameraViewController;
- (void)enterMiaoJianFinderMovieComposing;
- (void)showFinderPublishPhotoView;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)arg1;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)arg1;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)processWithSightDraft:(id)arg1;
- (BOOL)applyShootTemplateInfoIfNeededWithObject:(id)arg1 toDataItem:(id)arg2 route:(id)arg3;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)updateCurUILayoutAfterSelectedDataItem;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)loadCoverEditVCInfo;
- (void)initCoverEditVC;
- (id)removeSpaceAndNewline:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)downloadNetVideoInfo;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)reportPostGoodIcon:(long long)arg1;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (id)longDescLimitLabel;
- (void)restoreHistorySave;
- (void)resetTextViewLayout;
- (id)getLongDescTextViewRealContent;
- (void)_checkModifyPostBtnState;
- (void)_checkPostBtnState;
- (void)updatePublishButtonItemEnabledState;
- (void)showIdentifyFailedToast;
- (void)showIdentifyFailedToast:(BOOL)arg1;
- (void)showIdentifyFailedToast:(BOOL)arg1 toastErrTips:(id)arg2;
- (void)updatePreviewContentLayout;
- (void)updateSpecialCoverData;
- (void)postFullScreenPreviewDeleteAction;
- (unsigned long long)_getCoverConfigFlag;
- (void)adjustAuthorInfoView;
- (BOOL)videoResourceExists;
- (void)realForEditCover;
- (BOOL)shouldRestartCoverEdit;
- (void)restoreTextViewContent;
- (double)getCurrentLongAreaHeight;
- (id)mentionSomebodyButton;
- (void)clickHashTagButton;
- (void)clickMentionSomebodyButton;
- (void)clickCreateEventButton;
- (void)updateEventActionSheet;
- (BOOL)canShowStateSettingView;
- (void)getExtensionLinkFromPasteBoard;
- (void)_setupPostTagEntryViewIfNeeded;
- (void)onBindOriginalEntrance;
- (void)bindPOIEntranceByView:(id)arg1;
- (void)onClickMusicOriginalAction:(id)arg1;
- (void)_onClickDeleteOriginInfo;
- (void)_onClickEditOriginInfo;
- (BOOL)_shouldShowMusicDescAction;
- (BOOL)_shouldShowShareToFollowFeedCommentArea;
- (void)_findSelectedOriginalItem:(id /* block */)arg1;
- (id)currentOriginalItem;
- (void)onClickOriginalSwitch:(id)arg1;
- (void)updateOriginInfoWhenDataItemChanged;
- (void)_updateAttachPanelView;
- (BOOL)enableShowLinkEntrance;
- (void)onClickPreviewLinkAction;
- (id)postContact;
- (BOOL)enablePostWithAttachShopInfo;
- (BOOL)postWithAttachShopIsSpam;
- (id)createCellWithImage:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 themeColor:(id)arg5 subTitleColor:(id)arg6 showRightArrow:(BOOL)arg7 rightTips:(id)arg8 rightShowRedDot:(BOOL)arg9 lightIconUrl:(id)arg10 darkIconUrl:(id)arg11;
- (id)createTextCellWithTitle:(id)arg1 recommendTips:(id)arg2 subTitle:(id)arg3 rightIcon:(id)arg4 switchOn:(BOOL)arg5 tipsClickAction:(SEL)arg6 switchChangeAction:(SEL)arg7;
- (void)onHotNewsCellClick;
- (void)showPostTagEntryBeforePost:(id)arg1;
- (void)onPostTagEntryButtonClick;
- (void)_showPostTagEntryLiteApp:(id)arg1;
- (id)optionalSelectedUsernames;
- (void)clickSwitchAccount;
- (void)onAddParseLinkURL:(id)arg1;
- (void)identifyExtensionReadUrlString:(id)arg1;
- (void)updateParseFailState:(BOOL)arg1 isTemporaryLink:(BOOL)arg2 toastTips:(id)arg3;
- (void)resignInput;
- (void)resignModInput;
- (BOOL)isOnExpressionEditProcess;
- (void)likeEasterEggPostSectionDidTap:(id)arg1;
- (void)_updateEasterEggSelectedEmoticon:(id)arg1;
- (void)_resetEasterEggTipsBannerWithEmotion:(id)arg1;
- (void)_onTapEasterEggCell;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTextAreaLimitLabelState;
- (void)didCommitText:(id)arg1;
- (void)onClickShareTemplateVideoToCommentAreaBtn:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)showEditMenuFromTextView:(id)arg1 bindUserInfo:(id)arg2;
- (BOOL)checkBeforeModifyBy:(id)arg1;
- (void)onMenuModify:(id)arg1;
- (void)onMenuDelete:(id)arg1;
- (void)keyboardDidHide;
- (void)_postForKeyboardWillShow;
- (void)updateAttachElementsHidden:(BOOL)arg1;
- (void)_modifyForKeyboardWillShow;
- (void)keyboardWillShow;
- (void)updateScrollViewContentOffset;
- (void)moveScrollViewTopAsKeyboardShow;
- (void)keyboardWillHide;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)onExtensionReadRecommendedCellClicked;
- (void)showSpamTipsWithString:(id)arg1;
- (void)onClickAddShopAction;
- (id)getProductMiniAppInfoConfig;
- (BOOL)useServerConfigProductMiniApp;
- (id)shopMiniAppId;
- (id)shopMiniAppPath;
- (void)onClickChooseEmotionAction;
- (void)onTapEmoticonPackWithPid:(id)arg1 andPackName:(id)arg2;
- (void)longDescBecomeFirstResponder;
- (void)backToSnsEditViewController;
- (void)showSaveOrNotAlert;
- (void)showAuthorCenterAlert;
- (void)showClubExitAlert;
- (void)onSaveBtnClicked;
- (void)onCancelModifyBtnClicked;
- (void)onCancelSaveBtnClicked;
- (void)reportExitAction;
- (void)savePostSession:(id)arg1;
- (void)clearLocalCacheMediaInfo;
- (void)doExit:(BOOL)arg1;
- (void)reportCancelPostWithModel:(id)arg1;
- (void)notifySaveDraft;
- (id)findDisplayDraftNavigationVC;
- (id)handleStringSpecialWordFrom:(id)arg1;
- (void)clickPostAction;
- (void)reportClickPostAction;
- (void)tryShowPostTipsVCIfNeededWithCompletion:(id /* block */)arg1;
- (void)onCheckVeritfyAssistSuccess:(BOOL)arg1;
- (void)onFetchPrepareResponseFailed;
- (void)onFetchUserPrepareSuc;
- (void)afterVerityPost;
- (void)postViewControllerWithPostSession:(id)arg1;
- (void)showModifyEduActionState;
- (id)poiSelectPromise;
- (id)feedVerifyActionSheetPromise;
- (void)hookIdentifyVCLifeCycle:(id)arg1 showTimesType:(int)arg2;
- (BOOL)triggerSafePanelActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(id /* block */)arg3 acceptMsg:(id)arg4 clickAcceptBlock:(id /* block */)arg5 cancelMsg:(id)arg6 clickCancelBlock:(id /* block */)arg7 buttonModelArray:(id)arg8 showTimesType:(int)arg9 showType:(int)arg10 linkH5Info:(id)arg11 liteAppInfo:(id)arg12;
- (void)_createAccountSuccessWithPostSession:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (BOOL)checkPostDataItemLocalFileExistWithDataItem:(id)arg1;
- (void)udpateTextContentToDataItem;
- (void)updatePostSessionDataInfo;
- (void)onClickChooseTencentVideo;
- (void)onClickMiniGameOrDramaAction:(unsigned long long)arg1;
- (void)onClickPostAttachment:(id)arg1;
- (void)onClickParseLikeAction:(long long)arg1;
- (void)showEditExtensionRedView:(long long)arg1;
- (void)getExtendedReadingTitleCompleted;
- (void)onRedPacketSheet:(id)arg1 onSelectedRedPacket:(id)arg2;
- (void)onRedPacketSheetClickEditLink:(id)arg1;
- (void)textDidInputAtFinderContact:(id)arg1;
- (id)textGetSelectRangeArray:(id)arg1;
- (id)textGetClearRangeArray:(id)arg1;
- (void)filterTextUpdateTopicModel:(id)arg1;
- (void)updateKeyboardPanelView;
- (BOOL)enableShowShortTitleText;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)textDidChangeFinish:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)throttleCheckText;
- (id)getSavePathWithImage:(id)arg1;
- (void)didSelectedMentionUserWith:(id)arg1 userContact:(id)arg2;
- (void)onSelectedMentionContact:(id)arg1;
- (void)cancelSelectedMentionUserWith:(id)arg1;
- (void)restoreKeyboardPreviousStatusWithSelectedString:(id)arg1;
- (void)addContactToMentionContactArray:(id)arg1;
- (void)updateMentionContactArray;
- (void)onPostViewModelUpdateAppendInfoView;
- (void)onPostViewModelParseExtLinkStart;
- (void)onPostViewModelParseExtLinkSuc;
- (void)onPostViewModelParseExtLinkFailIsFromPasteBoard:(BOOL)arg1 errMsg:(id)arg2;
- (void)onPostViewModelParseExtLinkRefreshParseBoard;
- (void)onPostViewModelReloadSettingView;
- (void)onPostViewModelStickerListChanged;
- (void)onPostViewModelDetectInvalidEmoji;
- (void)createEventVC:(id)arg1 createEventSuccess:(id)arg2;
- (void)moveLocalFilePathToFinderUsernamePath:(id)arg1;
- (void)searchEventViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)eventPosterViewController:(id)arg1 didExitEvent:(id)arg2;
- (int)feedViewControllerScene;
- (void)onClickHightLightTopicControl;
- (void)showHighlightTopicCreateVC;
- (void)onClickChooseLinkAction;
- (void)onClickChooseCombinationLink;
- (void)postLinkActionSheetClickAttachment:(id)arg1;
- (void)postLinkActionSheetClickItem:(unsigned long long)arg1;
- (void)onClickPostChooseCollection;
- (void)onClickPostWeComPage;
- (void)openTingMusicPage;
- (id)getTingMusicLiteQuery;
- (void)asyncLoadMusicLiteAppFromAppId:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)openTingAudioPage;
- (void)postInputViewClickExpressionBtn:(id)arg1;
- (void)postInputViewClickTopic:(id)arg1 inputTextTopicModel:(id)arg2;
- (void)postInputViewClickTopicBtn;
- (void)postInputViewClickMentionBtn;
- (void)sendPostInfoJumpInfo:(id)arg1 optionalParams:(id)arg2;
- (void)originalEduClickRuleAction:(id)arg1 fromVC:(id)arg2;
- (id)nearestViewControllerForView:(id)arg1;
- (void)originalEduClickAcceptAction:(id)arg1;
- (void)originalEduClickRewardEdu;
- (void)interestsGuideClickEdu;
- (void)originalEduClickHelpEdu;
- (void)onCoverInfoViewHeightChanged;
- (void)onCoverClickDeleteBtn;
- (void)onCoverClickPreviewBtn;
- (void)onCoverClickChooseBtn;
- (void)onCoverClickAddMediaBtn;
- (void)loadReccommentCreateAcctNickName;
- (void)finderHalfScreenCreateUserVCDidClickEditBtn:(id)arg1;
- (void)finderHalfScreenCreateUserVCDidCreateSuccess:(id)arg1;
- (id)editMuicPostingAudioAdapterFetchCurrentMediaServerUrl;
- (id)editMuicPostingAudioAdapterFetchCurrentMediaPath;
- (void)onOriginalMusicEditorDidFinish:(id)arg1;
- (id)fetchVideoFilePathForAudio;
- (void)createUserFinished:(id)arg1;
- (void)registerYReportSdk;
- (void)configureSessionPageInOutReport;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)poiCustomClickActionPoiStyle:(unsigned int)arg1;
- (void)poiCustomClickRecommendBubble:(id)arg1 index:(long long)arg2;
- (void)onSelectLocationInfo:(id)arg1;
- (void)onOriginalStatementCancelAction;
- (id)mjPublisher;
- (void)showMiaojianFinderPublisherWithShouldUseActionSheet:(BOOL)arg1;
- (void)showMiaojianFinderPublisherWithPickerEditingEnabled:(BOOL)arg1;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2;
- (void)startMaasComposingWithAssetInfos:(id)arg1 picker:(id)arg2 startHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)startMovieComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startMJImageComposingWithAssetInfos:(id)arg1 picker:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)imageComposingViewControllerDidCancel:(id)arg1;
- (void)imageComposingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)imageComposingViewController:(id)arg1 didFinishWithExportResult:(id)arg2 userInfo:(id)arg3;
- (void)_dismissImageComposing:(id)arg1 completion:(id /* block */)arg2;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewControllerDidClearShootTemplate:(id)arg1;
- (void)composingViewController:(id)arg1 didFinishShootTemplateWithInfo:(id)arg2;
- (void)applyTemplateReeditInfoFromUserInfo:(id)arg1;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)shootComposingViewController:(id)arg1 didCompleteTemplateReeditWithEnterScene:(long long)arg2 sourceEnterScene:(long long)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)processWithMJShootingSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didSavedAIGCAsyncDraft:(id)arg2;
- (id)onExtensionReadWarningBySupportType:(long long)arg1;
- (id)onExtensionReadErrorBySupportType:(long long)arg1 text:(id)arg2;
- (void)specialTopicCreateViewController:(id)arg1 didClickCreateBtnWithTopicName:(id)arg2;
- (void)onCommonTitleDescActionSheetClickCloseAction:(id)arg1;
- (void)eduTipsActionSheetClickRuleUrl:(id)arg1 actionSheet:(id)arg2;
- (void)eduTipsActionSheetClickTrailBtnFrom:(id)arg1;
- (void)eduTipsActionSheetClickAcceptBtnFrom:(id)arg1 receiveRule:(BOOL)arg2;
- (void)eduTipsActionSheetClickCancelBtnFrom:(id)arg1;
- (void)onLocationViewControllerClickSureLocation:(id)arg1 searchWord:(id)arg2 poiBusinessType:(int)arg3;
- (id)genReportInfoContentVM;
- (void)onCoverEditRemoveCoverActionFromVC:(id)arg1;
- (void)onModifyEditInputResign;
- (void)onModifyEditInputChangeFrom:(id)arg1 toContent:(id)arg2;
- (void)updateModifiedPanelViewState;
- (id)modifiedPanelView;
- (id)modifiedEduTipsView;
- (void)showModFailToastBySourceType:(unsigned long long)arg1;
- (void)onModifiedPanelViewClearModel:(id)arg1;
- (void)onModifiedPanelViewToTextModel:(id)arg1;
- (void)onCoverHoriPreviewCoverChanged;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)bindKvReport:(id)arg1 config:(id)arg2;
- (void)bindOriginalEntranceReportForCell:(id)arg1;
- (void)configCellSeparator:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadAttachTableView;
- (void)updateAttachTableViewFrame;
- (void)onAttachConfigTapped:(id)arg1 businessType:(unsigned long long)arg2;
- (void)onAttachConfigBubbleTapped:(id)arg1 bubbleIndex:(long long)arg2;
- (void)onAttachConfigSwitchChanged:(id)arg1 isOn:(BOOL)arg2;
- (void)onClickOriginUISwitch:(BOOL)arg1;
- (double)getTextAreaLeftPadding;
- (double)getPostContentWidth;
- (double)getPostTextAreaWidth;
- (CGRect)getPostScrollViewFrame;
- (void)updateAuxiliaryLayout;
- (void)configureSeparator:(id)arg1 atBottom:(BOOL)arg2;
- (id)getTextAreaBgColor;
- (double)getLongLabelPlaceholderHeight;
- (double)getLongDescTextViewHeight;
- (long long)getCoverInfoViewWidth;
- (double)getCoverInfoViewHeight;
- (double)getLongTextAreaBGViewMargin;
- (double)getLongDescInitHeight;
- (double)getPostTagEntryBtnTopMargin;
- (BOOL)shouldShowMusicDescAction;
- (BOOL)shouldShowShareToFollowFeedCommentArea;
- (void)buildAttachCellConfigs;
- (void)_buildShortTitleConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3;
- (void)_buildHighlightTopicConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3;
- (void)_buildPOIConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3;
- (void)_buildEasterEggConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3;
- (void)_buildLinkEntranceConfigWithIconWidth:(double)arg1 unselectColor:(id)arg2;
- (void)_buildEventConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3 event:(id)arg4;
- (void)_buildUnselectedLinkConfigWithIconWidth:(double)arg1 unselectColor:(id)arg2;
- (void)_buildSelectedLinkConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3 curLinkType:(unsigned long long)arg4;
- (void)_buildNewsConfigWithIconWidth:(double)arg1 selectedColor:(id)arg2 unselectColor:(id)arg3 contact:(id)arg4;
- (void)_buildOriginalConfigWithIconWidth:(double)arg1 unselectColor:(id)arg2 contact:(id)arg3;
- (void)_buildMusicInfoConfig;
- (void)_buildShareToCommentConfig;
- (void)buildStateCellConfigs;
- (void)onShareToCommentCheckboxChanged:(id)arg1 isSelected:(BOOL)arg2;
- (void)onClickShortTitleAction;
- (void)openShortTitleEditActionSheet:(id)arg1;
- (void)showShortTitleOperationsActionSheet;
- (id)openShortTitleSampleActionSheet:(double)arg1;
- (void)previewShortTitle;
- (void)editShortTitle;
- (void)removeShortTitle;
- (void)shortEditViewControllerDidCompleteWithShortTitle:(id)arg1;
- (id)shortEditViewControllerDidClickLearnShortTitle:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)publishBarButton;
- (void)setPublishBarButton:(id)arg1;
- (void)setTopEduBannerView:(id)arg1;
- (void)setHoverEduBannerView:(id)arg1;
- (id)authorInfoView;
- (void)setAuthorInfoView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (void)setCoverInfoView:(id)arg1;
- (id)coverEditVC;
- (void)setCoverEditVC:(id)arg1;
- (id)horizontalCoverPreviewVC;
- (void)setHorizontalCoverPreviewVC:(id)arg1;
- (void)setAttachTableView:(id)arg1;
- (id)extensionReadRecommendedButton;
- (void)setExtensionReadRecommendedButton:(id)arg1;
- (id)parseLinkView;
- (void)setParseLinkView:(id)arg1;
- (id)originalControl;
- (void)setOriginalControl:(id)arg1;
- (id)musicOriginInfo;
- (void)setMusicOriginInfo:(id)arg1;
- (void)setEasterEggSection:(id)arg1;
- (double)keyboardY;
- (id)textAreaBGView;
- (void)setTextAreaBGView:(id)arg1;
- (void)setDescInputController:(id)arg1;
- (void)setDescInputBGView:(id)arg1;
- (void)setDescEmotionBoardView:(id)arg1;
- (void)setDescInputAttrView:(id)arg1;
- (void)setMentionSomebodyButton:(id)arg1;
- (void)setModifyInputController:(id)arg1;
- (void)setModifyEditInputView:(id)arg1;
- (void)setModifyInputBGView:(id)arg1;
- (id)modifyMenuController;
- (void)setModifyMenuController:(id)arg1;
- (void)setModifiedPanelView:(id)arg1;
- (void)setModifiedEduTipsView:(id)arg1;
- (void)setLongTextAreaBGView:(id)arg1;
- (void)setLongDescTextView:(id)arg1;
- (void)setLongDescLimitLabel:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)eventActionSheet;
- (void)setEventActionSheet:(id)arg1;
- (id)eventActionSheetItem;
- (void)setEventActionSheetItem:(id)arg1;
- (id)netVideoFetchPromiseCancelToken;
- (void)setNetVideoFetchPromiseCancelToken:(id)arg1;
- (id)netVideoFetchPromise;
- (void)setNetVideoFetchPromise:(id)arg1;
- (id)postVerityAssist;
- (void)setPostVerityAssist:(id)arg1;
- (id)nameVerityTipsVC;
- (void)setNameVerityTipsVC:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)applyActionSheet;
- (void)setApplyActionSheet:(id)arg1;
- (id)postTagEntryBtn;
- (void)setPostTagEntryBtn:(id)arg1;
- (id)postTagEntryIcon;
- (void)setPostTagEntryIcon:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)keyboardShowYet;
- (void)setKeyboardShowYet:(BOOL)arg1;
- (BOOL)extLinkIsFromRestore;
- (void)setExtLinkIsFromRestore:(BOOL)arg1;
- (_NSRange)selectedRangeBeforEdit;
- (void)setSelectedRangeBeforEdit:(_NSRange)arg1;
- (id)lastTextViewText;
- (void)setLastTextViewText:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (id)reccommendCreateAcctNickName;
- (void)setReccommendCreateAcctNickName:(id)arg1;
- (id)videoMapAudioUrls;
- (void)setVideoMapAudioUrls:(id)arg1;
- (BOOL)poiSelectHalfVCShown;
- (void)setPoiSelectHalfVCShown:(BOOL)arg1;
- (BOOL)hasChangeHotNewsStatus;
- (void)setHasChangeHotNewsStatus:(BOOL)arg1;
- (id)poiSelectVC;
- (void)setPoiSelectVC:(id)arg1;
- (void)setEditMusicPostingAudioAdapter:(id)arg1;
- (id)needPostATemplateCommentCheckBox;
- (void)setNeedPostATemplateCommentCheckBox:(id)arg1;
- (void)setMjPublisher:(id)arg1;
- (id)attachTableViewConfigs;
- (void)setAttachTableViewConfigs:(id)arg1;
- (id)originalRecommendTips;
- (void)setOriginalRecommendTips:(id)arg1;
- (BOOL)shareToCommentAreaSelected;
- (void)setShareToCommentAreaSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
