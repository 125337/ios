@interface MMFinderLiveFansGroupPayPanel : MMPageSheetBaseView <WCCoinBuyCoinLogicDelegate, MMFinderLivePayMgrExt, MMLiveHalfScreenTitleBarViewDelegate>
{
    BOOL _wecoinBalanceUpdated; // +0x8
    BOOL _fetchWecoinBalanceFinished; // +0x9
    id /* block */ _payCallback; // +0x10
    unsigned long long _openScene; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveRewardGiftItem * _joinFansGroupGiftItem; // +0x28
    UIView * _contentView; // +0x30
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x38
    MMLiveRewardGiftCoinButton * _coinsButton; // +0x40
    MMUILabel * _payWecoinLabel; // +0x48
    MMUILabel * _payWecoinCountLabel; // +0x50
    UIImageView * _payWecoinIcon; // +0x58
    MMWebImageView * _giftPreviewView; // +0x60
    MMUILabel * _fansGroupLabel; // +0x68
    MMUIButton * _joinFansGroupButton; // +0x70
    long long _balance; // +0x78
}
- (id)initWithTaskId:(id)arg1 giftItem:(id)arg2 openScene:(unsigned long long)arg3;
- (void)initView;
- (BOOL)shouldAdaptToDarkLight;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (void)initData;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (id)finderLiveTask;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTitleBarView;
- (void)layPayWecoinInfo;
- (void)layoutFansContentView;
- (void)layoutJoinButton;
- (double)contentWidth;
- (double)contentHeight;
- (void)onJoinFanClubWithError:(id)arg1 comboId:(id)arg2 taskId:(id)arg3;
- (void)onCoinButtonClicked;
- (void)onJoinFansGroupButtonClicked;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)joinFanClub;
- (void)onNeedBuyCoinWithCurrentBalance:(long long)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinCancel:(id)arg1;
- (void)reportForPanelExpose;
- (void)reportForPayButtonClick;
- (id)audienceLogReporter;
- (id /* block */)payCallback;
- (void)setPayCallback:(id /* block */)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)joinFansGroupGiftItem;
- (void)setJoinFansGroupGiftItem:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)coinsButton;
- (void)setCoinsButton:(id)arg1;
- (id)payWecoinLabel;
- (void)setPayWecoinLabel:(id)arg1;
- (id)payWecoinCountLabel;
- (void)setPayWecoinCountLabel:(id)arg1;
- (id)payWecoinIcon;
- (void)setPayWecoinIcon:(id)arg1;
- (id)giftPreviewView;
- (void)setGiftPreviewView:(id)arg1;
- (id)fansGroupLabel;
- (void)setFansGroupLabel:(id)arg1;
- (id)joinFansGroupButton;
- (void)setJoinFansGroupButton:(id)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (BOOL)fetchWecoinBalanceFinished;
- (void)setFetchWecoinBalanceFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
