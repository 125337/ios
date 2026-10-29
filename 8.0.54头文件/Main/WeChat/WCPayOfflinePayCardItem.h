@interface WCPayOfflinePayCardItem : NSObject <PBCoding>
{
    NSString * _bankType; // +0x8
    NSString * _bindSerial; // +0x10
    long long _cardId; // +0x18
    NSString * _forbidWord; // +0x20
}
+ (void)PBArrayAdd_bankType;
+ (void)PBArrayAdd_bindSerial;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_forbidWord;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)bankType;
- (void)setBankType:(id)arg1;
- (id)bindSerial;
- (void)setBindSerial:(id)arg1;
- (long long)cardId;
- (void)setCardId:(long long)arg1;
- (id)forbidWord;
- (void)setForbidWord:(id)arg1;
- (void).cxx_destruct;
@end

