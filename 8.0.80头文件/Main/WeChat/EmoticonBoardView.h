@interface EmoticonBoardView : MMUIView <IMMLanguageMgrExt, MMKernelExt, IEmoticonPackageMgrExt, EmoticonRecommendMgrExt, IEmoticonMgrExt, EmoticonBackUpMgrExt, EmoticonBackupOperateMgrExt, EmoticonBoardDynamicTabBarDelegate, EmoticonTabRecommendMgrExt, MMUIViewControllerDelegate, EmoticonBoardRecommendViewDelegate, EmoticonBoardCameraEmoticonEntryViewDelegate, EmoticonBoardCrossCollectionControllerDelegate, EmoticonCustomAddLogicControllerDelegate, EmoticonPreviewWindowViewControllerDelegate, MMLimitedModeExt, MMConfigMgrExt, IMMFontMgrExt, EmoticonCustomCreateLogicDelegate, WCActionSheetDelegate, EmoticonBoardViewFactoryHelper>
{
    id <BaseEmoticonViewDelegate> m_emoticonSendDelegate; // +0x8
    UIView * m_backgroundView; // +0x10
    CAShapeLayer * m_topCornerLayer; // +0x18
    EmoticonBoardCrossCollectionController * m_pageCollectionController; // +0x20
    EmoticonBoardDynamicTabBar * m_dynamicTabBar; // +0x28
    QQEmojiPreview * m_qqEmojiPreview; // +0x30
    EmoticonPreviewWindowViewController * m_emoticonPreview; // +0x38
    unsigned long long _boardShowTime; // +0x40
    unsigned long long _boardQQEmojiClickIndex; // +0x48
    unsigned long long _boardEmoticonClickIndex; // +0x50
    unsigned long long _boardTabBarClickIndex; // +0x58
    EmoticonCustomAddLogicController * m_emoticonAddLogicController; // +0x60
    BOOL _dataLoaded; // +0x68
    BOOL _lazyReload; // +0x69
    BOOL _hideRightBottomBtns; // +0x6a
    BOOL _needReloadBeforeReuse; // +0x6b
    BOOL _hasCorner; // +0x6c
    BOOL _hasFoldButton; // +0x6d
    BOOL _allowExpand; // +0x6e
    BOOL _hideConfirmButton; // +0x6f
    BOOL _lastSessionForbidGameEmoticon; // +0x70
    BOOL _isFirstReload; // +0x71
    BOOL _isFirstLayout; // +0x72
    BOOL _isInChat; // +0x73
    BOOL _isExpanding; // +0x74
    BOOL _lastExpandedStates; // +0x75
    BOOL _shouldTreatFrameUpdateTenderly; // +0x76
    BOOL _newRefresh; // +0x77
    BOOL _newResortEntrance; // +0x78
    BOOL _showingXiaoweiSearch; // +0x79
    int _viewType; // +0x7c
    id <EmoticonBoardViewDelegate> _m_delegate; // +0x80
    unsigned long long _emojiUseScene; // +0x88
    EmoticonBoardViewConfig * _viewConfig; // +0x90
    NSString * _finishButtonTitle; // +0x98
    unsigned long long _style; // +0xa0
    UIColor * _selectedTabBackgroundColor; // +0xa8
    unsigned long long _recentPulledByCameraEmoticonLabelTime; // +0xb0
    NSString * _externInfo; // +0xb8
    UIImageView * _ipMergeAnimationMaskView; // +0xc0
    CADisplayLink * _expandDisplayLink; // +0xc8
    UIView * _customBgView; // +0xd0
    EmoticonCustomCreateLogic * _customCreateLogic; // +0xd8
}
+ (id)shareInstanceForChat;
+ (BOOL)isChatInstanceAvailable;
+ (void)destroyInstance;
+ (void)unRegisterInstanceDelegate;
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)reloadEmotionBoardView;
- (void)forceHideEmoticonPreview;
- (BOOL)isSticker;
- (BOOL)checkNeedReloadForReuse;
- (void)prepareForReuseWithoutReload;
- (void)onBoardShow;
- (void)RegisterDelegate:(id)arg1;
- (void)UnRegisterDelegate;
- (void)setHideRightBottomBtns:(BOOL)arg1;
- (double)preferHeight;
- (void)setHasFoldButton:(BOOL)arg1;
- (void)setHideConfirmButton:(BOOL)arg1;
- (void)setHasCorner:(BOOL)arg1;
- (void)insertCustomBackground:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSelectedTabBackgroundColor:(id)arg1;
- (void)setViewType:(int)arg1;
- (BOOL)isSingleTab;
- (void)setFinishButtonTitle:(id)arg1;
- (void)SetCanSend:(BOOL)arg1;
- (void)resetEmotionBoardShowTimeAndClickIndex;
- (void)notifyWillDisplay;
- (void)notifyWillHide;
- (void)checkCustomEmoticonExposeReport;
- (void)emoticonBoradViewPageExposeReport:(BOOL)arg1;
- (void)emoticonBoradViewPageHide;
- (id)emoticonAddLogicController;
- (id)getStickerPackages;
- (id)getEmoticonBoardDataWithPackageArray:(id)arg1;
- (id)getRecommandBoardDataWithPackageArray:(id)arg1;
- (void)reloadTabBarWithTabItems:(id)arg1;
- (void)reloadEmoticonViewData;
- (void)reloadTabItemsWithBoardData:(id)arg1 andRecommandData:(id)arg2;
- (void)reloadPageControllerWithBoardData:(id)arg1 recommandData:(id)arg2;
- (void)reloadEmoticonAndEmojiData;
- (void)showAddEmoticonActionSheet;
- (void)changeToPidPosition:(id)arg1;
- (void)changeTabToPid:(id)arg1;
- (id)emotionPid;
- (id)currentEmoticonTabItem;
- (BOOL)selectTabOfPid:(id)arg1 forceFirstPage:(BOOL)arg2 animated:(BOOL)arg3;
- (void)layoutSubviews;
- (BOOL)shouldHideTabbar;
- (void)reloadUI;
- (void)loadAllDataAndView;
- (id)GetCurrentViewController;
- (id)xiaoweiChatIdWithCurrentViewController:(id)arg1;
- (id)customPackageId;
- (id)cameraPackageId;
- (long long)emotionRecommandMaxCountConfig;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)OnEmoticonPackIPSetKeyChanged:(id)arg1;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(BOOL)arg1;
- (void)OnEmoticonRecommendUpdate;
- (void)onLanguageChange;
- (void)onPreQuit;
- (void)OnEmoticonTabRecommendChanged;
- (void)onMMDynamicConfigUpdated;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onUploadEmoticonQueueChanged;
- (id)getViewController;
- (void)onEmoticonBoardDynamicTabBarClickItem:(id)arg1;
- (void)onEmoticonBoardDynamicTabBarTabBarClickItem:(id)arg1 atIndex:(long long)arg2;
- (void)openEmotionStoreWithSourceViewController:(id)arg1;
- (void)onEmoticonBoardDynamicTabBarClickStorePlusItem;
- (void)onEmoticonBoardDynamicTabBarClickSettingItem;
- (void)openEmoticonSearchPage;
- (BOOL)shouldOpenXiaoweiSearchViewController;
- (void)onEmoticonBoardDynamicTabBarClickSearchItem;
- (void)onEmoticonBoardDynamicTabBarClickAIRecommendItem;
- (void)showXiaoweiSearchViewController;
- (BOOL)isShowingXiaoweiSearch;
- (void)onEmoticonBoardDynamicTabBarClickFloatingFoldButton;
- (void)onEmoticonBoardDynamicTabBarLongPressItem:(id)arg1 atIndex:(long long)arg2;
- (void)actionSheetViewLoaded:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteEmoticonPackage:(id)arg1;
- (void)manageAllEmoticonPackages:(id)arg1;
- (void)didChangeToPage:(id)arg1;
- (void)onTapQQEmojiWithCode:(id)arg1 isRecentUse:(BOOL)arg2 atIndex:(long long)arg3 maxCountPerLine:(unsigned long long)arg4;
- (BOOL)shouldShowQQEmojiSendButton;
- (void)onTapQQEmojiSendButton;
- (void)onTapQQEmojiDeleteButton;
- (void)onTapEmoticonWrap:(id)arg1 atIndex:(long long)arg2 maxCountPerLine:(unsigned long long)arg3 fromSection:(id)arg4;
- (void)onTapCameraEmoticonCreateButton;
- (void)onTapRecommendWithPid:(id)arg1;
- (void)showQQEmojiPreviewForKey:(id)arg1 atCenterPoint:(CGPoint)arg2 hideDesc:(BOOL)arg3;
- (void)hideQQEmojiPreview;
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(CGRect)arg5 disableOperation:(BOOL)arg6;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)onTapJumpToCustomManager;
- (id)getRecommendPanelEmojiCtxs:(BOOL)arg1;
- (void)openTapSearchHalfScreen;
- (unsigned long long)getBoardShowTime;
- (void)onRecommendRequest:(unsigned long long)arg1 query:(id)arg2 fromRefresh:(BOOL)arg3;
- (BOOL)showNewResortEntrance;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (id)attachmentAnchorView;
- (void)pushToDesignerProfile:(id)arg1 redotReporter:(id)arg2;
- (void)onConfirmIPMerge;
- (BOOL)needReportCustomEmoticonShow;
- (int)getDynamicSearchItemDisplayMode;
- (void)onLimitedModeChanged;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverCompleteForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverFailedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrSyncOperateForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachableForType:(unsigned int)arg1;
- (void)updateCustomOrCameraEmoticonWithType:(unsigned int)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)customCreateLogic;
- (void)onAddEmoticonFinishedWithSuccessObj:(id)arg1 sucNum:(long long)arg2 failNum:(long long)arg3;
- (id)accessibilityElements;
- (id)voiceOverNotifyViewForChat;
- (void)onFontSizeChange;
- (BOOL)isExpanded;
- (double)autoExpandThreshold;
- (double)autoExpandMaxHeight;
- (double)expectedHeight;
- (double)forceTriggleHeihgtChangeVelocity;
- (double)collectionExpectedHeight;
- (BOOL)shouldTriggleHeightChangeForVelocity:(double)arg1;
- (BOOL)onPageScrollStartWithVelocity:(double)arg1;
- (void)onPageDidScrollWithOffsetY:(double)arg1;
- (void)onPageScrollEndedWithVelocity:(double)arg1;
- (void)onPageExpandToggled;
- (void)onTapRightQuarterOfExpandBar;
- (void)runAnimationForTargetHeight:(double)arg1 isHeightChangeTriggled:(BOOL)arg2;
- (void)expandAlongSideTick;
- (void)resetExpandStatus;
- (void)doNewReport:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)reportEvent35262:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (BOOL)isFullShowInChat;
- (BOOL)isExpandEnabled;
- (BOOL)isHeaderAdjustmentScene;
- (void)onPageNeedResetExpand;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)emojiUseScene;
- (void)setEmojiUseScene:(unsigned long long)arg1;
- (BOOL)lazyReload;
- (void)setLazyReload:(BOOL)arg1;
- (int)viewType;
- (id)viewConfig;
- (void)setViewConfig:(id)arg1;
- (id)finishButtonTitle;
- (BOOL)hideRightBottomBtns;
- (BOOL)needReloadBeforeReuse;
- (void)setNeedReloadBeforeReuse:(BOOL)arg1;
- (unsigned long long)style;
- (id)selectedTabBackgroundColor;
- (BOOL)hasCorner;
- (BOOL)hasFoldButton;
- (BOOL)allowExpand;
- (void)setAllowExpand:(BOOL)arg1;
- (BOOL)hideConfirmButton;
- (BOOL)lastSessionForbidGameEmoticon;
- (void)setLastSessionForbidGameEmoticon:(BOOL)arg1;
- (unsigned long long)recentPulledByCameraEmoticonLabelTime;
- (void)setRecentPulledByCameraEmoticonLabelTime:(unsigned long long)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (id)ipMergeAnimationMaskView;
- (void)setIpMergeAnimationMaskView:(id)arg1;
- (BOOL)isFirstReload;
- (void)setIsFirstReload:(BOOL)arg1;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)arg1;
- (BOOL)isInChat;
- (void)setIsInChat:(BOOL)arg1;
- (BOOL)isExpanding;
- (void)setIsExpanding:(BOOL)arg1;
- (BOOL)lastExpandedStates;
- (void)setLastExpandedStates:(BOOL)arg1;
- (id)expandDisplayLink;
- (void)setExpandDisplayLink:(id)arg1;
- (BOOL)shouldTreatFrameUpdateTenderly;
- (void)setShouldTreatFrameUpdateTenderly:(BOOL)arg1;
- (id)customBgView;
- (void)setCustomBgView:(id)arg1;
- (BOOL)newRefresh;
- (void)setNewRefresh:(BOOL)arg1;
- (void)setCustomCreateLogic:(id)arg1;
- (BOOL)newResortEntrance;
- (void)setNewResortEntrance:(BOOL)arg1;
- (BOOL)showingXiaoweiSearch;
- (void)setShowingXiaoweiSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end
