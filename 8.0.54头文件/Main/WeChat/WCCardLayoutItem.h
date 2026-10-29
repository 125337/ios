@interface WCCardLayoutItem : MMObject <PBCoding>
{
    unsigned int _layoutEndTime; // +0x8
    unsigned int _itemType; // +0xc
    NSString * _cardID; // +0x10
    NSString * _announceMent; // +0x18
    NSString * _labelWording; // +0x20
}
+ (void)PBArrayAdd_cardID;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_itemType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)cardID;
- (void)setCardID:(id)arg1;
- (id)announceMent;
- (void)setAnnounceMent:(id)arg1;
- (unsigned int)layoutEndTime;
- (void)setLayoutEndTime:(unsigned int)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (id)labelWording;
- (void)setLabelWording:(id)arg1;
- (void).cxx_destruct;
@end

