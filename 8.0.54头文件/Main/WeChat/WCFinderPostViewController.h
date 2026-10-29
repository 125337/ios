@interface WCFinderPostViewController : MMUIViewController <InputControllerDelegate, UIScrollViewDelegate, MMTableViewInfoDelegate, WCTimelinePOIPickerViewControllerDelegate, ILBSLifeMgrExt, WCFinderEditExtensionReadViewDelegate, RTEHTMLParserDelegate, ILocationMgrExt, WCFinderFilterTextViewDelegate, WCActionSheetDelegate, WCFinderMentionUserListViewControllerDelegate, MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCVideoProducerViewControllerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderShareCustomTransitionProtocol, WCFinderPostViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderPostFullScreenPreviewViewControllerDelegate, WCFinderCreateEvenDelegate, WCFinderPostVerifyAssistDelegate, WCFinderCreateCoordinatorDelegate, MMImagePickerControllerDelegate, WCFinderSearchEventViewControllerDelegate, WCFinderEventPosterViewControllerDelegate, MMStoreEmotionDesignerPackSelectViewControllerDelegate, WCFinderPostLinkActionSheetDelegate, WCFinderPostInputViewDelegate, WCFinderPostJSAPIExt, WCFinderOriginalEduActionSheetDelegate, WCFinderPostCoverInfoViewProtocol, WCFinderCreateUserViewControllerDelegate, WCFinderHalfScreenCreateUserViewControllerDelegate, WCFinderPostDataItemExt, WCFiderEidtMusicPostingAudioAdapterDelegate, WCFinderMultiSelectedRedPacketSheetDelegate, WCFinderPostPOICustomControlDelegate, WCFinderLocationSelectHalfVCDelegate, UITextViewDelegate, WCFinderAdCommentApplyActionSheetDelegate, WCFinderOriginalStatementActionSheetDelegate, WCFinderEditExtensionReadViewDataSource, WCFinderSpecialTopicCreateViewControllerDelegate, WCFinderCommonEduTipsActionSheetDelegate, WCFinderTitleDescButtonActionSheetDelegate, WCFinderLocationViewControllerDelegate, WCFinderJoinGroupBuyEduActionSheetDelegate, WCFinderCommonTitleDescActionSheetDelegate, WCFinderCoverEditViewControllerDelegate, WCFinderModifyEditInputViewDelegate, WCFinderModifiedPanelViewDelegate, WCFinderCoverHoriPreviewViewControllerDelegate>
{
    BOOL _keyboardShowYet; // +0x68
    BOOL _extLinkIsFromRestore; // +0x69
    BOOL _showSafePanelAlready; // +0x6a
    BOOL _poiSelectHalfVCShown; // +0x6b
    BOOL _hasChangeHotNewsStatus; // +0x6c
    id <WCFinderPostViewControllerDelegate> _delegate; // +0x70
    UIScrollView * _scrollView; // +0x78
    MMBarButtonItem * _publishBarButton; // +0x80
    WCFinderPostTopBaseView * _topEduBannerView; // +0x88
    WCFinderForbidBannerView * _hoverEduBannerView; // +0x90
    UIView * _authorInfoView; // +0x98
    WCFinderHeadImageView * _avatarImageView; // +0xa0
    UILabel * _nicknameLabel; // +0xa8
    MMUIButton * _brandLabel; // +0xb0
    MMUIButton * _switchButton; // +0xb8
    WCFinderPostCoverInfoView * _coverInfoView; // +0xc0
    WCFinderCoverEditViewController * _coverEditVC; // +0xc8
    WCFinderCoverHoriPreviewViewController * _horizontalCoverPreviewVC; // +0xd0
    WCFinderWarningPanelView * _warningPanelView; // +0xd8
    WCFinderLayoutView * _attachSettingsView; // +0xe0
    WCFinderLayoutView * _stateSettingsView; // +0xe8
    WCFinderPostPOICustomControl * _poiCustomCtrl; // +0xf0
    WCTimelinePOIPickerViewController * _poiPickerViewController; // +0xf8
    MMBarButtonItem * _addExtensionLinkButton; // +0x100
    UIButton * _extensionReadRecommendedButton; // +0x108
    WCFinderRecommendBubbleView * _redPacketRecommendBubble; // +0x110
    WCFinderEditExtensionReadView * _parseLinkView; // +0x118
    UIControl * _originalControl; // +0x120
    NSMutableDictionary * _musicOriginInfo; // +0x128
    double _keyboardY; // +0x130
    UIView * _textAreaBGView; // +0x138
    WCInputController * _descInputController; // +0x140
    UIView * _descInputBGView; // +0x148
    EmoticonBoardView * _descEmotionBoardView; // +0x150
    WCFinderPostInputView * _descInputAttrView; // +0x158
    UIButton * _mentionSomebodyButton; // +0x160
    WCInputController * _modifyInputController; // +0x168
    WCFinderModifyEditInputView * _modifyEditInputView; // +0x170
    UIView * _modifyInputBGView; // +0x178
    MMMenuController * _modifyMenuController; // +0x180
    WCFinderModifiedPanelView * _modifiedPanelView; // +0x188
    WCFinderPostModifiedEduTipsPannel * _modifiedEduTipsView; // +0x190
    UIView * _longTextAreaBGView; // +0x198
    WCFinderFilterTextView * _longDescTextView; // +0x1a0
    UILabel * _longDescLimitLabel; // +0x1a8
    MMUIButton * _hashTagButton; // +0x1b0
    MMUIButton * _mentionButton; // +0x1b8
    UIView * _shortTextAreaBGView; // +0x1c0
    WCFinderFilterTextView * _shortTextView; // +0x1c8
    UILabel * _shortTextLimitLabel; // +0x1d0
    MMUIButton * _shortInfoBtn; // +0x1d8
    WCFinderAnimationLoadingView * _loadingView; // +0x1e0
    WCActionSheet * _eventActionSheet; // +0x1e8
    WCActionSheetItem * _eventActionSheetItem; // +0x1f0
    WCFinderPostNetResourceAssistCancelToken * _netVideoFetchPromiseCancelToken; // +0x1f8
    AnyPromise * _netVideoFetchPromise; // +0x200
    WCFinderPostVerifyAssist * _postVerityAssist; // +0x208
    MMTipsViewController * _nameVerityTipsVC; // +0x210
    WCFinderCreateCoordinator * _createCoordinator; // +0x218
    WCFinderAdCommentApplyActionSheet * _applyActionSheet; // +0x220
    UIButton * _postTagEntryBtn; // +0x228
    UIImageView * _postTagEntryIcon; // +0x230
    WCFinderPostViewModel * _viewModel; // +0x238
    NSString * _lastTextViewText; // +0x240
    unsigned long long _enterTime; // +0x248
    NSString * _flowId; // +0x250
    NSString * _reccommendCreateAcctNickName; // +0x258
    NSMutableDictionary * _videoMapAudioUrls; // +0x260
    WCFinderLocationSelectHalfViewController * _poiSelectVC; // +0x268
    WCFiderEidtMusicPostingAudioAdapter * _editMusicPostingAudioAdapter; // +0x270
    MMUIButton * _needPostATemplateCommentCheckBox; // +0x278
    FinderLocation * _lastFinderLocation; // +0x280
    NSString * _lastPOISearchWord; // +0x288
    MJPublisher * _mjPublisher; // +0x290
    _NSRange _selectedRangeBeforEdit; // +0x298
}
+ (BOOL)_isOriginalItem:(id)arg1 supportCurrentDataItem:(id)arg2;
+ (void)showJumpProfileDraftTab:(id)arg1;
+ (BOOL)showNavigationStreamProfileVCDraftTab:(id)arg1;
+ (id)unicodeStringWithString:(id)arg1;
- (id)initWithPostSession:(id)arg1;
- (id)initWithDraft:(id)arg1;
- (void)initPostConfig;
- (void)setUpExtension;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (id)poiCustomCtrl;
- (id)shortEduCardView;
- (id)longTextAreaBGView;
- (id)shortTextAreaBGView;
- (id)shortInfoBtn;
- (void)setKeyboardY:(double)arg1;
- (id)longDescTextView;
- (id)loadingView;
- (id)attachSettingsView;
- (id)stateSettingsView;
- (id)descInputController;
- (id)modifyInputController;
- (id)descInputAttrView;
- (id)modifyEditInputView;
- (id)descInputBGView;
- (id)modifyInputBGView;
- (id)descEmotionBoardView;
- (id)shortTextView;
- (id)coverInfoView;
- (id)warningPanelView;
- (long long)getCanSetLinkOptionFlag;
- (id)hoverEduBannerView;
- (id)topEduBannerView;
- (id)editMusicPostingAudioAdapter;
- (void)viewWillLayoutSubviews;
- (void)layoutPostViewOnly;
- (void)globalUpdateComponents;
- (void)updatePostVCTitle;
- (void)viewDidLoad;
- (void)onClickScrollView;
- (BOOL)shouldFetchUserRecommendPOIList;
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
- (double)getAuthorTopMargin;
- (void)loadEduActionSheet;
- (void)checkPostOriginalActionSheet;
- (id)fetchPrepareFinder:(BOOL)arg1 waitBlock:(id /* block */)arg2;
- (void)fetchPrepareFinder:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)_showOriginalEduActionSheetAgreeSelect:(BOOL)arg1;
- (void)reportTopEduBannerWithReportType:(long long)arg1 allow:(double)arg2;
- (void)handlePreloadLogic;
- (void)adjustInputButtonsLayout;
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
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (void)updateCurUILayoutAfterSelectedDataItem;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)preloadChooseCoverViewController;
- (void)loadCoverEditVCInfo;
- (void)initCoverEditVC;
- (void)updateRecommendTagFromDraft;
- (void)updateMoreFuncToolButton;
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
- (id)shortTextLimitLabel;
- (void)restoreHistorySave;
- (void)resetTextViewLayout;
- (void)updatePublishButtonItemEnabledState;
- (void)showIdentifyFailedToast;
- (void)showIdentifyFailedToast:(BOOL)arg1;
- (void)showIdentifyFailedToast:(BOOL)arg1 toastErrTips:(id)arg2;
- (void)updateContactInfoWithContact:(id)arg1;
- (void)updatePreviewContentLayout;
- (void)updateSpecialCoverData;
- (unsigned long long)_getCoverConfigFlag;
- (void)adjustAuthorInfoView;
- (BOOL)videoResourceExists;
- (void)realForEditCover;
- (void)restoreTextViewContent;
- (double)getCurrentLongAreaHeight;
- (void)initHashTagButton;
- (void)initMentionButton;
- (void)updateInputViewSubviewsFrame:(BOOL)arg1 mentionSbCanShow:(BOOL)arg2;
- (id)mentionSomebodyButton;
- (void)clickHashTagButton;
- (void)clickMentionSomebodyButton;
- (void)clickCreateEventButton;
- (void)updateEventActionSheet;
- (BOOL)canShowStateSettingView;
- (void)getExtensionLinkFromPasteBoard;
- (BOOL)shouldShowPOIGroupBuyEdu;
- (void)_setupPostTagEntryViewIfNeeded;
- (void)_updateStatePanelView;
- (void)onBindOriginalEntrance;
- (void)onBindPOIEntrance;
- (void)onClickMusicOriginalAction:(id)arg1;
- (void)_onClickDeleteOriginInfo;
- (void)_onClickEditOriginInfo;
- (BOOL)_shouldShowMusicDescAction;
- (BOOL)_shouldShowShareToFollowFeedCommentArea;
- (void)_findSelectedOriginalItem:(id /* block */)arg1;
- (id)currentOriginalItem;
- (void)onClickOriginalSwitch:(id)arg1;
- (void)updateOriginInfoWhenDataItemChanged;
- (unsigned int)genPOICustomStyle;
- (BOOL)canShowAttachSettingView;
- (void)_updateAttachPanelView;
- (BOOL)enableShowLinkEntrance;
- (void)addNearRedPacketRecommendBubbleFromView:(id)arg1 redPacket:(id)arg2;
- (id)redPacketRecommendBubble;
- (void)onClickPreviewLinkAction;
- (id)postContact;
- (BOOL)enablePostWithAttachShopInfo;
- (BOOL)postWithAttachShopIsSpam;
- (id)createCellWithImage:(id)arg1 iconUrl:(id)arg2 title:(id)arg3 subTitle:(id)arg4 themeColor:(id)arg5 showRightArrow:(BOOL)arg6;
- (id)createTextCellWithTitle:(id)arg1 recommendTips:(id)arg2 subTitle:(id)arg3 rightIcon:(id)arg4 switchOn:(BOOL)arg5 tipsClickAction:(SEL)arg6 switchChangeAction:(SEL)arg7;
- (void)onHotNewsCellClick;
- (void)onPostTagEntryButtonClick;
- (id)optionalSelectedUsernames;
- (void)clickSwitchAccount;
- (void)onAddParseLinkURL:(id)arg1;
- (void)identifyExtensionReadUrlString:(id)arg1;
- (void)updateParseFailState:(BOOL)arg1 isTemporaryLink:(BOOL)arg2 toastTips:(id)arg3;
- (void)resignInput;
- (void)resignModInput;
- (BOOL)isOnExpressionEditProcess;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTextAreaLimitLabelState;
- (void)didCommitText:(id)arg1;
- (void)onClickShortInfoBtn;
- (void)onClickShareTemplateVideoToCommentAreaBtn:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)showEditMenuFromTextView:(id)arg1 bindUserInfo:(id)arg2;
- (void)onMenuModify:(id)arg1;
- (void)onMenuDelete:(id)arg1;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)moveScrollViewTopAsKeyboardShow;
- (void)keyboardWillHide;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)onExtensionReadRecommendedCellClicked;
- (void)showSpamTipsWithString:(id)arg1;
- (void)onClickAddShopAction;
- (void)onClickChooseEmotionAction;
- (void)onTapEmoticonPackWithPid:(id)arg1 andPackName:(id)arg2;
- (void)longDescBecomeFirstResponder;
- (void)backToSnsEditViewController;
- (void)showSaveOrNotAlert;
- (void)showClubExitAlert;
- (void)onSaveBtnClicked;
- (void)onCancelSaveBtnClicked;
- (void)reportExitAction;
- (void)savePostSession:(id)arg1;
- (void)clearLocalCacheMediaInfo;
- (void)doExit:(BOOL)arg1;
- (void)reportCancelPostWithModel:(id)arg1;
- (void)notifySaveDraft;
- (id)findDisplayDraftNavigationVC;
- (id)getHandledLongTextContent;
- (id)getHandledShortTextContent;
- (id)handleStringSpecialWordFrom:(id)arg1;
- (void)clickPostAction;
- (void)reportClickPostAction;
- (void)tryShowPostTipsVCIfNeededWithCompletion:(id /* block */)arg1;
- (void)onCheckVeritfyAssistSuccess:(BOOL)arg1;
- (void)onFetchPrepareResponseFailed;
- (void)onFetchUserPrepareSuc;
- (void)afterVerityPost;
- (void)postViewControllerWithPostSession:(id)arg1;
- (id)poiSelectPromise;
- (id)feedVerifyActionSheetPromise;
- (BOOL)triggerSafePanelActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(id /* block */)arg3 acceptMsg:(id)arg4 clickAcceptBlock:(id /* block */)arg5 cancelMsg:(id)arg6 clickCancelBlock:(id /* block */)arg7 buttonModelArray:(id)arg8 showTimesType:(int)arg9;
- (void)_createAccountSuccessWithPostSession:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (BOOL)checkPostDataItemLocalFileExistWithDataItem:(id)arg1;
- (void)udpateTextContentToDataItem;
- (void)updatePostSessionDataInfo;
- (void)onClickChooseTencentVideo;
- (void)onClickParseLikeAction:(long long)arg1;
- (void)showEditExtensionRedView:(long long)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)getExtendedReadingTitleCompleted;
- (void)onRedPacketSheet:(id)arg1 onSelectedRedPacket:(id)arg2;
- (void)onRedPacketSheetClickEditLink:(id)arg1;
- (void)textDidInputAtFinderContact:(id)arg1;
- (id)textGetSelectRangeArray:(id)arg1;
- (void)filterTextUpdateTopicModel:(id)arg1;
- (void)updateKeyboardPanelView;
- (void)showShortTitleTextBGArea;
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
- (void)onPostViewModelWarningFlag:(unsigned long long)arg1;
- (void)onPostViewModelUpdateAppendInfoView;
- (void)onPostViewModelParseExtLinkStart;
- (void)onPostViewModelParseExtLinkSuc;
- (void)onPostViewModelParseExtLinkFailIsFromPasteBoard:(BOOL)arg1 errMsg:(id)arg2;
- (void)onPostViewModelParseExtLinkRefreshParseBoard;
- (void)onPostViewModelReloadSettingView;
- (void)onPostViewModelStickerListChanged;
- (void)onPostViewModelCoverInfoChanged;
- (id)onPostViewModelFetchTextBy:(unsigned long long)arg1;
- (void)createEventVC:(id)arg1 createEventSuccess:(id)arg2;
- (void)moveLocalFilePathToFinderUsernamePath:(id)arg1;
- (void)searchEventViewController:(id)arg1 didSelectEvent:(id)arg2;
- (void)eventPosterViewController:(id)arg1 didExitEvent:(id)arg2;
- (int)feedViewControllerScene;
- (void)onClickHightLightTopicControl;
- (void)showHighlightTopicCreateVC;
- (void)onClickChooseLinkAction;
- (void)onClickChooseCombinationLink;
- (void)postLinkActionSheetClickItem:(unsigned long long)arg1;
- (void)openTingMusicPage;
- (void)asyncLoadMusicLiteAppFromAppId:(id)arg1 page:(id)arg2 query:(id)arg3;
- (void)openTingAudioPage;
- (void)postInputViewClickExpressionBtn:(id)arg1;
- (void)postInputViewClickTopic:(id)arg1 inputTextTopicModel:(id)arg2;
- (void)sendPostInfoJumpInfo:(id)arg1 optionalParams:(id)arg2;
- (void)originalEduClickRuleAction:(id)arg1;
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
- (BOOL)selectPOIFromAssetSwitch;
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
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickingImageWithActionFlow:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickEditingSightWithInfo:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didFinishPickAssetInfos:(id)arg2 picker:(id)arg3;
- (void)shootComposingViewController:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)shootComposingViewController:(id)arg1 didTakenSightPicture:(id)arg2 imageData:(id)arg3 frontCamera:(BOOL)arg4 editImageAttr:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didTakenShortVideo:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)shootComposingViewController:(id)arg1 didFinishComposingWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)processWithMJShootingSightDraft:(id)arg1 finderTask:(id)arg2 appliedMusicInfo:(id)arg3;
- (BOOL)isMJPublisherEnabled;
- (id)onExtensionReadWarningBySupportType:(long long)arg1;
- (id)onExtensionReadErrorBySupportType:(long long)arg1 text:(id)arg2;
- (void)specialTopicCreateViewController:(id)arg1 didClickCreateBtnWithTopicName:(id)arg2;
- (void)onCommonTitleDescActionSheetClickCloseAction:(id)arg1;
- (void)eduTipsActionSheetClickRuleUrl:(id)arg1 actionSheet:(id)arg2;
- (void)eduTipsActionSheetClickTrailBtnFrom:(id)arg1;
- (void)eduTipsActionSheetClickAcceptBtnFrom:(id)arg1 receiveRule:(BOOL)arg2;
- (void)eduTipsActionSheetClickCancelBtnFrom:(id)arg1;
- (void)titleDescButtonClickRuleUrl:(id)arg1 actionSheet:(id)arg2;
- (void)titleDescButtonAcceptBtnFrom:(id)arg1;
- (void)applyForStorePromotionCGI;
- (void)titleDescButtonClickCancelBtnFrom:(id)arg1;
- (void)onLocationViewControllerDidSelectLocation:(id)arg1 scene:(int)arg2 searchWord:(id)arg3 poiBusinessType:(int)arg4 fromVC:(id)arg5;
- (void)onLocationViewControllerClickSureLocation:(id)arg1 scene:(int)arg2 searchWord:(id)arg3 poiBusinessType:(int)arg4 fromVC:(id)arg5;
- (id)genReportInfoContentVM;
- (void)onCoverEditRemoveCoverActionFromVC:(id)arg1;
- (void)onModifyEditInputResign;
- (void)onModifyEditInputChangeFrom:(id)arg1 toContent:(id)arg2;
- (void)updateModifiedPanelViewState;
- (id)modifiedPanelView;
- (id)modifiedEduTipsView;
- (void)showModFailToastBySourceType:(unsigned long long)arg1;
- (void)onModifiedPanelView:(id)arg1 clearModel:(id)arg2;
- (void)onCoverHoriPreviewCoverChanged;
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
- (void)setWarningPanelView:(id)arg1;
- (void)setAttachSettingsView:(id)arg1;
- (void)setStateSettingsView:(id)arg1;
- (void)setPoiCustomCtrl:(id)arg1;
- (id)poiPickerViewController;
- (void)setPoiPickerViewController:(id)arg1;
- (id)addExtensionLinkButton;
- (void)setAddExtensionLinkButton:(id)arg1;
- (id)extensionReadRecommendedButton;
- (void)setExtensionReadRecommendedButton:(id)arg1;
- (void)setRedPacketRecommendBubble:(id)arg1;
- (id)parseLinkView;
- (void)setParseLinkView:(id)arg1;
- (id)originalControl;
- (void)setOriginalControl:(id)arg1;
- (id)musicOriginInfo;
- (void)setMusicOriginInfo:(id)arg1;
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
- (id)hashTagButton;
- (void)setHashTagButton:(id)arg1;
- (id)mentionButton;
- (void)setMentionButton:(id)arg1;
- (void)setShortTextAreaBGView:(id)arg1;
- (void)setShortTextView:(id)arg1;
- (void)setShortTextLimitLabel:(id)arg1;
- (void)setShortInfoBtn:(id)arg1;
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
- (BOOL)showSafePanelAlready;
- (void)setShowSafePanelAlready:(BOOL)arg1;
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
- (id)lastFinderLocation;
- (void)setLastFinderLocation:(id)arg1;
- (id)lastPOISearchWord;
- (void)setLastPOISearchWord:(id)arg1;
- (void)setMjPublisher:(id)arg1;
- (void).cxx_destruct;
@end

