@interface WCPayECardControlData : NSObject
{
    int _openScene; // +0x8
    JSEvent * _jsEvent; // +0x10
    NSString * _reqSerial; // +0x18
    NSString * _payPassword; // +0x20
    NSString * _ecardType; // +0x28
    NSString * _filledCardNumber; // +0x30
    NSString * _filledPhoneNumber; // +0x38
    NSString * _filledBankType; // +0x40
    BankInfoItem * _selectedCardInfo; // +0x48
    NSArray * _bankArray; // +0x50
    QryBankList4BindRes * _bankListResponse; // +0x58
    OpenECardRes * _openECardResponse; // +0x60
    BindECardRes * _bindECardResponse; // +0x68
    WCPayBindCardInfo * _ECardInfo; // +0x70
}
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)reqSerial;
- (void)setReqSerial:(id)arg1;
- (id)payPassword;
- (void)setPayPassword:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (id)ecardType;
- (void)setEcardType:(id)arg1;
- (id)filledCardNumber;
- (void)setFilledCardNumber:(id)arg1;
- (id)filledPhoneNumber;
- (void)setFilledPhoneNumber:(id)arg1;
- (id)filledBankType;
- (void)setFilledBankType:(id)arg1;
- (id)selectedCardInfo;
- (void)setSelectedCardInfo:(id)arg1;
- (id)bankArray;
- (void)setBankArray:(id)arg1;
- (id)bankListResponse;
- (void)setBankListResponse:(id)arg1;
- (id)openECardResponse;
- (void)setOpenECardResponse:(id)arg1;
- (id)bindECardResponse;
- (void)setBindECardResponse:(id)arg1;
- (id)ECardInfo;
- (void)setECardInfo:(id)arg1;
- (void).cxx_destruct;
@end
