@interface WCFinderContactFansInteractionData : NSObject <WCTColumnCoding, PBCoding>
{
    unsigned int _memberFlag; // +0x8
    unsigned int _orderCount; // +0xc
    unsigned int _interactionCount; // +0x10
}
+ (void)PBArrayAdd_memberFlag;
+ (void)PBArrayAdd_orderCount;
+ (void)PBArrayAdd_interactionCount;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)memberFlag;
- (void)setMemberFlag:(unsigned int)arg1;
- (unsigned int)orderCount;
- (void)setOrderCount:(unsigned int)arg1;
- (unsigned int)interactionCount;
- (void)setInteractionCount:(unsigned int)arg1;
@end
