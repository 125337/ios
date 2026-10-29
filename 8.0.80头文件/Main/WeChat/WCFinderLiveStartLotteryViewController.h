@interface WCFinderLiveStartLotteryViewController : MMCPUIViewController <WCActionSheetDelegate, WCFinderLiveStartLotteryItemViewDelegate, MMFinderLiveLotteryMethodOperationViewDelegate, WCFinderUserPrepareCgiDelegate, MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate, ILinkEventExt, UIScrollViewDelegate, WCCoinConsumeLogicDelegate, WCFinderLiveStartLotteryGoodViewDelegate, MMLiveLotteryTypeSettingSheetViewDelegate, MMLiveLotteryGiftDistributeSheetViewDelegate, MMFinderLiveRewardGiftPacketSettingViewDelegate, FLTLiveHybridSelectNoticeNativeApiFlutterPluginDelegate, MMFinderLiveCreateNoticeViewControllerDelegate>
{
    BOOL _joinTeamDisable; // +0x70
    BOOL _showLottteryDurationTipLable; // +0x71
    BOOL _showLottteryWinnerCtnTipLable; // +0x72
    BOOL _sOpening; // +0x73
    BOOL _enterBackground; // +0x74
    BOOL _isKeyBoardShow; // +0x75
    BOOL _hasCreateLotteryPanel; // +0x76
    BOOL _isAgreementChecked; // +0x77
    BOOL _isAiAssistantScene; // +0x78
    BOOL _hasPreparedData; // +0x79
    unsigned int _curJoinTeamMode; // +0x7c
    int _attendType; // +0x80
    int _selectLotteryType; // +0x84
    id <WCFinderLiveStartLotteryViewControllerDelegate> _delegate; // +0x88
    MMFinderLiveTask * _liveTask; // +0x90
    MMUILabel * _lottteryDurationTipLable; // +0x98
    MMLiveWeCoinLabel * _giftsPrizeLabel; // +0xa0
    UIButton * _createLotteryButton; // +0xa8
    MMFinderLiveLotteryCommentInputViewController * _commentInputViewController; // +0xb0
    double _keyboardHeight; // +0xb8
    MMFinderLiveLotteryMethodOperationView * _lottertMethodOperationView; // +0xc0
    NSMutableArray * _lotteryDataArray; // +0xc8
    WCFinderLiveStartLotteryItemView * _lotteryMethodSelectItemView; // +0xd0
    WCFinderLiveStartLotteryItemView * _lotteryMethodSelectContentItemView; // +0xd8
    WCFinderLiveStartLotteryItemView * _lotteryDurationInputItemView; // +0xe0
    WCFinderLiveStartLotteryItemView * _lotteryWinnerCntInputItemView; // +0xe8
    WCFinderLiveStartLotteryItemView * _lotteryDescriptionInputItemView; // +0xf0
    WCFinderLiveStartLotteryItemView * _lotteryGetPrizeMethodInputItemView; // +0xf8
    WCFinderLiveStartLotteryItemView * _lotteryGetPrizeMethodContentItemView; // +0x100
    WCFinderLiveStartLotteryItemView * _lotteryParticipateExcludeSwitchItemView; // +0x108
    WCFinderLiveStartLotteryItemView * _lotteryGiftDistributeItemView; // +0x110
    WCFinderLiveStartLotteryItemView * _lotteryGiftSelectionItemView; // +0x118
    WCFinderLiveStartLotteryItemView * _lotteryGiftPrizeItemView; // +0x120
    MMLiveStartLotteryNoticeOptionView * _lotteryMethodLiveNoticeView; // +0x128
    MMLiveWeCoinLabel * _lotteryGiftPrizeLabel; // +0x130
    MMLiveLotteryGiftPacketsView * _lotteryGiftPacketsView; // +0x138
    UIView * _contentView; // +0x140
    MMFinderLiveLotteryGetPrizeMethodOperationView * _getPrizeMethodOperationView; // +0x148
    UIView * _checkBoxView; // +0x150
    MMUIButton * _agreementCheckbox; // +0x158
    UIButton * _agreementText; // +0x160
    UIScrollView * _contentScrollView; // +0x168
    MMUILabel * _randomDistributeIndicateLabel; // +0x170
    FinderJumpInfo_LiteApp * _selectProductsAppInfo; // +0x178
    NSString * _commentInput; // +0x180
    WCFinderLiveStartLotteryProductInfo * _productInfo; // +0x188
    WCFinderLiveStartSelectLotteryTypeButton * _selectTypeButton; // +0x190
    WCFinderLiveStartLotteryGoodView * _goodView; // +0x198
    NSMutableArray * _lotteryAttendTypeList; // +0x1a0
    MMLiveLotteryErrTipBaseView * _lotteryErrTipView; // +0x1a8
    NSMutableArray * _startSelectLotteryTypeList; // +0x1b0
    PrizeData * _prizeData; // +0x1b8
    NSArray * _giftPacketViewModels; // +0x1c0
    long long _selectedDistributeType; // +0x1c8
    NSString * _billNo; // +0x1d0
    MMFinderLiveLotteryStartLogic * _lotteryStartLogic; // +0x1d8
    NSMutableArray * _winnerCntLimitInfos; // +0x1e0
    MMFinderLiveRewardGiftPacketSettingView * _giftPacketSettingView; // +0x1e8
    MMLiveLotteryGiftDistributeSheetView * _distributeSeletionView; // +0x1f0
    FinderLiveNoticeInfo * _noticeItem; // +0x1f8
    MMFinderLiveAiAssistantToolLotteryCreateParams * _aiAssistantParams; // +0x200
    NSDictionary * _aiAssistantGiftPool; // +0x208
}
- (id)initWithLiveTask:(id)arg1 hasCreateLotteryPanel:(BOOL)arg2 joinTeamDisable:(BOOL)arg3 curJoinTeamMode:(unsigned int)arg4;
- (id)initWithLiveTaskForAiAssistant:(id)arg1 aiAssistantParams:(id)arg2 joinTeamDisable:(BOOL)arg3 curJoinTeamMode:(unsigned int)arg4;
- (void)dealloc;
- (void)addNotifications;
- (void)viewDidLoad;
- (id)getCurrentMainColor;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setupUI;
- (id)lotteryErrTipView;
- (void)updateUIWhenLotteryDuringChanged:(unsigned long long)arg1;
- (void)updateUIWhenLotteryWinnerCtnChanged:(unsigned long long)arg1;
- (unsigned int)giftPacketTotalCount;
- (id)commentInputView;
- (void)updateCreateLotteryButtonStyle;
- (void)layoutCreateLotteryButton;
- (void)layoutUI;
- (void)layoutCheckBoxView;
- (void)layoutGiftsPrizeLabel;
- (void)updateAccessbility;
- (void)updateLotteryGiftSelectionItemView;
- (void)updateLotteryGiftDistributeItemView;
- (void)updateLotteryGiftPrizeItemView;
- (void)updateGiftsPrizeLabel;
- (void)updateCreateLotteryButton;
- (void)onCheckBoxClicked;
- (void)onCheckBoxLinkClicked;
- (BOOL)shouldAgreementCheckBoxShown;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (BOOL)isLiveLotteryPolicyChecked;
- (void)newUpdateCreateLotteryButtonEnableStatus;
- (BOOL)isShowGetPrizeMethodSpecifiedContent;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)endEditing;
- (void)commentInputDidChanged:(id)arg1;
- (BOOL)isChooseGoodsSelectLotteryType;
- (BOOL)isChooseGiftsSelectLotteryType;
- (BOOL)isChooseGameTeamUpLotteryType;
- (BOOL)isOnlyShopProduct;
- (BOOL)isShowSelectTypeButton;
- (BOOL)isLotterySelectModeOpenSwitch;
- (unsigned int)giftPacketTotalWecoin;
- (unsigned int)getPriceToPay;
- (void)onStartLotteryOptionViewTapped:(id)arg1;
- (void)updateCurrentSelectLotteryType:(int)arg1;
- (id)lotteryDataArray;
- (void)onStartLotteryItemViewTextFieldChanged:(id)arg1;
- (id)lottertMethodOperationView;
- (id)getPrizeMethodOperationView;
- (void)lotteryGetPrizeMethodSelect:(id)arg1 indexPath:(id)arg2;
- (void)lotteryMethodSelect:(id)arg1 indexPath:(id)arg2;
- (BOOL)isCloseGetPrizeMethod;
- (unsigned long long)getCellTtype:(int)arg1;
- (BOOL)isFansGroupEnable;
- (BOOL)isLikeEnable;
- (void)updateUIWithUserLotterySetting;
- (id)getAttendTypeSting;
- (unsigned long long)getIndexFromSelectAttendType:(int)arg1;
- (void)updateSelectIndex:(unsigned long long)arg1;
- (int)typeFromObject:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)onMoreButtonClicked:(id)arg1;
- (void)onLotteryButtonClicked:(id)arg1;
- (void)onSaveLotteryButtonClicked:(id)arg1;
- (void)onStartLotteryGoodViewChangeGoodClicked:(id)arg1;
- (void)onStartLotteryGoodViewTextFieldChanged:(id)arg1;
- (void)onStartLotteryGoodViewAddGoodClicked:(id)arg1;
- (void)selectTypeButtonClick;
- (void)handleSelectLotteryType:(int)arg1;
- (void)onSwitchModeButtonClicked;
- (void)updateSelectedProductInfo:(id)arg1;
- (void)openSelectLotteryGiftsSheetView;
- (void)onCreateLotteryButtonClicked:(id)arg1;
- (id)buildLiveLotteryCreateInfo;
- (void)updateAnchorStatusLotterySetting;
- (void)showToastForCreateLotteryWithErrorType:(int)arg1 errorPage:(id)arg2;
- (void)showAlter:(id)arg1;
- (BOOL)isCommentEnable;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)traitCollectionDidChange:(id)arg1;
- (void)resetAllData;
- (void)onMMLiveLotteryTypeSettingSheetViewChooseLotteryType:(int)arg1;
- (void)onMMLiveLotteryGiftDistributeSheetViewChooseDistributeType:(long long)arg1;
- (void)onMMFinderLiveRewardGiftPacketSettingViewChooseGiftPacketViewModel:(id)arg1 targetRank:(unsigned int)arg2;
- (void)navigateToNoticeSelectionPage;
- (void)navigateToNoticeCreationPageWithCompletionBlock:(id /* block */)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)updateScrollViewContentOffset;
- (void)scrollToCreateLotteryButtonVisibaleIfNeed;
- (BOOL)isSubWidgetsFirstResponder;
- (id)getFirstResponder;
- (id)lotteryAttendTypeList;
- (id)startSelectLotteryTypeList;
- (void)prepareDataWithNeedGiftPool:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)applyAiAssistantParams;
- (void)handleGetLiveLotteryPrepareDataWithLotteryAttendTypeList:(id)arg1 chooseProductApp:(id)arg2 prizeData:(id)arg3 winnerCntLimitInfos:(id)arg4;
- (void)showLotteryErrTipView;
- (unsigned int)getPrizeTypeTimeLimitWithType:(int)arg1;
- (unsigned int)getPrizeTypeDefaultTimeLimitWithType:(int)arg1;
- (void)setUpStartSelectLotteryTypeList:(id)arg1;
- (void)setUpLotteryAttendTypeList:(id)arg1;
- (BOOL)isCanShowLotteryAttendType:(int)arg1;
- (id)audienceLogReporter;
- (void)onLiveNoticeSelected:(id)arg1;
- (void)onLiveNoticeCreationRequested;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (BOOL)joinTeamDisable;
- (void)setJoinTeamDisable:(BOOL)arg1;
- (BOOL)showLottteryDurationTipLable;
- (void)setShowLottteryDurationTipLable:(BOOL)arg1;
- (BOOL)showLottteryWinnerCtnTipLable;
- (void)setShowLottteryWinnerCtnTipLable:(BOOL)arg1;
- (id)lottteryDurationTipLable;
- (void)setLottteryDurationTipLable:(id)arg1;
- (id)giftsPrizeLabel;
- (void)setGiftsPrizeLabel:(id)arg1;
- (id)createLotteryButton;
- (void)setCreateLotteryButton:(id)arg1;
- (id)commentInputViewController;
- (void)setCommentInputViewController:(id)arg1;
- (BOOL)sOpening;
- (void)setSOpening:(BOOL)arg1;
- (BOOL)enterBackground;
- (void)setEnterBackground:(BOOL)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void)setLottertMethodOperationView:(id)arg1;
- (int)attendType;
- (void)setAttendType:(int)arg1;
- (void)setLotteryDataArray:(id)arg1;
- (id)lotteryMethodSelectItemView;
- (void)setLotteryMethodSelectItemView:(id)arg1;
- (id)lotteryMethodSelectContentItemView;
- (void)setLotteryMethodSelectContentItemView:(id)arg1;
- (id)lotteryDurationInputItemView;
- (void)setLotteryDurationInputItemView:(id)arg1;
- (id)lotteryWinnerCntInputItemView;
- (void)setLotteryWinnerCntInputItemView:(id)arg1;
- (id)lotteryDescriptionInputItemView;
- (void)setLotteryDescriptionInputItemView:(id)arg1;
- (id)lotteryGetPrizeMethodInputItemView;
- (void)setLotteryGetPrizeMethodInputItemView:(id)arg1;
- (id)lotteryGetPrizeMethodContentItemView;
- (void)setLotteryGetPrizeMethodContentItemView:(id)arg1;
- (id)lotteryParticipateExcludeSwitchItemView;
- (void)setLotteryParticipateExcludeSwitchItemView:(id)arg1;
- (id)lotteryGiftDistributeItemView;
- (void)setLotteryGiftDistributeItemView:(id)arg1;
- (id)lotteryGiftSelectionItemView;
- (void)setLotteryGiftSelectionItemView:(id)arg1;
- (id)lotteryGiftPrizeItemView;
- (void)setLotteryGiftPrizeItemView:(id)arg1;
- (id)lotteryMethodLiveNoticeView;
- (void)setLotteryMethodLiveNoticeView:(id)arg1;
- (id)lotteryGiftPrizeLabel;
- (void)setLotteryGiftPrizeLabel:(id)arg1;
- (id)lotteryGiftPacketsView;
- (void)setLotteryGiftPacketsView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setGetPrizeMethodOperationView:(id)arg1;
- (BOOL)hasCreateLotteryPanel;
- (void)setHasCreateLotteryPanel:(BOOL)arg1;
- (BOOL)isAgreementChecked;
- (id)checkBoxView;
- (void)setCheckBoxView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)randomDistributeIndicateLabel;
- (void)setRandomDistributeIndicateLabel:(id)arg1;
- (id)selectProductsAppInfo;
- (void)setSelectProductsAppInfo:(id)arg1;
- (id)commentInput;
- (void)setCommentInput:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)selectTypeButton;
- (void)setSelectTypeButton:(id)arg1;
- (int)selectLotteryType;
- (void)setSelectLotteryType:(int)arg1;
- (id)goodView;
- (void)setGoodView:(id)arg1;
- (void)setLotteryAttendTypeList:(id)arg1;
- (void)setLotteryErrTipView:(id)arg1;
- (void)setStartSelectLotteryTypeList:(id)arg1;
- (id)prizeData;
- (void)setPrizeData:(id)arg1;
- (id)giftPacketViewModels;
- (void)setGiftPacketViewModels:(id)arg1;
- (long long)selectedDistributeType;
- (void)setSelectedDistributeType:(long long)arg1;
- (id)billNo;
- (void)setBillNo:(id)arg1;
- (id)lotteryStartLogic;
- (void)setLotteryStartLogic:(id)arg1;
- (id)winnerCntLimitInfos;
- (void)setWinnerCntLimitInfos:(id)arg1;
- (id)giftPacketSettingView;
- (void)setGiftPacketSettingView:(id)arg1;
- (id)distributeSeletionView;
- (void)setDistributeSeletionView:(id)arg1;
- (id)noticeItem;
- (void)setNoticeItem:(id)arg1;
- (BOOL)isAiAssistantScene;
- (void)setIsAiAssistantScene:(BOOL)arg1;
- (BOOL)hasPreparedData;
- (void)setHasPreparedData:(BOOL)arg1;
- (id)aiAssistantParams;
- (void)setAiAssistantParams:(id)arg1;
- (id)aiAssistantGiftPool;
- (void)setAiAssistantGiftPool:(id)arg1;
- (void).cxx_destruct;
@end
