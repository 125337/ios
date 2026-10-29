@interface WCNewCommitViewController : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, WCGroupTagViewControllerDelegate, SightViewDelegate, WCDragableSelectorViewDelegate, WCMomentsPrivacyViewControllerDelegate, WCSightVideoCompositeTaskDelegate, UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, MMTableViewInfoDelegate, ContactsSelectorControllerDelegate, IMsgExt, WCFacadeExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    WCTableViewManager * m_tableViewManager; // +0x68
    UIView * _headView; // +0x70
    UIView * _mediaContainerView; // +0x78
    WCSelectorView * _withImageView; // +0x80
    WCSelectorView * _withContactView; // +0x88
    UIView * _footerView; // +0x90
    UILabel * _privacyTipsLabel; // +0x98
    MMUIButton * _qzoneButton; // +0xa0
    UIImage * _sightThumbImage; // +0xa8
    UIImageView * _sightThumbImageView; // +0xb0
    UIActivityIndicatorView * _sightLoadingView; // +0xb8
    SightIconView * _progressView; // +0xc0
    WCInputController * _inputController; // +0xc8
    UIView * _backgroundView; // +0xd0
    UIImageView * _inputView; // +0xd8
    UIButton * _expressionButton; // +0xe0
    unsigned int _iInputSection; // +0xe8
    id <WCCommitViewAnimationDelegate> _delegate; // +0xf0
    WCDataItem * _cacheDateItem; // +0xf8
    MMLoadingView * _loadingView; // +0x100
    MMTimer * _fireTimer; // +0x108
    WCLocationInfo * _poiInfo; // +0x110
    WCMusicInfo * _musicInfo; // +0x118
    BOOL _bNeedAnimation; // +0x120
    BOOL _bShowLocation; // +0x121
    BOOL _bHideAddView; // +0x122
    WCPasteTextLengthLogic * pastelogic; // +0x128
    WCTimelinePOIPickerViewController * _poiPickerViewController; // +0x130
    NSString * _loadingOKStr; // +0x138
    WCMomentsPostReportSession * _postReportSession; // +0x140
    WCTimelineExtBean * _extBean; // +0x148
    WCDragTipView * _dragTipView; // +0x150
    BOOL m_isUseMMAsset; // +0x158
    BOOL m_hasConfirmReturn; // +0x159
    BOOL m_bFromWCList; // +0x15a
    BOOL _togetherEnabled; // +0x15b
    BOOL _hasShowDragTip; // +0x15c
    BOOL _canShowLastSelectTagCell; // +0x15d
    BOOL _isClickedLastSelectTagCell; // +0x15e
    BOOL _hasClickDone; // +0x15f
    BOOL _hasShownErrorTips; // +0x160
    BOOL _dynamicTagEnabled; // +0x161
    EmoticonBoardView * m_emoticonBoardView; // +0x168
    MMGrowTextView * _textView; // +0x170
    WCMomentsSpringTextContainerView * _springTextContainerView; // +0x178
    ContactsSelectorController * _contactsSelectorController; // +0x180
    unsigned long long _type; // +0x188
    NSString * _poiReportStr4Commit; // +0x190
    SightDraft * _sightDraft; // +0x198
    MMAsset * _sightAsset; // +0x1a0
    NSArray * _tempSelectContacts; // +0x1a8
    WCTimelineEnhanceDraftController * _enhanceDraftSaveController; // +0x1b0
    WCTimelineTrashReportData * _trashReportData; // +0x1b8
    ImageSelectorController * _imageSelectorController; // +0x1c0
    SightView * _m_sightFullScreenPreviewView; // +0x1c8
    WCDragDeleteBarView * _deleteBarView; // +0x1d0
    WCPOIStarView * _poiStarView; // +0x1d8
    WCCommitPrivacySetting * _lastPostPrivacySetting; // +0x1e0
    MMTipsViewController * _savingAlertView; // +0x1e8
    MMUILabel * _remainWordCountLabel; // +0x1f0
    long long _lastRemainWordCount; // +0x1f8
    MMLoadingView * _tigerToastView; // +0x200
    WCMomentsAnimatedFireworksView * _animatedFireworksView; // +0x208
    long long _springContentStyle; // +0x210
    long long _springPostScene; // +0x218
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
- (BOOL)canShowLastSelectTagCell;
- (CGSize)thumbnailSize;
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
- (void)makeLastSelectTagCell:(id)arg1;
- (void)onLastSelectTagCellClick;
- (void)saveLastPostPrivacySetting;
- (BOOL)isStringArr:(id)arg1 equalTo:(id)arg2;
- (void)makeEvaluatePOICell:(id)arg1;
- (BOOL)shouldShowEvaluatePOI;
- (id)navigationBarBackgroundColor;
- (id)textContainerView;
- (void)createSubviews;
- (void)addMediaView;
- (void)_initFireworksPlayerViewIfNeeded;
- (void)_layoutFireworksPlayerView;
- (id)fireworksDisplayRectList;
- (void)startPlayRandomFireworksIfNeeded;
- (void)stopPlayRandomFireworksIfNeeded;
- (id)createPrivacyTipsLabel;
- (id)createQzoneButton;
- (void)reloadFooterView;
- (void)setDeleteBarHidden:(BOOL)arg1;
- (id)getShowAddress;
- (void)makeContactCell:(id)arg1 andNormalCellManger:(id)arg2;
- (void)makePrivacyCell:(id)arg1 andNormalCellManger:(id)arg2;
- (id)createTitleLabelForPrivacyCellWithTitle:(id)arg1 color:(id)arg2;
- (id)createContentLabelForPrivacyCellWithTitle:(id)arg1;
- (void)reloadData;
- (void)adjustTigerTextContainerView;
- (void)reloadHeadViewSubviewsY;
- (double)thumbnailSettingMargin;
- (void)reloadType;
- (void)initView;
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
- (void)onQZoneClicked:(id)arg1;
- (void)onPrivacyCellClicked;
- (void)onWithContactCellClicked;
- (void)onLocationCellClicked;
- (void)OnReturn;
- (BOOL)shouldShowAlert:(long long)arg1;
- (void)onSaveBtnClickedWithTag:(long long)arg1;
- (void)onCancelSaveBtnClickedWithTag:(long long)arg1;
- (void)showSaveOrNotAlert:(long long)arg1;
- (void)doExit;
- (BOOL)processImage;
- (void)afterProcessSingleImage;
- (BOOL)checkImageState;
- (void)setErrorTips:(long long)arg1 forMMImage:(id)arg2;
- (long long)errorTipsForMMImage:(id)arg1;
- (void)showErrorTipsIfNeeded;
- (void)markErrorTipsShown;
- (void)clearErrorTipsState;
- (void)reportImageExifExceptionWithAsset:(id)arg1 error:(id)arg2;
- (void)validateImagesBeforePosting;
- (void)removeInvalidImages:(id)arg1 tag:(id)arg2;
- (void)postImages;
- (id)getUsernamesByTagNames:(id)arg1;
- (id)geTempSelectContactUsernames;
- (BOOL)checkTogetherWithGroupConflicts;
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
- (void)addBeanIntoUploadTask:(id)arg1;
- (void)clearExtBean;
- (BOOL)_canSelectPrivacySetting:(long long)arg1;
- (void)_privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (BOOL)canSelectPrivacySetting:(long long)arg1;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)onClickCell:(unsigned long long)arg1;
- (void)_checkCompositeTaskForSightDraft:(id)arg1;
- (void)_removeCompositeTaskListenerForSightDraft:(id)arg1;
- (void)_removeAllCompositeTaskDataForSightDraft:(id)arg1;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(BOOL)arg2 withSightDraft:(id)arg3;
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
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)springTextContainerView;
- (void)setSpringTextContainerView:(id)arg1;
- (id)contactsSelectorController;
- (void)setContactsSelectorController:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
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
- (id)enhanceDraftSaveController;
- (void)setEnhanceDraftSaveController:(id)arg1;
- (id)trashReportData;
- (void)setTrashReportData:(id)arg1;
- (BOOL)togetherEnabled;
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
- (BOOL)hasClickDone;
- (void)setHasClickDone:(BOOL)arg1;
- (id)savingAlertView;
- (void)setSavingAlertView:(id)arg1;
- (BOOL)hasShownErrorTips;
- (void)setHasShownErrorTips:(BOOL)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (id)remainWordCountLabel;
- (void)setRemainWordCountLabel:(id)arg1;
- (long long)lastRemainWordCount;
- (void)setLastRemainWordCount:(long long)arg1;
- (id)tigerToastView;
- (void)setTigerToastView:(id)arg1;
- (id)animatedFireworksView;
- (void)setAnimatedFireworksView:(id)arg1;
- (long long)springContentStyle;
- (long long)springPostScene;
- (void)setSpringPostScene:(long long)arg1;
- (void).cxx_destruct;
@end

