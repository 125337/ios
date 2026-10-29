@interface EmoticonBoardCrossCollectionController : MMObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonDescMgrExt, ExpressionMgrExt, EmoticonStoreItemExt, EmoticonBoardCrossCollectionEmojiPageDelegate, EmoticonBoardCrossCollectionEmoticonPageDelegate, EmoticonBoardCrossCollectionCameraEmoticonEntryPageDelegate, EmoticonBoardCrossCollectionIPSetPageDelegate, EmoticonBoardCrossCollectionRecommendPageDelegate, EmoticonBoardCrossCollectionIPTipPageDelegate, UIGestureRecognizerDelegate, EmoticonBoardCrossCollectionRecommendAndAIPageCellDelegate>
{
    BOOL _darkMode; // +0x8
    BOOL _shouldShowRecentUseEmoji; // +0x9
    BOOL _emojiCanSend; // +0xa
    BOOL _hideRightBottomBtns; // +0xb
    BOOL _useSystemEmojiStyle; // +0xc
    BOOL _disablePanOnRightQuarter; // +0xd
    BOOL _isExpandBarEnabled; // +0xe
    BOOL _shouldIgnoreScroll; // +0xf
    BOOL _isProgramScroll; // +0x10
    id <EmoticonBoardCrossCollectionControllerDelegate> _delegate; // +0x18
    UIView * _contentView; // +0x20
    NSString * _emojiFinishButtonTitle; // +0x28
    NSString * _currentChatName; // +0x30
    EmoticonBoardCrossSectionInfo * _currentSectionInfo; // +0x38
    NSArray * _sectionInfoArray; // +0x40
    UICollectionView * _collectionView; // +0x48
    UICollectionViewFlowLayout * _collectionLayout; // +0x50
    NSMutableDictionary * _emoticonListStorage; // +0x58
    unsigned long long _recentCheckSectionInfoIndex; // +0x60
    NSMutableDictionary * _pidToSectionInfoDict; // +0x68
    MMUIView * _expandBarView; // +0x70
    UIPanGestureRecognizer * _expandPanGes; // +0x78
    UITapGestureRecognizer * _expandTapGes; // +0x80
    double _expandPanGesLastPosY; // +0x88
    unsigned long long _selectTime; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)changeToExpand:(BOOL)arg1;
- (id)expandBarView;
- (void)preLoadCustomAndCameraEmoticonList;
- (void)preLoadEmoticonListForPid:(id)arg1;
- (void)updateContentViewFrame:(CGRect)arg1;
- (void)updateContentViewFrame:(CGRect)arg1 isByPassScroll:(BOOL)arg2;
- (void)setEmoticonPageArray:(id)arg1 show:(BOOL)arg2;
- (void)changePageToPid:(id)arg1 scrollToTop:(BOOL)arg2 animated:(BOOL)arg3;
- (void)updateRecentUseEmojiNeedReload:(BOOL)arg1;
- (void)stopCurrentPageScroll;
- (id)visibleCellView;
- (unsigned long long)currentSelectedIndex;
- (void)onBoardHide;
- (void)onBoardShow;
- (void)onRecommendPrefetcherDidUpdate:(id)arg1;
- (void)reportAutoSelectCustomEmoticonPageIfNeeded;
- (void)setEmojiCanSend:(BOOL)arg1;
- (void)setEmojiFinishButtonTitle:(id)arg1;
- (void)setHideRightBottomBtns:(BOOL)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (BOOL)isTracking;
- (BOOL)updateExsitingEmoticonSectionInfoWithPageWrap:(id)arg1;
- (BOOL)checkNeedReloadForIPChangeForPid:(id)arg1;
- (id)sectionInfoForPid:(id)arg1;
- (id)safeGetNextSectionInfo;
- (id)safeGetPreviousSectionInfo;
- (id)getQQEmojiDictionary;
- (id)getSystemEmojiDictionary:(id)arg1;
- (id)getQQEmojiSectionInfo;
- (id)getVisibleQQEmojiPageCell;
- (id)getVisibleSystemEmojiPageCell;
- (id)getVisibleEmoticonPageCell;
- (BOOL)isCustomOrCameraPid:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 descList:(id)arg2;
- (void)onEmojiBoardKeyListChanged;
- (void)onPageCell:(id)arg1 didScrollToOffset:(CGPoint)arg2;
- (BOOL)shouldDisableScrollAdjustment;
- (void)onQQEmojiPageCellTapQQEmojiWithCode:(id)arg1 isRecentUse:(BOOL)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (BOOL)shouldShowQQEmojiSendButton;
- (void)onQQEmojiPageCellTapSendButton;
- (void)onQQEmojiPageCellTapDeleteButton;
- (void)shouldShowQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(CGPoint)arg2 hideDesc:(BOOL)arg3;
- (void)shouldHideQQEmojiPreview;
- (void)onEmoticonPageCellTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 pid:(id)arg3 maxCountPerLine:(unsigned long long)arg4;
- (void)onTapSubButton;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(CGRect)arg5;
- (void)shouldShowEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(CGRect)arg5 disableOperation:(BOOL)arg6;
- (void)shouldHideEmoticonPreview;
- (void)pushToDesignerProfile:(id)arg1 redotReporter:(id)arg2;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (BOOL)isLayoutForExpand;
- (BOOL)shouldAdjustHeaderHeight;
- (BOOL)showNewResortEntrance;
- (void)onCameraEmoticonEntryPageCellTapCreateButton;
- (void)onRecommendPageCellTapRecommendViewWithPid:(id)arg1;
- (id)emoticonListForWrap:(id)arg1;
- (void)onConfirmMerge;
- (void)OnEmoticonStoreItemInstallFinished:(id)arg1;
- (BOOL)accessibilityManualScrollTo:(long long)arg1;
- (void)handleExpandPan:(id)arg1;
- (void)handleExpandTap:(id)arg1;
- (void)checkExpand;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)openTapSearchHalfScreen;
- (id)getRecommendPanelEmojiCtxs:(BOOL)arg1;
- (unsigned long long)getBoardShowTime;
- (unsigned long long)getLatestTagSelectedTime;
- (unsigned long long)countOfEmoticonByPid:(id)arg1;
- (void)onRecommendRequest:(unsigned long long)arg1 query:(id)arg2 fromRefresh:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)darkMode;
- (BOOL)shouldShowRecentUseEmoji;
- (void)setShouldShowRecentUseEmoji:(BOOL)arg1;
- (BOOL)emojiCanSend;
- (BOOL)hideRightBottomBtns;
- (BOOL)useSystemEmojiStyle;
- (void)setUseSystemEmojiStyle:(BOOL)arg1;
- (id)emojiFinishButtonTitle;
- (id)currentChatName;
- (void)setCurrentChatName:(id)arg1;
- (id)currentSectionInfo;
- (void)setCurrentSectionInfo:(id)arg1;
- (id)sectionInfoArray;
- (void)setSectionInfoArray:(id)arg1;
- (BOOL)disablePanOnRightQuarter;
- (void)setDisablePanOnRightQuarter:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)emoticonListStorage;
- (void)setEmoticonListStorage:(id)arg1;
- (unsigned long long)recentCheckSectionInfoIndex;
- (void)setRecentCheckSectionInfoIndex:(unsigned long long)arg1;
- (id)pidToSectionInfoDict;
- (void)setPidToSectionInfoDict:(id)arg1;
- (void)setExpandBarView:(id)arg1;
- (id)expandPanGes;
- (void)setExpandPanGes:(id)arg1;
- (id)expandTapGes;
- (void)setExpandTapGes:(id)arg1;
- (double)expandPanGesLastPosY;
- (void)setExpandPanGesLastPosY:(double)arg1;
- (BOOL)isExpandBarEnabled;
- (void)setIsExpandBarEnabled:(BOOL)arg1;
- (BOOL)shouldIgnoreScroll;
- (void)setShouldIgnoreScroll:(BOOL)arg1;
- (BOOL)isProgramScroll;
- (void)setIsProgramScroll:(BOOL)arg1;
- (unsigned long long)selectTime;
- (void)setSelectTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
