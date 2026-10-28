@interface MMFinderLiveRewardGiftPacketSettingView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, MMFinderLiveRewardGiftPacketSettingViewCellDelegate, WCCoinBuyCoinLogicDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _targetRank; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _subtitleLabel; // +0x18
    MMUILabel * _totalPriceHeadingLabel; // +0x20
    id <MMFinderLiveRewardGiftPacketSettingViewDelegate> _operationDelegate; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    unsigned long long _scene; // +0x38
    UIView * _contentView; // +0x40
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x48
    MMUIButton * _doneButton; // +0x50
    NSArray * _viewModelList; // +0x58
    UIView * _headingView; // +0x60
    MMUILabel * _totalPriceLabel; // +0x68
    UIImageView * _coinIconView; // +0x70
    MMLiveWeCoinLabel * _balanceLabel; // +0x78
    UIImageView * _balanceArrowImageView; // +0x80
    MMTableView * _rewardGiftTableView; // +0x88
    NSIndexPath * _currentActiveIndexPath; // +0x90
    MMFinderLiveRewardLevelConfigs * _levelConfig; // +0x98
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned long long)arg2 giftPacketViewModel:(id)arg3 levelConfig:(id)arg4;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutTotalPriceLabels;
- (void)layoutBalanceLabel;
- (void)layoutSubviews;
- (void)pageSheetWillDisappear;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)reloadAndRefreshData;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)arg1;
- (void)chargeCoinWithRechargeScene:(unsigned int)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)onMMFinderLiveRewardGiftPacketSettingViewCellDidChangedSelectionStatus;
- (BOOL)onMMFinderLiveRewardGiftPacketSettingViewCellCheckExceedMaxSelectedItemCount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)closeAction;
- (void)onDoneButtonClicked:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)onBalanceLabelDidTaped:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)totalPriceHeadingLabel;
- (void)setTotalPriceHeadingLabel:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)viewModelList;
- (void)setViewModelList:(id)arg1;
- (id)headingView;
- (void)setHeadingView:(id)arg1;
- (id)totalPriceLabel;
- (void)setTotalPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg1;
- (id)balanceArrowImageView;
- (void)setBalanceArrowImageView:(id)arg1;
- (id)rewardGiftTableView;
- (void)setRewardGiftTableView:(id)arg1;
- (id)currentActiveIndexPath;
- (void)setCurrentActiveIndexPath:(id)arg1;
- (unsigned int)targetRank;
- (void)setTargetRank:(unsigned int)arg1;
- (id)levelConfig;
- (void)setLevelConfig:(id)arg1;
- (void).cxx_destruct;
@end
