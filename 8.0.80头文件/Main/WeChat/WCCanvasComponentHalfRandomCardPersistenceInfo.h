@interface WCCanvasComponentHalfRandomCardPersistenceInfo : MMObject <NSCoding, PBCoding>
{
    NSMutableDictionary * _subCardInfos; // +0x8
}
+ (void)PBArrayAdd_subCardInfos;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)subCardInfos;
- (void)setSubCardInfos:(id)arg1;
- (void).cxx_destruct;
@end
