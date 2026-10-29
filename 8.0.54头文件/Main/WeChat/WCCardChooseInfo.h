@interface WCCardChooseInfo : MMObject
{
    unsigned int _cardType; // +0x8
    unsigned int _endTime; // +0xc
    unsigned int _chooseOptional; // +0x10
    unsigned int _genType; // +0x14
    NSString * _cardTpId; // +0x18
    NSString * _color; // +0x20
    NSString * _logoUrl; // +0x28
    NSString * _title; // +0x30
    NSString * _subTitle; // +0x38
    NSString * _encryptCode; // +0x40
    NSString * _shareUserName; // +0x48
    NSString * _appId; // +0x50
    NSString * _invoiceTitle; // +0x58
    NSString * _invoiceItem; // +0x60
    NSString * _invoiceStatus; // +0x68
    NSString * _cardId; // +0x70
}
- (void)parseFromJSONDic:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)encryptCode;
- (void)setEncryptCode:(id)arg1;
- (id)shareUserName;
- (void)setShareUserName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)invoiceTitle;
- (void)setInvoiceTitle:(id)arg1;
- (id)invoiceItem;
- (void)setInvoiceItem:(id)arg1;
- (unsigned int)chooseOptional;
- (void)setChooseOptional:(unsigned int)arg1;
- (id)invoiceStatus;
- (void)setInvoiceStatus:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned int)genType;
- (void)setGenType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

