@interface WCCardTpInfoItem : MMObject
{
    NSString * _cardTpID; // +0x8
    NSString * _cardCode; // +0x10
    NSString * _openCardParams; // +0x18
    NSString * _appid; // +0x20
    NSString * _userCardId; // +0x28
}
- (id)cardTpID;
- (void)setCardTpID:(id)arg1;
- (id)cardCode;
- (void)setCardCode:(id)arg1;
- (id)openCardParams;
- (void)setOpenCardParams:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)userCardId;
- (void)setUserCardId:(id)arg1;
- (void).cxx_destruct;
@end
