@interface WCPayOfflinePayCardList : NSObject <PBCoding>
{
    NSArray * _cardList; // +0x8
}
+ (void)PBArrayAdd_cardList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)cardList;
- (void)setCardList:(id)arg1;
- (void).cxx_destruct;
@end
