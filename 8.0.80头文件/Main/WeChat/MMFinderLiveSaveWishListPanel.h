@interface MMFinderLiveSaveWishListPanel : MMLandscapeDragBarPageSheet <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardWishViewDelegate, MMLiveRewardGiftSelectionViewDelegate, MMFinderLiveGiftWallSettingViewDelegate, MMFinderLiveInteractionWishSettingPanelDelegate>
{
    BOOL _autoOpenInteractionAfterConfigReady; // +0x8
    BOOL _shouldHighlightInteractionWishOnOpen; // +0x9
    BOOL _isRewardWishEnabled; // +0xa
    BOOL _isInteractionWishEnabled; // +0xb
    BOOL _isModify; // +0xc
    BOOL _isDeleted; // +0xd
    BOOL _disableSetPerformanceName; // +0xe
    BOOL _isKeyBoardShowing; // +0xf
    unsigned int _totalPrice; // +0x10
    id /* block */ _dismissedCallBlock; // +0x18
    id /* block */ _clickHelpButtonCallBlock; // +0x20
    NSArray * _presetGiftWishesForAiAssistant; // +0x28
    InteractionWishConfig * _presetInteractionWishConfigForAiAssistant; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    UIScrollView * _contentView; // +0x40
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x48
    MMUIButton * _doneButton; // +0x50
    MMUILabel * _priceTitleLabel; // +0x58
    UIImageView * _coinIconView; // +0x60
    MMUILabel * _priceLabel; // +0x68
    MMLiveRewardGiftSelectionView * _giftSelectionView; // +0x70
    NSMutableArray * _targetGiftViews; // +0x78
    NSMutableArray * _displayGiftItemViews; // +0x80
    NSArray * _lastRewardWishList; // +0x88
    NSArray * _recommendRewardWishList; // +0x90
    MMUILabel * _recommendRewardWishLabel; // +0x98
    MMFinderLiveInteractionWishSettingView * _interactionWishSettingView; // +0xa0
    MMUILabel * _recommendWishConfigLabel; // +0xa8
    InteractionWishConfig * _interactionWishConfig; // +0xb0
    InteractionWishConfig * _recommendWishConfig; // +0xb8
    NSArray * _enableConfigInteractionTypes; // +0xc0
    NSArray * _defaultWishConfigList; // +0xc8
    MMFinderLiveGiftWallSettingView * _giftWallSettingView; // +0xd0
    double _currentKeyBoardHeight; // +0xd8
}
- (id)initWithTaskId:(id)arg1 rewardWishList:(id)arg2;
- (void)initView;
- (void)dealloc;
- (void)setupPageSheetConfig;
- (void)initTargetGiftViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)fetchInteractionWishConfig;
- (void)fetchRewardWishList;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)updateWithWishes:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)layoutPriceView;
- (void)layoutTargetGiftViews;
- (void)layoutInteractionWishSettingView;
- (void)layoutGiftWallSettingView;
- (double)contentWidth;
- (double)contentHeight;
- (void)addDisplayLiveRewardWishView:(id)arg1;
- (void)removeDisplayLiveRewardWishView:(id)arg1;
- (void)updateTotalPrice;
- (void)reloadInteractionWishConfig;
- (void)reloadRecommendRewardWishListLabel;
- (id)currentEmptyRewardWishView;
- (id)attributedStringComponentForGiftThumbnailWithId:(id)arg1;
- (void)updateDetailViewHeight;
- (void)onResignRewardCountEditting;
- (void)onDoneButtonClicked;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)applyInteractionWishSettingViewHighlight;
- (void)restoreInteractionWishSettingViewDefaultBackground;
- (void)openInteractionWishSettingPanel;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onClickGiftWallHelp;
- (void)onAddTargetRewardGift:(id)arg1;
- (void)onUpdateTargetRewardCount:(id)arg1;
- (void)onClearCurrentLiveRewardWish:(id)arg1;
- (void)onSelectGiftWithGiftItem:(id)arg1;
- (void)onRewardGiftSelectionViewWillClose:(BOOL)arg1;
- (void)onFinderLiveInteractionWishConfigUpdated;
- (id)liveTask;
- (void)reportInteractionEntrance:(BOOL)arg1;
- (id /* block */)dismissedCallBlock;
- (void)setDismissedCallBlock:(id /* block */)arg1;
- (id /* block */)clickHelpButtonCallBlock;
- (void)setClickHelpButtonCallBlock:(id /* block */)arg1;
- (BOOL)autoOpenInteractionAfterConfigReady;
- (void)setAutoOpenInteractionAfterConfigReady:(BOOL)arg1;
- (id)presetGiftWishesForAiAssistant;
- (void)setPresetGiftWishesForAiAssistant:(id)arg1;
- (id)presetInteractionWishConfigForAiAssistant;
- (void)setPresetInteractionWishConfigForAiAssistant:(id)arg1;
- (BOOL)shouldHighlightInteractionWishOnOpen;
- (void)setShouldHighlightInteractionWishOnOpen:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isRewardWishEnabled;
- (void)setIsRewardWishEnabled:(BOOL)arg1;
- (BOOL)isInteractionWishEnabled;
- (void)setIsInteractionWishEnabled:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)priceTitleLabel;
- (void)setPriceTitleLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)giftSelectionView;
- (void)setGiftSelectionView:(id)arg1;
- (id)targetGiftViews;
- (void)setTargetGiftViews:(id)arg1;
- (id)displayGiftItemViews;
- (void)setDisplayGiftItemViews:(id)arg1;
- (unsigned int)totalPrice;
- (void)setTotalPrice:(unsigned int)arg1;
- (BOOL)isModify;
- (void)setIsModify:(BOOL)arg1;
- (BOOL)isDeleted;
- (void)setIsDeleted:(BOOL)arg1;
- (id)lastRewardWishList;
- (void)setLastRewardWishList:(id)arg1;
- (id)recommendRewardWishList;
- (void)setRecommendRewardWishList:(id)arg1;
- (id)recommendRewardWishLabel;
- (void)setRecommendRewardWishLabel:(id)arg1;
- (id)interactionWishSettingView;
- (void)setInteractionWishSettingView:(id)arg1;
- (id)recommendWishConfigLabel;
- (void)setRecommendWishConfigLabel:(id)arg1;
- (id)interactionWishConfig;
- (void)setInteractionWishConfig:(id)arg1;
- (id)recommendWishConfig;
- (void)setRecommendWishConfig:(id)arg1;
- (id)enableConfigInteractionTypes;
- (void)setEnableConfigInteractionTypes:(id)arg1;
- (id)defaultWishConfigList;
- (void)setDefaultWishConfigList:(id)arg1;
- (BOOL)disableSetPerformanceName;
- (void)setDisableSetPerformanceName:(BOOL)arg1;
- (id)giftWallSettingView;
- (void)setGiftWallSettingView:(id)arg1;
- (BOOL)isKeyBoardShowing;
- (void)setIsKeyBoardShowing:(BOOL)arg1;
- (double)currentKeyBoardHeight;
- (void)setCurrentKeyBoardHeight:(double)arg1;
- (void).cxx_destruct;
@end
