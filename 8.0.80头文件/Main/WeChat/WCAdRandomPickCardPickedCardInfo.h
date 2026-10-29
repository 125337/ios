@interface WCAdRandomPickCardPickedCardInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _cardId; // +0x8
    unsigned long long _timestamp; // +0x10
}
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_timestamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
