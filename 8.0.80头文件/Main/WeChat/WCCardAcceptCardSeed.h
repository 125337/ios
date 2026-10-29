@interface WCCardAcceptCardSeed : MMObject
{
    unsigned int _cardType; // +0x8
    NSString * _cardTpID; // +0x10
    NSString * _cardExt; // +0x18
}
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)cardTpID;
- (void)setCardTpID:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (void).cxx_destruct;
@end
