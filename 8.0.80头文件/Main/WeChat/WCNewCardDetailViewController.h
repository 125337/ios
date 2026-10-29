@interface WCNewCardDetailViewController : MMUIViewController <WCNewCardDetailLogicDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, WCNewShareCardConsumedViewDelegate, SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, WCShareCardCodeViewDelegate, WCCardGeneralCardContentDelegate, WCCardMemberCardContentDelegate, WCCardInvoiceCardContentViewDelegate, AccessCardLogicDelegate, WCCardNewTicketContentDelegate>
{
    AccessCardLogicController * _accessCardLogic; // +0x70
    BOOL _isFromScanQRCode; // +0x78
    BOOL _isPresent; // +0x79
    BOOL _hiddenRightBar; // +0x7a
    BOOL _hiddenUserHeaderView; // +0x7b
    BOOL _hiddenDeleteItem; // +0x7c
    BOOL _isFromShareCardList; // +0x7d
    BOOL _isFromGiftCard; // +0x7e
    BOOL _isAddCard; // +0x7f
    BOOL _bIsFromSDKAuth; // +0x80
    BOOL _bHideAcceptBtn; // +0x81
    BOOL _bIsGetConsumedReward; // +0x82
    BOOL _bHasTryShowConsumedView; // +0x83
    BOOL _bIsStartResumeFromShareCardCodeView; // +0x84
    BOOL _bIsEndResumeFromShareCardCodeView; // +0x85
    BOOL _bIsOpenOperationView; // +0x86
    BOOL _bIsOpenOffinePayView; // +0x87
    BOOL _bIsSelectTagGroup; // +0x88
    id <WCNewCardDetailViewControllerDelegate> _delegate; // +0x90
    NSIndexPath * _lastIndex; // +0x98
    unsigned long long _appBrandModeType; // +0xa0
    WCNewCardDetailLogicController * _logicController; // +0xa8
    NSString * _shareToUsername; // +0xb0
    ShareMessageConfirmLogicHelper * _shareToFriendHelper; // +0xb8
    WCActionSheet * _actionSheet; // +0xc0
    WCCardBaseCardDetailContentView * _curContentView; // +0xc8
    UIScrollView * _emptyContentView; // +0xd0
    WeToast * _toastVC; // +0xd8
    WCShareCardCodeView * _cardCodeView; // +0xe0
    WCNewShareCardConsumedView * _consumedView; // +0xe8
    NSMutableArray * _arrGroupUser; // +0xf0
    NSMutableArray * _arrBlackUser; // +0xf8
    NSMutableArray * _arrGroupUserLabelID; // +0x100
    NSMutableArray * _arrBlackUserLabelID; // +0x108
    long long _currentTipViewIndex; // +0x110
}
- (void)dealloc;
- (BOOL)shouldUseDynamicColor;
- (long long)overrideUserInterfaceStyle;
- (id)initWithCardEnterInfo:(id)arg1;
- (id)initWithShareCard:(id)arg1 withShareCardListIfExist:(id)arg2 andScene:(unsigned long long)arg3;
- (void)viewDidLoad;
- (void)tryUpdateAccessCard;
- (void)onUserAuthorizedLocationWithCardID:(id)arg1;
- (void)showErrMsg;
- (id)toastVC;
- (void)initEmptyView;
- (void)initContentView;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onCardDetailDidBeCleared;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (long long)preferredStatusBarStyle;
- (void)setForBatchViewCard;
- (void)updateCardData:(id)arg1;
- (void)reloadViewControllerBackgroundColor;
- (void)updateRightBarButtonStatus;
- (void)showEmptyView;
- (void)showTableView;
- (void)onCardDetailBackButtonClicked;
- (void)onReturn;
- (void)showActionList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showReportView;
- (void)shareToFriend;
- (void)shareToSNS;
- (void)shareCardAction;
- (void)deleteCard;
- (void)showBrandProfile;
- (void)jumpToContactInfoViewController:(id)arg1;
- (void)actionFromSvrActionSheet:(id)arg1;
- (void)onShareCardDataNotPrepare;
- (void)onViewControllerNeedReload;
- (void)onViewControllerAllContentNeedReload;
- (void)onGetCardDataFromSvrErr:(int)arg1;
- (void)onAcceptCardRet:(BOOL)arg1 withLoadingStr:(id)arg2 withAcceptInfoJsonStr:(id)arg3 isShareCard:(BOOL)arg4;
- (void)onShowTipsAndReloadData;
- (void)onGiftCardRet:(int)arg1 cardData:(id)arg2;
- (void)onCardHasBeenUsed:(id)arg1;
- (void)onShareCardSuccessWithCardData:(id)arg1;
- (void)onShareCardReqRetWithCardInfo:(id)arg1;
- (BOOL)shouldRefreshWithShareCard;
- (void)onShareCardReqRetSystemErr:(BOOL)arg1;
- (void)onCurShareCardUpdate:(id)arg1;
- (void)onShareCardConsumedWithShareCardTpInfoList:(id)arg1 shareCardId:(id)arg2 consumedBoxId:(id)arg3 subscribeAppUserName:(id)arg4 subscribeWording:(id)arg5 retMsg:(id)arg6;
- (void)onMarkShareCardError;
- (void)onMarkShareCardWithRet:(BOOL)arg1 isMark:(BOOL)arg2 andMarkUsr:(id)arg3 markCardId:(id)arg4 expireTime:(float)arg5 qrCodeWording:(id)arg6;
- (void)stepInOfflinePayWithExpireTime:(double)arg1;
- (void)onShareCardDelete:(BOOL)arg1 withShareCard:(id)arg2;
- (BOOL)canShowUseBtnInHeader;
- (BOOL)shouldHideAcceptBtn;
- (int)getCardStatus;
- (BOOL)isNeedToDisplayDeeplinkJunmpTips;
- (BOOL)shouldShowGiftFromUserHeaderView;
- (id)getGiftCardShareFromUserName;
- (double)getViewControllerContentViewHeight;
- (BOOL)bIsCardFromOutAppScene;
- (void)openUrl:(id)arg1;
- (void)openUrl:(id)arg1 returnBlock:(id /* block */)arg2;
- (void)openTinyAppWithUserName:(id)arg1 path:(id)arg2;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (void)openSecondaryField:(id)arg1;
- (void)openOperationView;
- (void)doOpenOperationView:(double)arg1;
- (void)doOperation:(double)arg1;
- (void)openCardDetailView;
- (void)openNearbyShopInfo;
- (void)openUsedStoresView;
- (void)openBrandProfileView;
- (void)openGiftCardInfoViewConroller;
- (void)openCellList0Item:(id)arg1;
- (void)onShareCardImageClick:(id)arg1;
- (void)onJumpToFinderBtnClick:(id)arg1;
- (BOOL)jumpToVideoFinder:(id)arg1;
- (BOOL)jumpToVideoFinderMiniProgramH5:(id)arg1;
- (void)showTipViewFor3rdDomain;
- (void)giftCardToFriend;
- (void)recommendToFriend;
- (void)onCardHeaderViewApplyBtnClick;
- (void)onCardHeaderViewOperateBtnClick;
- (void)onAcceptCardBtnClick:(BOOL)arg1;
- (void)onShareCardBtnClick;
- (id)getShareCardShareUserName;
- (unsigned long long)getShareCardShareUserCount;
- (void)onClickWhoCanSeeBtn;
- (void)onClickNearbyPhoneBtn;
- (id)getUsedStoreList;
- (void)onClickMemberCardAnnounce:(id)arg1;
- (id)getDynamicCode;
- (id)getDynamicCodeGenerator;
- (id)getOfflineCode;
- (unsigned int)getOfflineCodeStatus;
- (void)onReasonButtonClick;
- (void)refreshCode;
- (void)hidePresentNavigation:(BOOL)arg1;
- (void)onPayButtonDidClick;
- (void)refreshIfOfflineCodeScheme;
- (void)viewDidLayoutSubviews;
- (BOOL)hasBrandColor;
- (id)getBrandColor;
- (void)reloadViewController;
- (void)reloadContentView;
- (BOOL)hasShowMemberCardTip;
- (void)setHasShowMemberCardTip;
- (BOOL)hasEnterCardDetailBefore;
- (void)setHasEnterCardDetailBefore;
- (void)showAdd2CardPkgTip;
- (id)getContollerTitle;
- (BOOL)hasShowShareCardTipsBefore;
- (void)setHasShowShareCardTipsBefore;
- (void)setHasEnterShareCardListBefore;
- (void)onShowShareCardTips;
- (void)showFirstUseShareCardTip;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSendMessageOK:(id)arg1;
- (void)showCodeView;
- (void)onCloseCodeView;
- (void)onClickNotifyBtn:(BOOL)arg1;
- (void)onShareCardAfterConsumed:(BOOL)arg1;
- (void)payOrQrCodeButtonDidClick;
- (void)phoneCallAlertViewConfirmClick;
- (void)deleteCardAlertViewConfirmClick;
- (id)processCurrentScreenShot;
- (void)onGetOfflineCodeError;
- (void)onCloseLargeView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastIndex;
- (void)setLastIndex:(id)arg1;
- (BOOL)isFromScanQRCode;
- (void)setIsFromScanQRCode:(BOOL)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (BOOL)hiddenRightBar;
- (void)setHiddenRightBar:(BOOL)arg1;
- (BOOL)hiddenUserHeaderView;
- (void)setHiddenUserHeaderView:(BOOL)arg1;
- (BOOL)hiddenDeleteItem;
- (void)setHiddenDeleteItem:(BOOL)arg1;
- (BOOL)isFromShareCardList;
- (void)setIsFromShareCardList:(BOOL)arg1;
- (BOOL)isFromGiftCard;
- (void)setIsFromGiftCard:(BOOL)arg1;
- (BOOL)isAddCard;
- (void)setIsAddCard:(BOOL)arg1;
- (unsigned long long)appBrandModeType;
- (void)setAppBrandModeType:(unsigned long long)arg1;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (BOOL)bIsFromSDKAuth;
- (void)setBIsFromSDKAuth:(BOOL)arg1;
- (BOOL)bHideAcceptBtn;
- (void)setBHideAcceptBtn:(BOOL)arg1;
- (BOOL)bIsGetConsumedReward;
- (void)setBIsGetConsumedReward:(BOOL)arg1;
- (id)shareToUsername;
- (void)setShareToUsername:(id)arg1;
- (id)shareToFriendHelper;
- (void)setShareToFriendHelper:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)curContentView;
- (void)setCurContentView:(id)arg1;
- (id)emptyContentView;
- (void)setEmptyContentView:(id)arg1;
- (void)setToastVC:(id)arg1;
- (id)cardCodeView;
- (void)setCardCodeView:(id)arg1;
- (id)consumedView;
- (void)setConsumedView:(id)arg1;
- (BOOL)bHasTryShowConsumedView;
- (void)setBHasTryShowConsumedView:(BOOL)arg1;
- (BOOL)bIsStartResumeFromShareCardCodeView;
- (void)setBIsStartResumeFromShareCardCodeView:(BOOL)arg1;
- (BOOL)bIsEndResumeFromShareCardCodeView;
- (void)setBIsEndResumeFromShareCardCodeView:(BOOL)arg1;
- (BOOL)bIsOpenOperationView;
- (void)setBIsOpenOperationView:(BOOL)arg1;
- (BOOL)bIsOpenOffinePayView;
- (void)setBIsOpenOffinePayView:(BOOL)arg1;
- (BOOL)bIsSelectTagGroup;
- (void)setBIsSelectTagGroup:(BOOL)arg1;
- (id)arrGroupUser;
- (void)setArrGroupUser:(id)arg1;
- (id)arrBlackUser;
- (void)setArrBlackUser:(id)arg1;
- (id)arrGroupUserLabelID;
- (void)setArrGroupUserLabelID:(id)arg1;
- (id)arrBlackUserLabelID;
- (void)setArrBlackUserLabelID:(id)arg1;
- (long long)currentTipViewIndex;
- (void)setCurrentTipViewIndex:(long long)arg1;
- (void).cxx_destruct;
@end
