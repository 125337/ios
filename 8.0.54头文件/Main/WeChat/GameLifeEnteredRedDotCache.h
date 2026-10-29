@interface GameLifeEnteredRedDotCache : NSObject <PBCoding>
{
    NSMutableArray * _enterIdArr; // +0x8
}
+ (void)PBArrayAdd_enterIdArr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)enterIdArr;
- (void)setEnterIdArr:(id)arg1;
- (void).cxx_destruct;
@end

