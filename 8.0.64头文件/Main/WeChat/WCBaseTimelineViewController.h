@interface WCBaseTimelineViewController : MMUIViewController <EmoticonSearchViewControllerDelegate, WCCommentImageHelperDelegate, InputControllerDelegate, WCMomentsClickHandlerDelegate, MMLiveMorphDismissTarget>
{
    BOOL _actionAreaWrapEnabled; // +0x70
    BOOL _dynamicTagEnabled; // +0x71
    BOOL _isStarBrowsingEnabled; // +0x72
    BOOL _shouldResumeInputState; // +0x73
    BOOL _isShowEmoticonSearchViewVC; // +0x74
    BOOL _isShowingCommentImageFullViewVC; // +0x75
    BOOL _hasAtFriendForAd; // +0x76
    unsigned int _commentWordLimit; // +0x78
    WCMomentsClickHandler * _clickHandler; // +0x80
    MMURLHandler * _urlHandler; // +0x88
    MMTableView * _tableView; // +0x90
    WCDataItem * _inputDataItem; // +0x98
    WCUserComment * _inputRefComment; // +0xa0
    WCInputController * _inputController; // +0xa8
    UIButton * _expressionButton; // +0xb0
    MMUILabel * _remainWordCountLabel; // +0xb8
    long long _lastRemainWordCount; // +0xc0
    UIView * _backgroundView; // +0xc8
    UIImageView * _inputToolView; // +0xd0
    EmoticonBoardView * _emoticonBoardView; // +0xd8
    UIButton * _atButton; // +0xe0
    MMGrowTextView * _growTextView; // +0xe8
    UIView * _growTextViewBackGroundView; // +0xf0
    id <UIViewControllerPreviewing> _previewingContext; // +0xf8
    WCMomentsPageContext * _pageContext; // +0x100
    WCMomentsInputAreaReportInfo * _inputAreaReportInfo; // +0x108
    NSMutableDictionary * _cellHeightCache; // +0x110
    NSMutableDictionary * _cellShowItemCache; // +0x118
    NSMutableDictionary * _hasPredownload; // +0x120
    long long _focusedCellMatchingMode; // +0x128
    long long _videoAutoPlayType; // +0x130
    UIButton * _pictureButton; // +0x138
    MMWebImageView * _commentImageView; // +0x140
    MMUIButton * _commentImageDeleteButton; // +0x148
    CEmoticonWrap * _emoticonWrap; // +0x150
    MMImage * _selectedImage; // +0x158
    WCCommentImageHelper * _commentImageHelper; // +0x160
    long long _bubSelectionType; // +0x168
    WCCommentBigEmoticonAddHelper * _bigEmoticonAddHelper; // +0x170
    NSString * _emoticonBoardPid; // +0x178
    CGPoint _userScrollingVelocity; // +0x180
}
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
- (id)wxKeyBoardSupportMessageTypes;
- (void)sendWXKeyBoardMessage:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)initCaches;
- (id)heightOfTimelineCellInCache:(id)arg1;
- (id)actionAreaVMOfTimelineCellInCache:(id)arg1;
- (void)cleanCellHeightCache:(id)arg1;
- (id)clickHandler;
- (id)urlHandler;
- (unsigned int)commentWordLimit;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForMenuNotification;
- (void)removeObserverForMenuNotification;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)restoreThumbnailHiddenStateIfNeeded;
- (void)visibleTimelineCellViewWillAppear;
- (void)visibleTimelineCellViewDidDisappear;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldRotateToInterfaceOrientation:(long long)arg1;
- (void)adjustViewAndNavBarRect;
- (id)tableViewWithDataProvider:(id)arg1;
- (double)getCellLineContentMarginCurOri;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)isUserScrollingToBottom;
- (void)updateUserScrollingVelocity:(CGPoint)arg1;
- (BOOL)isMainContentFullyVisible:(CGRect)arg1;
- (id)getBestCellViewWithMinDistance:(id)arg1 videoAutoPlayType:(long long)arg2;
- (id)getHotEreaCellViewIn:(id)arg1 withType:(id)arg2 videoAutoPlayType:(long long)arg3;
- (void)updateContentOffsetIfNeededForPackupDataItem:(id)arg1;
- (CGPoint)targetTableViewContentOffsetWithDeleteDataItem:(id)arg1;
- (void)updateContentOffsetIfNeededForShowOriginalTextFromTranlateWithDataItem:(id)arg1;
- (void)updateContentOffsetIfNeededForDeleteComment:(unsigned long long)arg1 dataItem:(id)arg2;
- (double)footerCellHeightChangeWithDataItem:(id)arg1 deleteComment:(id)arg2;
- (void)_updateContentOffsetIfNeededWithTopLocation:(CGPoint)arg1 bottomLocation:(CGPoint)arg2;
- (CGPoint)targetTableViewContentOffsetWithTopLocation:(CGPoint)arg1 bottomLocation:(CGPoint)arg2;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (id)visibleTimelineCommentCellWithCommentIndex:(unsigned long long)arg1 dataItem:(id)arg2;
- (id)visibleTimelineCommentCellWithComment:(id)arg1;
- (id)indexPathOfDataItem:(id)arg1;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)findCommentCellViewWithDataItem:(id)arg1 commentItem:(id)arg2;
- (id)blankTips;
- (id)blankRichTips;
- (id)blankAttributedTipsWithFont:(id)arg1;
- (void)ensureInitInputView:(id)arg1 atButtonSelector:(SEL)arg2 expressionButtonSelector:(SEL)arg3;
- (void)initInputToolView:(SEL)arg1 expressionButtonSelector:(SEL)arg2;
- (void)adjustGrowTextViewBGViewLayout;
- (void)setInputAtButtonImage:(id)arg1;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (void)updateWordCnt:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)resetInputControllerComponents;
- (void)trySetEmotionSupport:(BOOL)arg1;
- (void)setInputToolViewForPictureBtn:(BOOL)arg1;
- (void)configGrowTextOptions:(BOOL)arg1;
- (BOOL)supportCommentEmoticonOrImagePostForDataItem:(id)arg1;
- (BOOL)hasAtFriend:(id)arg1;
- (void)addAtContactSelectedForAd;
- (id)safeProfileContactWithUserName:(id)arg1 displayname:(id)arg2;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)setupInputAreaReportInfo;
- (void)openTopicWithQuery:(id)arg1 dataItem:(id)arg2 userComment:(id)arg3;
- (id)payTagParam:(id)arg1;
- (void)reRegisterPreviewContext:(id)arg1;
- (id)onPreviewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 refDataItem:(id)arg3 likeHandler:(id /* block */)arg4 commentHandler:(id /* block */)arg5 favHandler:(id /* block */)arg6;
- (void)onPreviewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)onTraitCollectionDidChange:(id)arg1 delegate:(id)arg2;
- (void)tryFixInputViewUIForIpadWhenRotate;
- (BOOL)isUsingSplitViewShowTimeline;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)openSettingTranslateLanguageVCForDataItem:(id)arg1 comment:(id)arg2;
- (void)addDebugOptionToActionSheetIfNeeded:(id)arg1;
- (void)showDebugInfoIfNeeded:(id)arg1 title:(id)arg2 attachKey:(id)arg3;
- (int)contactFromSceneFromClickScene:(long long)arg1;
- (void)reportPossibleTextStateIconClick:(long long)arg1 contact:(id)arg2;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)visibleLiveShareViewViewWithTid:(id)arg1;
- (void)updateInputColorWithInputDataItem:(id)arg1;
- (void)setUrlHandler:(id)arg1;
- (void)setCommentWordLimit:(unsigned int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
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
- (id)previewingContext;
- (void)setPreviewingContext:(id)arg1;
- (id)pageContext;
- (id)inputAreaReportInfo;
- (void)setInputAreaReportInfo:(id)arg1;
- (BOOL)actionAreaWrapEnabled;
- (void)setActionAreaWrapEnabled:(BOOL)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (id)cellHeightCache;
- (void)setCellHeightCache:(id)arg1;
- (id)cellShowItemCache;
- (void)setCellShowItemCache:(id)arg1;
- (id)hasPredownload;
- (void)setHasPredownload:(id)arg1;
- (long long)focusedCellMatchingMode;
- (void)setFocusedCellMatchingMode:(long long)arg1;
- (long long)videoAutoPlayType;
- (void)setVideoAutoPlayType:(long long)arg1;
- (CGPoint)userScrollingVelocity;
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
- (void).cxx_destruct;
@end
