@interface WCCommentMultiImagesBrowseViewController : FullScreenViewController <WCCommentImageHelperDelegate, InputControllerDelegate, EmoticonSearchViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, WCCommentImagesBrowseCellDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, TransitioningAnimationDelegate, WCImageFullScreenViewContainerDelegate, EditImageForwardAndEditLogicDelegate, ShareDataToOpenSDKControllerDelegate, WCFinderStreamFooterViewActionDelegate, WCActionSheetDelegate>
{
    BOOL _forbidPreloadImg; // +0x71
    BOOL _isForward2Contact; // +0x72
    BOOL _shouldResumeInputState; // +0x73
    BOOL _isShowEmoticonSearchViewVC; // +0x74
    BOOL _isShowingCommentImageFullViewVC; // +0x75
    BOOL _hasAtFriendForAd; // +0x76
    BOOL _isActionAtAd; // +0x77
    BOOL _isShowingKeyBoard; // +0x78
    unsigned int _commentWordLimit; // +0x7c
    UICollectionView * _collectionView; // +0x80
    UICollectionViewFlowLayout * _collectionLayout; // +0x88
    unsigned long long _currentPage; // +0x90
    EditImageForwardAndEditLogicController * _editImageLogicController; // +0x98
    UIView * _fakeScreenView; // +0xa0
    ShareDataToOpenSDKController * _shareDataToOpenSDKController; // +0xa8
    unsigned long long _imageBrowseScene; // +0xb0
    double _layoutWidth; // +0xb8
    WCMomentsPageContext * _pageContext; // +0xc0
    id /* block */ _dismissBlock; // +0xc8
    NSMutableArray * _commentImageContainerArr; // +0xd0
    NSMutableArray * _userCommentsArr; // +0xd8
    WCCommentImagesBrowseViewModel * _commentImagesViewModel; // +0xe0
    UINavigationController * _presentedNavigationController; // +0xe8
    WCDataItem * _inputDataItem; // +0xf0
    WCUserComment * _inputRefComment; // +0xf8
    WCInputController * _inputController; // +0x100
    UIButton * _expressionButton; // +0x108
    MMUILabel * _remainWordCountLabel; // +0x110
    long long _lastRemainWordCount; // +0x118
    UIView * _backgroundView; // +0x120
    UIImageView * _inputToolView; // +0x128
    EmoticonBoardView * _emoticonBoardView; // +0x130
    UIButton * _atButton; // +0x138
    MMGrowTextView * _growTextView; // +0x140
    UIView * _growTextViewBackGroundView; // +0x148
    UIView * _holdSpeakSeparator; // +0x150
    UIButton * _pictureButton; // +0x158
    MMWebImageView * _commentImageView; // +0x160
    MMUIButton * _commentImageDeleteButton; // +0x168
    CEmoticonWrap * _emoticonWrap; // +0x170
    MMImage * _selectedImage; // +0x178
    WCCommentImageHelper * _commentImageHelper; // +0x180
    long long _bubSelectionType; // +0x188
    WCCommentBigEmoticonAddHelper * _bigEmoticonAddHelper; // +0x190
    NSString * _emoticonBoardPid; // +0x198
    CContact * _atContact; // +0x1a0
    WCPasteTextLengthLogic * _pastelogic; // +0x1a8
}
+ (void)showInViewController:(id)arg1 viewModel:(id)arg2 dismissBlock:(id /* block */)arg3;
- (void)ensureInitInputView:(id)arg1 atButtonSelector:(SEL)arg2 expressionButtonSelector:(SEL)arg3;
- (void)initInputToolView:(SEL)arg1 expressionButtonSelector:(SEL)arg2;
- (void)adjustGrowTextViewBGViewLayout;
- (unsigned int)getCommentWordLimit;
- (void)setInputAtButtonImage:(id)arg1;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (void)updateWordCnt:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)resetInputControllerComponents;
- (void)resetInputControllerPosition;
- (void)trySetEmotionSupport:(BOOL)arg1;
- (void)setInputToolViewForPictureBtn:(BOOL)arg1;
- (void)configGrowTextOptions:(BOOL)arg1;
- (BOOL)supportCommentEmoticonOrImagePostForDataItem:(id)arg1;
- (void)addAtContactSelectedForAd;
- (void)initCommentEmoticon;
- (void)saveWCSettingIfEmoticonPidChanged;
- (void)initInputViewSelectPictureBtn;
- (void)onClickSelectImageCommentButton:(id)arg1;
- (void)initInputViewThumbPreivewImageView;
- (void)onTapCommentImageView:(id)arg1;
- (void)deleteInputViewThumb;
- (void)onTapInputViewThumbDeleteButton:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onCommentImageSelect:(id)arg1;
- (void)onCommentImageCancel;
- (void)onCommentImagePickerDismissCompletion;
- (void)_handleDidSelectImage:(id)arg1;
- (void)_showCommentImageWithImage:(id)arg1 contentMode:(long long)arg2;
- (void)_showCommentImageWithEmoticon:(id)arg1 contentMode:(long long)arg2;
- (void)keyboardWillShowForEmoticon;
- (void)resumeInputState:(id)arg1;
- (void)updateEmoticonFrame;
- (id)buildCommentItem:(id)arg1 source:(long long)arg2;
- (void)showCommentEmotionView:(id)arg1 ofDataItem:(id)arg2 withRect:(CGRect)arg3;
- (void)_handleDidSelectEmoticon:(id)arg1;
- (void)showEmoticonSearchViewController;
- (void)addEmoticon:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)OnEmoticonPidDidChanged:(id)arg1;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)emoticonBoardViewDidShow;
- (id)wxKeyBoardSupportMessageTypes;
- (void)sendWXKeyBoardMessage:(id)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(BOOL)arg4;
- (void)updateInputColorWithInputDataItem:(id)arg1;
- (void)setInputToolViewAtable:(BOOL)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateContentOffset;
- (void)updateGrowTextViewMaxHeight;
- (double)maxGrowTextViewHeight;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewDidClickDictationStartIntent:(id)arg1;
- (void)inputControllerDidExposeDictationIcon:(id)arg1;
- (void)onHideKeyboard;
- (void)textViewTextDidChange;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (BOOL)getInputControllerSendButtonCanSendState;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)sendComment:(id)arg1 hasAtFreind:(BOOL)arg2;
- (BOOL)hasAtFriend:(id)arg1;
- (id)subAtContactString:(id)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)cacheInputText;
- (void)configSnsCmtEmoDataReport:(id)arg1;
- (void)configSnsCmtAlbumDataReport:(id)arg1;
- (id)genSnsCmtEmoOrPicReportDict;
- (void)configSnsCmtBubDataReport:(id)arg1;
- (void)configSnsCmtBubXDataReport:(id)arg1;
- (void)reportSnsCmtBubDataWithEvent:(id)arg1;
- (void)reportSnsCmtBubXDataWithEvent:(id)arg1;
- (id)genSnsCmtBubOrXReportDict;
- (void)reportCmtSendClickEvent:(id)arg1;
- (void)reportCmtPicSelectNextClickEvent;
- (void)reportCmtBigPicReplyEvent:(id)arg1;
- (void)setCommentImagesViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willDisshow;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldAutorotate;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)pageContext;
- (void)setupUI;
- (void)layoutUI;
- (id)collectionLayout;
- (id)collectionView;
- (void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)caulateAndUpdateCurrentPage;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)resetCurrentContainer;
- (void)resetLayoutCollectionView;
- (void)onFullScreenClose;
- (void)stopAndCloseFullScreenWindow;
- (void)stopAndCloseFullScreenWindowAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)handleTap:(id)arg1;
- (BOOL)isFooterVisibleInSection:(long long)arg1;
- (void)preDownloadImage;
- (void)captureScreen;
- (id)presentedNavigationController;
- (id)topMostNavigationVC;
- (void)showVCAnimation;
- (void)hideVCAnimationWillCompleted:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)getVisibleViewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)onUserNameClicked:(id)arg1;
- (void)showCommentClickOption:(id)arg1 dataItem:(id)arg2 index:(long long)arg3;
- (void)showReplyCommentOption:(id)arg1 dataItem:(id)arg2;
- (void)showDeleteSelfCommentOption:(id)arg1 dataItem:(id)arg2 index:(long long)arg3;
- (void)deleteCommentWithIndex:(long long)arg1;
- (void)addImageComment:(id)arg1;
- (void)deleteComment:(id)arg1 dataItem:(id)arg2;
- (void)animationHideWithRotate;
- (void)onContainerAnimationShowStart;
- (void)onContainerCustomShowAnimation;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onLongPressedAddFav:(id)arg1;
- (void)onLongPressedWithMediaItem:(id)arg1 contact:(id)arg2;
- (void)onLongPressedEditImage:(id)arg1 atPath:(id)arg2 withFavItem:(id)arg3 editAtFirst:(BOOL)arg4;
- (void)onExposeWithDataItem:(id)arg1;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (id)onGetViewController;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onPresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onAnimateFadeOut;
- (void)onShareToOpenSDKWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onBeginAnimateTranslate;
- (void)onFinishAnimatedTranslate;
- (void)onShowTranslateImage:(id)arg1;
- (void)onBeginShowMultiQRCodeView:(id)arg1;
- (void)onFinishShowMultiQRCodeView;
- (void)imageFullScreenViewContainerDidClickOriginalArticle:(id)arg1;
- (void)imageFullScreenViewContainerDidClickJumpFinder:(id)arg1;
- (BOOL)imageFullScreenViewContainerIsAppearOnScreen:(id)arg1;
- (id)getPresentedNavigationController;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onForwardMessageCancelInEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (void)cancelForward;
- (void)onShareDataToOpenSDKCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportCmtBigPicDelEvent:(id)arg1;
- (void)reportCmtBigPicTxtEvent:(id)arg1;
- (void)reportCmtBigPicExpEvent:(long long)arg1 type:(long long)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionLayout:(id)arg1;
- (unsigned long long)currentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
- (BOOL)forbidPreloadImg;
- (void)setForbidPreloadImg:(BOOL)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (id)fakeScreenView;
- (void)setFakeScreenView:(id)arg1;
- (BOOL)isForward2Contact;
- (void)setIsForward2Contact:(BOOL)arg1;
- (id)shareDataToOpenSDKController;
- (void)setShareDataToOpenSDKController:(id)arg1;
- (unsigned long long)imageBrowseScene;
- (void)setImageBrowseScene:(unsigned long long)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void)setPageContext:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)commentImageContainerArr;
- (void)setCommentImageContainerArr:(id)arg1;
- (id)userCommentsArr;
- (void)setUserCommentsArr:(id)arg1;
- (id)commentImagesViewModel;
- (void)setPresentedNavigationController:(id)arg1;
- (id)inputDataItem;
- (void)setInputDataItem:(id)arg1;
- (id)inputRefComment;
- (void)setInputRefComment:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)remainWordCountLabel;
- (void)setRemainWordCountLabel:(id)arg1;
- (long long)lastRemainWordCount;
- (void)setLastRemainWordCount:(long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)inputToolView;
- (void)setInputToolView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)atButton;
- (void)setAtButton:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)growTextViewBackGroundView;
- (void)setGrowTextViewBackGroundView:(id)arg1;
- (id)holdSpeakSeparator;
- (void)setHoldSpeakSeparator:(id)arg1;
- (id)pictureButton;
- (void)setPictureButton:(id)arg1;
- (id)commentImageView;
- (void)setCommentImageView:(id)arg1;
- (id)commentImageDeleteButton;
- (void)setCommentImageDeleteButton:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)commentImageHelper;
- (void)setCommentImageHelper:(id)arg1;
- (BOOL)shouldResumeInputState;
- (void)setShouldResumeInputState:(BOOL)arg1;
- (BOOL)isShowEmoticonSearchViewVC;
- (void)setIsShowEmoticonSearchViewVC:(BOOL)arg1;
- (BOOL)isShowingCommentImageFullViewVC;
- (void)setIsShowingCommentImageFullViewVC:(BOOL)arg1;
- (long long)bubSelectionType;
- (void)setBubSelectionType:(long long)arg1;
- (id)bigEmoticonAddHelper;
- (void)setBigEmoticonAddHelper:(id)arg1;
- (BOOL)hasAtFriendForAd;
- (void)setHasAtFriendForAd:(BOOL)arg1;
- (id)emoticonBoardPid;
- (void)setEmoticonBoardPid:(id)arg1;
- (unsigned int)commentWordLimit;
- (void)setCommentWordLimit:(unsigned int)arg1;
- (id)atContact;
- (void)setAtContact:(id)arg1;
- (id)pastelogic;
- (void)setPastelogic:(id)arg1;
- (BOOL)isActionAtAd;
- (void)setIsActionAtAd:(BOOL)arg1;
- (BOOL)isShowingKeyBoard;
- (void)setIsShowingKeyBoard:(BOOL)arg1;
- (void).cxx_destruct;
@end
