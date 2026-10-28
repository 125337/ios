@interface MMFinderLiveSaveWishListPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardWishViewDelegate, MMLiveRewardGiftSelectionViewDelegate, MMFinderLiveRewardWishInputViewDelegate, MMFinderLiveGiftWallSettingViewDelegate>
{
    BOOL _isModify; // +0x8
    BOOL _isDeleted; // +0x9
    unsigned int _totalPrice; // +0xc
    id /* block */ _dismissedCallBlock; // +0x10
    id /* block */ _clickHelpButtonCallBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIScrollView * _contentView; // +0x28
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUIButton * _doneButton; // +0x40
    MMUILabel * _priceTitleLabel; // +0x48
    UIImageView * _coinIconView; // +0x50
    MMUILabel * _priceLabel; // +0x58
    MMFinderLiveRewardWishInputView * _inputView; // +0x60
    MMLiveRewardGiftSelectionView * _giftSelectionView; // +0x68
    NSMutableArray * _targetGiftViews; // +0x70
    NSMutableArray * _displayGiftItemViews; // +0x78
    NSArray * _lastRewardWishList; // +0x80
    MMFinderLiveGiftWallSettingView * _giftWallSettingView; // +0x88
}
- (id)initWithTaskId:(id)arg1 rewardWishList:(id)arg2;
- (void)initView;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initTargetGiftViews;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)updateWithWishes:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)layoutPriceView;
- (void)layoutTargetGiftViews;
- (double)contentWidth;
- (double)contentHeight;
- (void)addDisplayLiveRewardWishView:(id)arg1;
- (void)removeDisplayLiveRewardWishView:(id)arg1;
- (void)updateTotalPrice;
- (void)onDoneButtonClicked;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onClickGiftWallHelp;
- (void)onAddTargetRewardGift:(id)arg1;
- (void)onUpdateTargetRewardCount:(id)arg1;
- (void)onClearCurrentLiveRewardWish:(id)arg1;
- (void)onInputTargetCount:(unsigned int)arg1;
- (void)onSelectGiftWithGiftItem:(id)arg1;
- (void)onRewardGiftSelectionViewWillClose:(BOOL)arg1;
- (id)liveTask;
- (id /* block */)dismissedCallBlock;
- (void)setDismissedCallBlock:(id /* block */)arg1;
- (id /* block */)clickHelpButtonCallBlock;
- (void)setClickHelpButtonCallBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)priceTitleLabel;
- (void)setPriceTitleLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
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
- (id)giftWallSettingView;
- (void)setGiftWallSettingView:(id)arg1;
- (void).cxx_destruct;
@end
