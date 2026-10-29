@interface EmoticonBoardXiaoweiSearchViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EmoticonBoardXiaoweiSearchFlowLayoutDelegate, EmoticonRecommendBoardCgiDelegate, UIScrollViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, EmoticonDownloadTaskDelegate, FTSFloatingVoiceInputViewModelDelegate>
{
    BOOL _moreButtonLongPressShouldCancel; // +0x8
    BOOL _moreButtonLongPressReleased; // +0x9
    BOOL _shouldSuppressMoreButtonTap; // +0xa
    BOOL _isAskTransitioning; // +0xb
    BOOL _hasMoreSearchResult; // +0xc
    BOOL _hasMoreMixSearchResult; // +0xd
    BOOL _isAllSearchLoading; // +0xe
    BOOL _isMixSearchLoading; // +0xf
    BOOL _isAllLoadingMore; // +0x10
    BOOL _isMixLoadingMore; // +0x11
    BOOL _searchHasUserScrolled; // +0x12
    BOOL _shouldFocusInputOnAppear; // +0x13
    BOOL _recentUseSectionExpanded; // +0x14
    BOOL _isOpeningSettingPage; // +0x15
    BOOL _isSettingPageBackgroundShrunk; // +0x16
    BOOL _shouldShowRecentUseSection; // +0x17
    BOOL _shouldShowRecentSearchSection; // +0x18
    BOOL _shouldShowFeaturedSection; // +0x19
    unsigned int _searchOffset; // +0x1c
    unsigned int _mixSearchOffset; // +0x20
    unsigned int _searchCurrentPage; // +0x24
    unsigned int _mixSearchCurrentPage; // +0x28
    NSString * _chatId; // +0x30
    id /* block */ _getRecommendCtxsBlock; // +0x38
    id /* block */ _sendEmoticonBlock; // +0x40
    id /* block */ _openEmotionStoreBlock; // +0x48
    id /* block */ _willDismissBlock; // +0x50
    UIView * _presentationDimmingView; // +0x58
    UIView * _panelView; // +0x60
    UILabel * _titleLabel; // +0x68
    UIButton * _closeButton; // +0x70
    UIButton * _createEmoticonButton; // +0x78
    UILabel * _recommendTitleLabel; // +0x80
    UIView * _searchTabContainerView; // +0x88
    UIButton * _allEmoticonTabButton; // +0x90
    UIButton * _mixEmoticonTabButton; // +0x98
    UIView * _tabIndicatorView; // +0xa0
    UIView * _searchTabBottomLineView; // +0xa8
    UICollectionView * _collectionView; // +0xb0
    EmoticonBoardXiaoweiSearchFlowLayout * _collectionLayout; // +0xb8
    MMUIActivityIndicatorView * _loadingView; // +0xc0
    StoreEmoticonDownloadMgr * _downloadMgr; // +0xc8
    NSMutableSet * _prefetchDownloadMd5Set; // +0xd0
    UIButton * _moreButton; // +0xd8
    UIView * _moreButtonLongPressOverlayView; // +0xe0
    UIView * _moreButtonLongPressSnapshotView; // +0xe8
    UIVisualEffectView * _moreButtonLongPressBlurView; // +0xf0
    UIView * _moreButtonLongPressWhiteMaskView; // +0xf8
    UIView * _moreButtonLongPressVoicePanel; // +0x100
    CAShapeLayer * _moreButtonLongPressVoicePanelMaskLayer; // +0x108
    UIWindow * _moreButtonLongPressOverlayHostWindow; // +0x110
    CBTWaveformView * _moreButtonLongPressFeedbackView; // +0x118
    UIActivityIndicatorView * _moreButtonLongPressIndicatorView; // +0x120
    UILabel * _moreButtonLongPressStatusLabel; // +0x128
    UILabel * _moreButtonLongPressCancelLabel; // +0x130
    FTSFloatingVoiceInputViewModel * _moreButtonVoiceInputViewModel; // +0x138
    NSString * _moreButtonVoiceRecognizedText; // +0x140
    double _moreButtonLongPressBackgroundHeight; // +0x148
    double _moreButtonLongPressCapturedTop; // +0x150
    UIView * _bottomAskMaskView; // +0x158
    UIButton * _settingsButton; // +0x160
    CAGradientLayer * _bottomAskMaskGradientLayer; // +0x168
    UIView * _inputContainerView; // +0x170
    UIImageView * _inputSearchIconView; // +0x178
    UITextField * _inputTextView; // +0x180
    UIButton * _askButton; // +0x188
    UIImageView * _askTransitionLogoView; // +0x190
    id /* block */ _askTransitionCompletion; // +0x198
    NSMutableArray * _recommendEmoticonList; // +0x1a0
    NSMutableArray * _recentUseEmoticonList; // +0x1a8
    NSMutableArray * _recentSearchKeywordList; // +0x1b0
    NSMutableArray * _searchEmoticonList; // +0x1b8
    NSMutableArray * _mixEmoticonList; // +0x1c0
    EmoticonRecommendBoardCgi * _recommendCgi; // +0x1c8
    WCCgiBlockHelper * _allSearchCgiHelper; // +0x1d0
    WCCgiBlockHelper * _mixSearchCgiHelper; // +0x1d8
    NSString * _searchKeyword; // +0x1e0
    NSString * _searchId; // +0x1e8
    NSString * _mixSearchId; // +0x1f0
    NSString * _searchSessionId; // +0x1f8
    unsigned long long _mode; // +0x200
    unsigned long long _selectedSearchTab; // +0x208
    double _keyboardOffset; // +0x210
    MMLiteAppViewController * _settingVC; // +0x218
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)focusInputIfNeeded;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMoreButtonLongPressBlurStyle;
- (void)updateInputContainerLayerStyle;
- (id)bottomAskMaskBackgroundColor;
- (void)updateBottomAskMaskGradientColors;
- (id)foldDownArrowImage;
- (id)askXiaoWeiTransitionImage;
- (id)inputSearchIconColor;
- (id)inputSearchIconImage;
- (void)updateInputPlaceholderStyle;
- (void)layoutAskTransitionLogoView;
- (void)setXiaoweiContentElementsAlpha:(double)arg1;
- (void)finishAskXiaoWeiTransitionIfNeeded;
- (void)startAskTransitionEyesRotation;
- (void)playAskXiaoWeiTransitionWithCompletion:(id /* block */)arg1;
- (void)setupSubviews;
- (id)persistedXiaoweiRecentUseRecordList;
- (void)persistXiaoweiRecentUseRecordList:(id)arg1;
- (void)recordXiaoweiRecentUseEmoticonWithMd5:(id)arg1 usedTime:(unsigned int)arg2;
- (void)clearXiaoweiRecentUseEmoticonRecords;
- (id)xiaoweiRecentUseEmoticonWrapWithMd5:(id)arg1 usedTime:(unsigned int)arg2;
- (void)reloadRecentUseEmoticonList;
- (void)reloadRecentSearchKeywordList;
- (id)persistedRecentSearchKeywordList;
- (void)persistRecentSearchKeywordList:(id)arg1;
- (void)addRecentSearchKeyword:(id)arg1;
- (void)clearRecentSearchKeywords;
- (void)reloadRecentSectionData;
- (double)recentUseEmoticonItemLength;
- (double)recentUseEmoticonLineSpacing;
- (double)recentUseEmoticonInteritemSpacing;
- (double)recentSearchKeywordItemSpacing;
- (double)recentSearchKeywordAvailableWidth;
- (id)displayedRecentSearchKeywordList;
- (double)featuredMoreButtonSpacingFromRecentSearchSectionBottom;
- (double)bottomAskButtonBottomInset;
- (double)bottomAskButtonTop;
- (unsigned long long)recentSearchKeywordLineCount;
- (double)computeRecommendContentHeight;
- (void)recordRecentUseEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (unsigned long long)recentUseItemCountPerLine;
- (BOOL)shouldShowRecentUseExpandAction;
- (id)displayedRecentUseEmoticonList;
- (void)setupInitialData;
- (id)recommendCtxsByRemovingInputAndChatContent:(id)arg1;
- (void)onTapOutsideInput:(id)arg1;
- (void)onTapCollectionView:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)shouldShowAskButton;
- (void)updateAskButtonStateWithText:(id)arg1;
- (void)addKeyboardObservers;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)animateInputContainerWithKeyboardNotification:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onInputTextChanged:(id)arg1;
- (void)triggerDelayedSearch:(id)arg1;
- (void)triggerSearchWithText:(id)arg1 resignFirstResponder:(BOOL)arg2;
- (void)resetSearchResultAndShowRecommend;
- (id)currentSearchListForTab:(unsigned long long)arg1;
- (id)searchIdForTab:(unsigned long long)arg1;
- (void)setSearchId:(id)arg1 forTab:(unsigned long long)arg2;
- (unsigned int)searchOffsetForTab:(unsigned long long)arg1;
- (void)setSearchOffset:(unsigned int)arg1 forTab:(unsigned long long)arg2;
- (BOOL)hasMoreSearchResultForTab:(unsigned long long)arg1;
- (void)setHasMoreSearchResult:(BOOL)arg1 forTab:(unsigned long long)arg2;
- (id)searchCgiHelperForTab:(unsigned long long)arg1;
- (void)setSearchCgiHelper:(id)arg1 forTab:(unsigned long long)arg2;
- (BOOL)isSearchLoadingForTab:(unsigned long long)arg1;
- (void)setSearchLoading:(BOOL)arg1 forTab:(unsigned long long)arg2;
- (BOOL)isLoadingMoreForTab:(unsigned long long)arg1;
- (void)setLoadingMore:(BOOL)arg1 forTab:(unsigned long long)arg2;
- (unsigned int)searchCurrentPageForTab:(unsigned long long)arg1;
- (void)setSearchCurrentPage:(unsigned int)arg1 forTab:(unsigned long long)arg2;
- (unsigned int)subSceneForSearchTab:(unsigned long long)arg1;
- (void)requestSearchWithLoadMore:(BOOL)arg1;
- (id)searchExtReqParamsWithCurrentPage:(unsigned int)arg1 requestId:(id)arg2 sessionId:(id)arg3 subScene:(unsigned int)arg4 keyword:(id)arg5;
- (id)textExtReqParamWithKey:(id)arg1 value:(id)arg2;
- (id)uintExtReqParamWithKey:(id)arg1 value:(unsigned long long)arg2;
- (id)emojiChatSearchExtInfoWithSessionId:(id)arg1 subScene:(unsigned int)arg2;
- (id)firstStringInDictionary:(id)arg1 keys:(id)arg2;
- (void)collectSearchEmoticonModelsFromObject:(id)arg1 result:(id)arg2;
- (id)fallbackSearchEmoticonModelsFromJsonDict:(id)arg1 dataDict:(id)arg2 searchTab:(unsigned long long)arg3;
- (id)preloadNextPageDictionaryFromJsonDict:(id)arg1;
- (void)scrollSearchResultToBottomAnimated:(BOOL)arg1;
- (unsigned long long)arrayCountForObject:(id)arg1;
- (void)prefetchDownloadForEmoticonWrap:(id)arg1;
- (void)prefetchDownloadForEmoticonWraps:(id)arg1;
- (id)emoticonWrapForSearchModel:(id)arg1;
- (void)debugLogMixSearchModels:(id)arg1 jsonDict:(id)arg2 dataDict:(id)arg3 loadMore:(BOOL)arg4 currentPage:(unsigned int)arg5;
- (void)handleSearchResponseJson:(id)arg1 keyword:(id)arg2 loadMore:(BOOL)arg3 currentPage:(unsigned int)arg4 searchTab:(unsigned long long)arg5;
- (double)panelTop;
- (double)xiaoweiEmoticonItemLength;
- (double)xiaoweiEmoticonHorizontalInset;
- (unsigned long long)maxRecommendItemCount;
- (void)layoutXiaoweiSubviews;
- (void)updateLoadingViewPosition;
- (void)loadRecommendData;
- (void)loadRecommendDataWithCtxs:(id)arg1;
- (void)onTapCloseButton;
- (void)onTapMoreButton;
- (BOOL)shouldUseExpandedMoreButtonLongPressBackground;
- (void)updateMoreButtonLongPressVoicePanelMask;
- (void)layoutMoreButtonLongPressOverlaySubviews;
- (void)updateMoreButtonLongPressCancelPrompt:(BOOL)arg1;
- (void)ensureMoreButtonLongPressOverlayInWindow;
- (void)showMoreButtonLongPressOverlay;
- (void)hideMoreButtonLongPressOverlayAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)cancelMoreButtonVoiceInput;
- (void)beginMoreButtonVoiceInput;
- (void)finishMoreButtonVoiceInput;
- (void)onMoreButtonLongPress:(id)arg1;
- (void)onVoiceInputPreparing;
- (void)onVoiceInputStart;
- (void)onVoiceInputRecognizeWithText:(id)arg1;
- (void)onVoiceInputStop;
- (void)onVocieTransEnd:(id)arg1;
- (void)onUpdatePeakPower:(float)arg1;
- (void)onVoiceInputCancelByMaxTime:(id)arg1;
- (void)onVoiceInputError:(long long)arg1 errMsg:(id)arg2;
- (CGAffineTransform)settingPageBackgroundTransform;
- (void)animateSettingPageBackgroundToShrunk:(BOOL)arg1;
- (id)xiaoweiSettingData;
- (void)onTapSettingsButton;
- (void)onTapFeaturedButton;
- (void)onTapRecentUseExpandButton;
- (void)onTapRecentUseTrashButton;
- (void)onTapRecentSearchTrashButton;
- (void)animateOutForAskXiaoWeiLanding;
- (id)emojiAskUrlForEmojiInfo:(id)arg1;
- (id)emojiAskMsgWithChatId:(id)arg1;
- (id)collectRecommendEmojiCtx;
- (void)addEmojiItemFromWrap:(id)arg1 toEmojiAskMsg:(id)arg2 addedMd5s:(id)arg3;
- (void)showEmojiAskLanding;
- (void)showEmojiAskLandingWithText:(id)arg1;
- (void)onTapAIGeneratedMoreButton;
- (void)onTapAskButton;
- (void)onTapAllEmoticonTab;
- (void)onTapMixEmoticonTab;
- (void)switchSearchTab:(unsigned long long)arg1;
- (BOOL)isAISearchTabSelected;
- (id)currentEmoticonList;
- (id)emoticonListForIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldUseFixedInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)tryTriggerLoadMoreIfNeeded;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)onDownloadTaskFinished:(id)arg1 successful:(BOOL)arg2 fromLocal:(BOOL)arg3;
- (void)onDownloadthumbFinished:(id)arg1 filePath:(id)arg2;
- (id)chatId;
- (void)setChatId:(id)arg1;
- (id /* block */)getRecommendCtxsBlock;
- (void)setGetRecommendCtxsBlock:(id /* block */)arg1;
- (id /* block */)sendEmoticonBlock;
- (void)setSendEmoticonBlock:(id /* block */)arg1;
- (id /* block */)openEmotionStoreBlock;
- (void)setOpenEmotionStoreBlock:(id /* block */)arg1;
- (id /* block */)willDismissBlock;
- (void)setWillDismissBlock:(id /* block */)arg1;
- (id)presentationDimmingView;
- (void)setPresentationDimmingView:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)createEmoticonButton;
- (void)setCreateEmoticonButton:(id)arg1;
- (id)recommendTitleLabel;
- (void)setRecommendTitleLabel:(id)arg1;
- (id)searchTabContainerView;
- (void)setSearchTabContainerView:(id)arg1;
- (id)allEmoticonTabButton;
- (void)setAllEmoticonTabButton:(id)arg1;
- (id)mixEmoticonTabButton;
- (void)setMixEmoticonTabButton:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (id)searchTabBottomLineView;
- (void)setSearchTabBottomLineView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)prefetchDownloadMd5Set;
- (void)setPrefetchDownloadMd5Set:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)moreButtonLongPressOverlayView;
- (void)setMoreButtonLongPressOverlayView:(id)arg1;
- (id)moreButtonLongPressSnapshotView;
- (void)setMoreButtonLongPressSnapshotView:(id)arg1;
- (id)moreButtonLongPressBlurView;
- (void)setMoreButtonLongPressBlurView:(id)arg1;
- (id)moreButtonLongPressWhiteMaskView;
- (void)setMoreButtonLongPressWhiteMaskView:(id)arg1;
- (id)moreButtonLongPressVoicePanel;
- (void)setMoreButtonLongPressVoicePanel:(id)arg1;
- (id)moreButtonLongPressVoicePanelMaskLayer;
- (void)setMoreButtonLongPressVoicePanelMaskLayer:(id)arg1;
- (id)moreButtonLongPressOverlayHostWindow;
- (void)setMoreButtonLongPressOverlayHostWindow:(id)arg1;
- (id)moreButtonLongPressFeedbackView;
- (void)setMoreButtonLongPressFeedbackView:(id)arg1;
- (id)moreButtonLongPressIndicatorView;
- (void)setMoreButtonLongPressIndicatorView:(id)arg1;
- (id)moreButtonLongPressStatusLabel;
- (void)setMoreButtonLongPressStatusLabel:(id)arg1;
- (id)moreButtonLongPressCancelLabel;
- (void)setMoreButtonLongPressCancelLabel:(id)arg1;
- (id)moreButtonVoiceInputViewModel;
- (void)setMoreButtonVoiceInputViewModel:(id)arg1;
- (id)moreButtonVoiceRecognizedText;
- (void)setMoreButtonVoiceRecognizedText:(id)arg1;
- (BOOL)moreButtonLongPressShouldCancel;
- (void)setMoreButtonLongPressShouldCancel:(BOOL)arg1;
- (double)moreButtonLongPressBackgroundHeight;
- (void)setMoreButtonLongPressBackgroundHeight:(double)arg1;
- (double)moreButtonLongPressCapturedTop;
- (void)setMoreButtonLongPressCapturedTop:(double)arg1;
- (BOOL)moreButtonLongPressReleased;
- (void)setMoreButtonLongPressReleased:(BOOL)arg1;
- (BOOL)shouldSuppressMoreButtonTap;
- (void)setShouldSuppressMoreButtonTap:(BOOL)arg1;
- (id)bottomAskMaskView;
- (void)setBottomAskMaskView:(id)arg1;
- (id)settingsButton;
- (void)setSettingsButton:(id)arg1;
- (id)bottomAskMaskGradientLayer;
- (void)setBottomAskMaskGradientLayer:(id)arg1;
- (id)inputContainerView;
- (void)setInputContainerView:(id)arg1;
- (id)inputSearchIconView;
- (void)setInputSearchIconView:(id)arg1;
- (id)inputTextView;
- (void)setInputTextView:(id)arg1;
- (id)askButton;
- (void)setAskButton:(id)arg1;
- (id)askTransitionLogoView;
- (void)setAskTransitionLogoView:(id)arg1;
- (id /* block */)askTransitionCompletion;
- (void)setAskTransitionCompletion:(id /* block */)arg1;
- (BOOL)isAskTransitioning;
- (void)setIsAskTransitioning:(BOOL)arg1;
- (id)recommendEmoticonList;
- (void)setRecommendEmoticonList:(id)arg1;
- (id)recentUseEmoticonList;
- (void)setRecentUseEmoticonList:(id)arg1;
- (id)recentSearchKeywordList;
- (void)setRecentSearchKeywordList:(id)arg1;
- (id)searchEmoticonList;
- (void)setSearchEmoticonList:(id)arg1;
- (id)mixEmoticonList;
- (void)setMixEmoticonList:(id)arg1;
- (id)recommendCgi;
- (void)setRecommendCgi:(id)arg1;
- (id)allSearchCgiHelper;
- (void)setAllSearchCgiHelper:(id)arg1;
- (id)mixSearchCgiHelper;
- (void)setMixSearchCgiHelper:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)mixSearchId;
- (void)setMixSearchId:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (unsigned int)searchOffset;
- (void)setSearchOffset:(unsigned int)arg1;
- (unsigned int)mixSearchOffset;
- (void)setMixSearchOffset:(unsigned int)arg1;
- (BOOL)hasMoreSearchResult;
- (void)setHasMoreSearchResult:(BOOL)arg1;
- (BOOL)hasMoreMixSearchResult;
- (void)setHasMoreMixSearchResult:(BOOL)arg1;
- (BOOL)isAllSearchLoading;
- (void)setIsAllSearchLoading:(BOOL)arg1;
- (BOOL)isMixSearchLoading;
- (void)setIsMixSearchLoading:(BOOL)arg1;
- (BOOL)isAllLoadingMore;
- (void)setIsAllLoadingMore:(BOOL)arg1;
- (BOOL)isMixLoadingMore;
- (void)setIsMixLoadingMore:(BOOL)arg1;
- (BOOL)searchHasUserScrolled;
- (void)setSearchHasUserScrolled:(BOOL)arg1;
- (unsigned int)searchCurrentPage;
- (void)setSearchCurrentPage:(unsigned int)arg1;
- (unsigned int)mixSearchCurrentPage;
- (void)setMixSearchCurrentPage:(unsigned int)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (unsigned long long)selectedSearchTab;
- (void)setSelectedSearchTab:(unsigned long long)arg1;
- (double)keyboardOffset;
- (void)setKeyboardOffset:(double)arg1;
- (BOOL)shouldFocusInputOnAppear;
- (void)setShouldFocusInputOnAppear:(BOOL)arg1;
- (BOOL)recentUseSectionExpanded;
- (void)setRecentUseSectionExpanded:(BOOL)arg1;
- (id)settingVC;
- (void)setSettingVC:(id)arg1;
- (BOOL)isOpeningSettingPage;
- (void)setIsOpeningSettingPage:(BOOL)arg1;
- (BOOL)isSettingPageBackgroundShrunk;
- (void)setIsSettingPageBackgroundShrunk:(BOOL)arg1;
- (BOOL)shouldShowRecentUseSection;
- (void)setShouldShowRecentUseSection:(BOOL)arg1;
- (BOOL)shouldShowRecentSearchSection;
- (void)setShouldShowRecentSearchSection:(BOOL)arg1;
- (BOOL)shouldShowFeaturedSection;
- (void)setShouldShowFeaturedSection:(BOOL)arg1;
- (void).cxx_destruct;
@end
