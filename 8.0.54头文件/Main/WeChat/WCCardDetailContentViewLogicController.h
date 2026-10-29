@interface WCCardDetailContentViewLogicController : MMObject
{
    BOOL _bIsShareCardMode; // +0x8
    int _cardStatus; // +0xc
    id <WCCardDetailContentLogicDelegate> _delegate; // +0x10
    id <WCCardDataSource> _cardDataSource; // +0x18
    WCCardDataCardInfo * _cardInfo; // +0x20
    WCCardDataCardTPInfo * _cardTPInfo; // +0x28
    WCCardUsedStoreInfo * _nearbyStoreInfo; // +0x30
    CContact * _serviceContact; // +0x38
    NSMutableArray * _tableSectionDataArr; // +0x40
    NSMutableDictionary * _tableRowDataDict; // +0x48
}
- (id)initLogicControllerWithCardDataSource:(id)arg1 isShareCardMode:(BOOL)arg2 usedStoreInfo:(id)arg3 serviceContact:(id)arg4 cardStatus:(int)arg5 delegate:(id)arg6;
- (void)updateLogicControllerWithCardDataSource:(id)arg1 isShareCardMode:(BOOL)arg2 withOneUsedStoreInfo:(id)arg3 withServiceContact:(id)arg4 withCardStatus:(int)arg5;
- (id)getCardDataSource;
- (id)getCardTPInfo;
- (id)getCardInfo;
- (id)getNearbyStoreInfo;
- (id)getServiceContact;
- (BOOL)hasBrandColor;
- (id)getBrandColor;
- (BOOL)hasBaseIntroView;
- (BOOL)hasSecondaryView;
- (BOOL)hasMoneyView;
- (BOOL)bIsIphone5ShareCardMode;
- (BOOL)hasServiceFollowInfo;
- (BOOL)hasReceive;
- (id)getGiftCardShareDetailContent;
- (void)calcTableViewSectionData;
- (id)getTableSectionDataArr;
- (id)getTableRowArrWithSectionIndex:(unsigned long long)arg1;
- (BOOL)hasOperationField;
- (BOOL)hasDetailView;
- (BOOL)hasImageInDetailView;
- (BOOL)hasNearByShopInfo;
- (BOOL)hasUsedStoreInfo;
- (BOOL)hasServiceContactInfo;
- (BOOL)hasCellList0Info;
- (BOOL)isMemberCard;
- (BOOL)isTicketCard;
- (BOOL)hasGiftToFriendInfo;
- (BOOL)bShowQRCodeCell;
- (BOOL)bShowCodeCell;
- (BOOL)bShowRapidPayOrderCell;
- (BOOL)isCardDataExistInDB;
- (BOOL)hasDetailTable;
- (BOOL)isNeedShowAcceptBtn;
- (id)getAcceptBtnTitle;
- (BOOL)isAcceptBtnEnable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardDataSource;
- (void)setCardDataSource:(id)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (id)cardTPInfo;
- (void)setCardTPInfo:(id)arg1;
- (BOOL)bIsShareCardMode;
- (void)setBIsShareCardMode:(BOOL)arg1;
- (id)nearbyStoreInfo;
- (void)setNearbyStoreInfo:(id)arg1;
- (id)serviceContact;
- (void)setServiceContact:(id)arg1;
- (int)cardStatus;
- (void)setCardStatus:(int)arg1;
- (id)tableSectionDataArr;
- (void)setTableSectionDataArr:(id)arg1;
- (id)tableRowDataDict;
- (void)setTableRowDataDict:(id)arg1;
- (void).cxx_destruct;
@end

