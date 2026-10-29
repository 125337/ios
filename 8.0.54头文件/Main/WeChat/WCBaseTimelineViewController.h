@interface WCBaseTimelineViewController : MMUIViewController <WCMomentsClickHandlerDelegate, MMLiveMorphDismissTarget>
{
    BOOL _actionAreaWrapEnabled; // +0x68
    BOOL _dynamicTagEnabled; // +0x69
    BOOL _isStarBrowsingEnabled; // +0x6a
    unsigned int _commentWordLimit; // +0x6c
    WCMomentsClickHandler * _clickHandler; // +0x70
    MMURLHandler * _urlHandler; // +0x78
    MMTableView * _tableView; // +0x80
    WCDataItem * _inputDataItem; // +0x88
    WCUserComment * _inputRefComment; // +0x90
    WCInputController * _inputController; // +0x98
    UIButton * _expressionButton; // +0xa0
    MMUILabel * _remainWordCountLabel; // +0xa8
    long long _lastRemainWordCount; // +0xb0
    UIView * _backgroundView; // +0xb8
    UIImageView * _inputToolView; // +0xc0
    EmoticonBoardView * _emoticonBoardView; // +0xc8
    UIButton * _atButton; // +0xd0
    MMGrowTextView * _growTextView; // +0xd8
    id <UIViewControllerPreviewing> _previewingContext; // +0xe0
    WCMomentsPageContext * _pageContext; // +0xe8
    WCMomentsInputAreaReportInfo * _inputAreaReportInfo; // +0xf0
    NSMutableDictionary * _cellHeightCache; // +0xf8
    NSMutableDictionary * _cellShowItemCache; // +0x100
    NSMutableDictionary * _hasPredownload; // +0x108
    long long _focusedCellMatchingMode; // +0x110
    long long _videoAutoPlayType; // +0x118
    CGPoint _userScrollingVelocity; // +0x120
}
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
- (void)setInputAtButtonImage:(id)arg1;
- (void)initBackgroundView;
- (void)initEmoticonView;
- (void)updateWordCnt:(long long)arg1;
- (void)performLightFeedBackIfNeededWithRemain:(long long)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)resetInputControllerComponents;
- (void)trySetEmotionSupport:(BOOL)arg1;
- (id)safeProfileContactWithUserName:(id)arg1 displayname:(id)arg2;
- (void)setupInputAreaReportInfo;
- (void)openTopicWithQuery:(id)arg1 dataItem:(id)arg2 userComment:(id)arg3;
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
- (void).cxx_destruct;
@end

