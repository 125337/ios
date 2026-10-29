@interface WCCardDataCardInfo : MMObject <PBCoding>
{
    BOOL _isCommomCard; // +0x8
    BOOL _isLocationAuthorized; // +0x9
    unsigned int _codeType; // +0xc
    unsigned int _status; // +0x10
    unsigned int _avilNumber; // +0x14
    unsigned int _stockNumber; // +0x18
    unsigned int _limitNumber; // +0x1c
    NSString * _code; // +0x20
    NSString * _reportUrl; // +0x28
    NSArray * _secondaryFields; // +0x30
    WCCardFieldItem * _thirdField; // +0x38
    NSArray * _cellList0; // +0x40
    NSArray * _cellList1; // +0x48
    NSArray * _cellList2; // +0x50
    NSArray * _actionSheetList; // +0x58
    WCCardFieldItem * _cardListField; // +0x60
    WCCardFieldItem * _operateField; // +0x68
    WCCardFieldItem * _limitField; // +0x70
    NSString * _signNumber; // +0x78
    WCCardFieldItem * _unavailableQrcodeField; // +0x80
    NSString * _fromUserName; // +0x88
    WCCardDetailTable * _detailTable; // +0x90
    NSString * _backgroundPicUrl; // +0x98
    WCCardFieldItem * _giftingInfoField; // +0xa0
    WCCardFieldItem * _finderField; // +0xa8
    WCCardFieldItem * _feedField; // +0xb0
}
+ (void)PBArrayAdd_fromUserName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)codeType;
- (void)setCodeType:(unsigned int)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)avilNumber;
- (void)setAvilNumber:(unsigned int)arg1;
- (unsigned int)stockNumber;
- (void)setStockNumber:(unsigned int)arg1;
- (unsigned int)limitNumber;
- (void)setLimitNumber:(unsigned int)arg1;
- (id)reportUrl;
- (void)setReportUrl:(id)arg1;
- (id)secondaryFields;
- (void)setSecondaryFields:(id)arg1;
- (id)thirdField;
- (void)setThirdField:(id)arg1;
- (id)cellList0;
- (void)setCellList0:(id)arg1;
- (id)cellList1;
- (void)setCellList1:(id)arg1;
- (id)cellList2;
- (void)setCellList2:(id)arg1;
- (id)actionSheetList;
- (void)setActionSheetList:(id)arg1;
- (id)cardListField;
- (void)setCardListField:(id)arg1;
- (id)operateField;
- (void)setOperateField:(id)arg1;
- (id)limitField;
- (void)setLimitField:(id)arg1;
- (id)signNumber;
- (void)setSignNumber:(id)arg1;
- (id)unavailableQrcodeField;
- (void)setUnavailableQrcodeField:(id)arg1;
- (BOOL)isCommomCard;
- (void)setIsCommomCard:(BOOL)arg1;
- (BOOL)isLocationAuthorized;
- (void)setIsLocationAuthorized:(BOOL)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)detailTable;
- (void)setDetailTable:(id)arg1;
- (id)backgroundPicUrl;
- (void)setBackgroundPicUrl:(id)arg1;
- (id)giftingInfoField;
- (void)setGiftingInfoField:(id)arg1;
- (id)finderField;
- (void)setFinderField:(id)arg1;
- (id)feedField;
- (void)setFeedField:(id)arg1;
- (void).cxx_destruct;
@end

