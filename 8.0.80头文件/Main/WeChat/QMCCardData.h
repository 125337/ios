@interface QMCCardData : NSObject
{
    NSString * _cardId; // +0x8
    long long _cardType; // +0x10
    NSString * _cardTypeRaw; // +0x18
    NSString * _subType; // +0x20
    NSString * _selectedRouteName; // +0x28
    NSMutableArray * _slots; // +0x30
    long long _score; // +0x38
    NSDictionary * _bizData; // +0x40
}
- (id)initWithCardId:(id)arg1 cardType:(long long)arg2;
- (id)poiSlots;
- (id)tabSlots;
- (id)routeNameSlots;
- (id)multiPoiJumpSlot;
- (id)premadeRouteSlots;
- (id)premadeRouteAllJumpSlot;
- (id)busRealtimeSlots;
- (id)busRouteSlots;
- (id)activitySlots;
- (id)realtimeTransitLineSlots;
- (id)activityAllJumpSlot;
- (id)allBusSlots;
- (id)subwaySlot;
- (id)stopSlots;
- (id)stopAllJumpSlot;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (id)cardTypeRaw;
- (void)setCardTypeRaw:(id)arg1;
- (id)subType;
- (void)setSubType:(id)arg1;
- (id)selectedRouteName;
- (void)setSelectedRouteName:(id)arg1;
- (id)slots;
- (void)setSlots:(id)arg1;
- (long long)score;
- (void)setScore:(long long)arg1;
- (id)bizData;
- (void)setBizData:(id)arg1;
- (void).cxx_destruct;
@end
