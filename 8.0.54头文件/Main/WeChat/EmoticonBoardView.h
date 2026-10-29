@interface EmoticonBoardView : MMUIView <IMMLanguageMgrExt, MMKernelExt, IEmoticonPackageMgrExt, EmoticonRecommendMgrExt, IEmoticonMgrExt, EmoticonBackUpMgrExt, EmoticonBackupOperateMgrExt, EmoticonBoardDynamicTabBarDelegate, EmoticonTabRecommendMgrExt, MMUIViewControllerDelegate, EmoticonBoardRecommendViewDelegate, EmoticonBoardCameraEmoticonEntryViewDelegate, EmoticonBoardCrossCollectionControllerDelegate, EmoticonCustomAddLogicControllerDelegate, EmoticonPreviewWindowViewControllerDelegate, MMLimitedModeExt, MMConfigMgrExt, IMMFontMgrExt, EmoticonBoardViewFactoryHelper>
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
    BOOL _lastSessionForbidGameEmoticon; // +0x6f
    BOOL _isFirstReload; // +0x70
    BOOL _isFirstLayout; // +0x71
    BOOL _isInChat; // +0x72
    BOOL _isExpanding; // +0x73
    BOOL _lastExpandedStates; // +0x74
    BOOL _shouldTreatFrameUpdateTenderly; // +0x75
    id <EmoticonBoardViewDelegate> _m_delegate; // +0x78
    unsigned long long _emojiUseScene; // +0x80
    unsigned long long _viewType; // +0x88
    EmoticonBoardViewConfig * _viewConfig; // +0x90
    NSString * _finishButtonTitle; // +0x98
    unsigned long long _style; // +0xa0
    UIColor * _customBackgroundColor; // +0xa8
    unsigned long long _recentPulledByCameraEmoticonLabelTime; // +0xb0
    NSString * _externInfo; // +0xb8
    UIImageView * _ipMergeAnimationMaskView; // +0xc0
    CADisplayLink * _expandDisplayLink; // +0xc8
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
- (void)RegisterDelegate:(id)arg1;
- (void)UnRegisterDelegate;
- (void)setHideRightBottomBtns:(BOOL)arg1;
- (double)preferHeight;
- (void)setHasFoldButton:(BOOL)arg1;
- (void)setHasCorner:(BOOL)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setViewType:(unsigned long long)arg1;
- (BOOL)isSingleTab;
- (void)setFinishButtonTitle:(id)arg1;
- (void)SetCanSend:(BOOL)arg1;
- (void)resetEmotionBoardShowTimeAndClickIndex;
- (void)checkCustomEmoticonExposeReport;
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
- (BOOL)selectTabOfPid:(id)arg1 forceFirstPage:(BOOL)arg2 animated:(BOOL)arg3;
- (void)layoutSubviews;
- (BOOL)shouldHideTabbar;
- (void)reloadUI;
- (void)loadAllDataAndView;
- (id)GetCurrentViewController;
- (id)customPackageId;
- (id)cameraPackageId;
- (long long)emotionRecommandMaxCountConfig;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (void)OnEmoticonPackIPSetKeyChanged:(id)arg1;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(BOOL)arg1;
- (void)onLanguageChange;
- (void)onPreQuit;
- (void)OnEmoticonTabRecommendChanged;
- (void)onMMDynamicConfigUpdated;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onUploadEmoticonQueueChanged;
- (id)getViewController;
- (void)onEmoticonBoardDynamicTabBarTabBarClickItem:(id)arg1 atIndex:(long long)arg2;
- (void)onEmoticonBoardDynamicTabBarClickStorePlusItem;
- (void)onEmoticonBoardDynamicTabBarClickSettingItem;
- (void)onEmoticonBoardDynamicTabBarClickSearchItem;
- (void)onEmoticonBoardDynamicTabBarClickFloatingFoldButton;
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
- (void)showEmoticonPreviewForWrap:(id)arg1 description:(id)arg2 pageWrapPid:(id)arg3 cellIndex:(unsigned long long)arg4 frame:(CGRect)arg5;
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)onTrySyncAnotherPartCustomEmoticon;
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
- (void)runAnimationForTargetHeight:(double)arg1 isHeightChangeTriggled:(BOOL)arg2;
- (void)expandAlongSideTick;
- (void)resetExpandStatus;
- (BOOL)isExpandEnabled;
- (void)onPageNeedResetExpand;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)emojiUseScene;
- (void)setEmojiUseScene:(unsigned long long)arg1;
- (BOOL)lazyReload;
- (void)setLazyReload:(BOOL)arg1;
- (unsigned long long)viewType;
- (id)viewConfig;
- (void)setViewConfig:(id)arg1;
- (id)finishButtonTitle;
- (BOOL)hideRightBottomBtns;
- (BOOL)needReloadBeforeReuse;
- (void)setNeedReloadBeforeReuse:(BOOL)arg1;
- (unsigned long long)style;
- (BOOL)hasCorner;
- (BOOL)hasFoldButton;
- (id)customBackgroundColor;
- (BOOL)allowExpand;
- (void)setAllowExpand:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

