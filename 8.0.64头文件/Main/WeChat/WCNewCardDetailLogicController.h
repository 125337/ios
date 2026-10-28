@interface WCNewCardDetailLogicController : MMObject <IWCShareCardPkgExt, IWCCardPkgExt, IdleTimerUtilExt, IStrangerContactMgrExt>
{
    double _oldBrightness; // +0x8
    double _toBrightness; // +0x10
    MMTimer * brightTimer; // +0x18
    MMTimer * _updateOfflineDynamicCodeTimer; // +0x20
    MMTimer * _updateDynamicCodeTimer; // +0x28
    unsigned int _getItemInfoEventID; // +0x30
    unsigned int _acceptItemEventID; // +0x34
    unsigned int _giftItemEventID; // +0x38
    unsigned int _getShopsEventID; // +0x3c
    BOOL _bNeedGetCardDataFromSvr; // +0x40
    BOOL _bIsFromBathView; // +0x41
    BOOL _isConsumedNotify; // +0x42
    BOOL _bIsShareCardDetailMode; // +0x43
    int _cardStatus; // +0x44
    unsigned int _cardItemFromScene; // +0x48
    unsigned int _originCardItemFromScene; // +0x4c
    unsigned int _offlineCodeStatus; // +0x50
    WCCardEnterInfo * _cardEnterInfo; // +0x58
    WCCardData * _cardData; // +0x60
    WCCardDynamicCodeGenerator * _dynamicCodeGenerator; // +0x68
    WCShareCardData * _shareCardData; // +0x70
    NSMutableArray * _arrShareCardDataList; // +0x78
    NSMutableArray * _arrUsedShareCardList; // +0x80
    NSString * _nsConsumedBoxID; // +0x88
    WCCardUsedStoreInfo * _oneUsedStoreInfo; // +0x90
    NSArray * _usedStoreList; // +0x98
    WCCardDataCardInfo * _curCardInfo; // +0xa0
    WCCardDataCardTPInfo * _curCardTPInfo; // +0xa8
    unsigned long long _addCardState; // +0xb0
    id <WCNewCardDetailLogicDelegate> _delegate; // +0xb8
    NSString * _offlineCode; // +0xc0
    NSString * _dynamicCode; // +0xc8
    WCCardOfflineCodeConfigData * _codeConfig; // +0xd0
}
- (void)dealloc;
- (id)initLogicControllerWithCardEnterInfo:(id)arg1 logicDelegate:(id)arg2;
- (id)initLogicControllerWithShareCardData:(id)arg1 withShareCardListIfExist:(id)arg2 withFromScene:(unsigned long long)arg3 logicDelegate:(id)arg4;
- (void)commonInitData;
- (void)getPayCardListAndUsrInfoForPayIfNeed;
- (void)reloadViewControllerContent;
- (void)reloadAllViewControllerContent;
- (void)preConvertFormScene:(id)arg1;
- (void)fullCardDataWithEnterInfo:(id)arg1;
- (void)updateCardStatus;
- (BOOL)isCardDataExistInDB;
- (BOOL)isCardDataUpdatedOneDayAgo;
- (BOOL)isGetCardDataEachTime;
- (void)getCardDataFromSvr;
- (id)genAcceptShareInfoWithCardList:(id)arg1;
- (id)genSuccessAcceptInfo;
- (id)genFailAcceptInfo;
- (int)getMarkScene;
- (void)trySetupDynamicCodeGenerator;
- (id)getDynamicCodeGenerator;
- (id)getDynamicCode;
- (void)startDynamicCodeUpdateTimer;
- (void)updateDynamicCode;
- (void)doUnavailableCodeLogic;
- (void)onGetCardData:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onAcceptCard:(id)arg1 ErrCode:(int)arg2 ErrMsg:(id)arg3 EventID:(unsigned int)arg4;
- (void)onGiftCard:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onWCCardUpdate:(id)arg1;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2 EventID:(unsigned int)arg3;
- (void)onGetUpdateOfflineCode:(int)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onBanUpdateOfflineCode;
- (void)onShareMyCard:(id)arg1 Error:(int)arg2;
- (BOOL)isCardDataFailShareForCardTpId:(id)arg1;
- (BOOL)isShareCardDataFailShareForCardTpId:(id)arg1;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 successShareCardList:(id)arg3 andCardInfo:(id)arg4;
- (void)onUpdateShareCardList:(id)arg1;
- (void)onMarkedResponseError;
- (void)onIdleTimerUtilVoipQuit;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)initCardData;
- (void)trySetupOfflineLogic;
- (id)getOfflineCode;
- (unsigned int)getOfflineCodeStatus;
- (void)startOfflineDynamicCodeUpdateTimer;
- (void)updateOfflineDynamicCodeByTimer;
- (void)updateOfflineDynamicCode;
- (void)setForBatchViewCard;
- (void)updateCardDataFromOuter:(id)arg1;
- (void)shareMyCardWithVisibleUserList:(id)arg1 invisibleUserList:(id)arg2 visibleTagIDList:(id)arg3 invisibleTagIDList:(id)arg4;
- (void)giftMyCardTo:(id)arg1;
- (void)handleCodeViewNeedMark:(BOOL)arg1 needNotify:(BOOL)arg2 markScene:(int)arg3;
- (void)handleShareCardAfterConsuemdOK;
- (void)acceptCard:(BOOL)arg1;
- (void)updateShareCard:(id)arg1;
- (id)curCardInfo;
- (id)curCardTPInfo;
- (id)getCurCardId;
- (id)getCurCardTpId;
- (id)getCurCardDataSource;
- (BOOL)bIsShareCardMode;
- (unsigned int)getOriginCardItemFromScene;
- (BOOL)isNeedToDisplayDeeplink;
- (unsigned int)getCardItemFromScene;
- (id)getNearbyStoreInfo;
- (id)getUsedStoreList;
- (id)getNearbyShopPboneNum;
- (BOOL)bHasEnoughCardDataToShow;
- (BOOL)bNeedShowNuknowType;
- (id)curCardData;
- (id)curCardEnterInfo;
- (int)curCardStatus;
- (id)getShareUsername;
- (unsigned long long)getShareUserCount;
- (id)getShareCardData;
- (id)getShareCardDataList;
- (id)getShareCardDataByCardId:(id)arg1;
- (BOOL)bUsingPayAndQrcode;
- (BOOL)bUsingOfflinePay;
- (BOOL)bNeedToCallDelegateShareCardConsumed;
- (id)getUsedShareCardDataList;
- (id)getServiceContact;
- (id)getCardTypeName;
- (BOOL)bIsMemberCardPreAccept;
- (BOOL)bIsMemberCard;
- (id)getOuterAppNameIfExist;
- (BOOL)bIsNeedShowRightActionSheetItem;
- (BOOL)bIsShareCardFromSelf;
- (BOOL)bIsCardCanShareToFriend;
- (id)getCardDataJsonContentIfExist;
- (BOOL)bCanDeleteCurCard;
- (unsigned long long)getCurAddCardState;
- (BOOL)bIsCardFromOutAppScene;
- (void)uploadEnterCardDetailKvReport;
- (void)uploadEnterBrandProfileKvReport;
- (void)uploadCardPkgLocationReport;
- (void)uploadOpenOperationViewReport;
- (void)uploadOpenDetailViewReport;
- (void)uploadOpenCellList0ItemViewReport:(id)arg1;
- (BOOL)hasAnnounceReport;
- (void)setHaveShowTipForCardId:(id)arg1;
- (BOOL)isHaveShowTipForCardId:(id)arg1;
- (void)recoverBrightnessIfNeed;
- (void)graduallyIncreaseBrightnessIfNeed;
- (void)graduallySetBrightness:(double)arg1;
- (void)timerCheckUpdateBrightness;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)doRecoverScreenShot;
- (id)cardEnterInfo;
- (void)setCardEnterInfo:(id)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (BOOL)bNeedGetCardDataFromSvr;
- (void)setBNeedGetCardDataFromSvr:(BOOL)arg1;
- (BOOL)bIsFromBathView;
- (void)setBIsFromBathView:(BOOL)arg1;
- (int)cardStatus;
- (void)setCardStatus:(int)arg1;
- (id)dynamicCodeGenerator;
- (void)setDynamicCodeGenerator:(id)arg1;
- (id)shareCardData;
- (void)setShareCardData:(id)arg1;
- (id)arrShareCardDataList;
- (void)setArrShareCardDataList:(id)arg1;
- (BOOL)isConsumedNotify;
- (void)setIsConsumedNotify:(BOOL)arg1;
- (id)arrUsedShareCardList;
- (void)setArrUsedShareCardList:(id)arg1;
- (id)nsConsumedBoxID;
- (void)setNsConsumedBoxID:(id)arg1;
- (BOOL)bIsShareCardDetailMode;
- (void)setBIsShareCardDetailMode:(BOOL)arg1;
- (unsigned int)cardItemFromScene;
- (void)setCardItemFromScene:(unsigned int)arg1;
- (id)oneUsedStoreInfo;
- (void)setOneUsedStoreInfo:(id)arg1;
- (unsigned int)originCardItemFromScene;
- (void)setOriginCardItemFromScene:(unsigned int)arg1;
- (id)usedStoreList;
- (void)setUsedStoreList:(id)arg1;
- (void)setCurCardInfo:(id)arg1;
- (void)setCurCardTPInfo:(id)arg1;
- (unsigned long long)addCardState;
- (void)setAddCardState:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)offlineCode;
- (void)setOfflineCode:(id)arg1;
- (id)dynamicCode;
- (void)setDynamicCode:(id)arg1;
- (unsigned int)offlineCodeStatus;
- (void)setOfflineCodeStatus:(unsigned int)arg1;
- (id)codeConfig;
- (void)setCodeConfig:(id)arg1;
- (void).cxx_destruct;
@end
