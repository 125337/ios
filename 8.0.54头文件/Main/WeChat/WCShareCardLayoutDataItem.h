@interface WCShareCardLayoutDataItem : MMObject <PBCoding>
{
    unsigned int _layoutEndTime; // +0x8
    unsigned int _top; // +0xc
    NSString * _cardTpId; // +0x10
    NSString * _announceMent; // +0x18
}
+ (void)PBArrayAdd_cardTpId;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)announceMent;
- (void)setAnnounceMent:(id)arg1;
- (unsigned int)layoutEndTime;
- (void)setLayoutEndTime:(unsigned int)arg1;
- (unsigned int)top;
- (void)setTop:(unsigned int)arg1;
- (void).cxx_destruct;
@end

