@interface WCPayPayMenuArrayInfo : NSObject <PBCoding>
{
    NSMutableArray * _m_itemArray; // +0x8
}
+ (void)PBArrayAdd_m_itemArray;
+ (void)initialize;
+ (id)genFromDictionary:(id)arg1;
+ (void)saveFromDictionary:(id)arg1 withScene:(int)arg2;
+ (id)loadFromFileWithScene:(int)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (id)m_itemArray;
- (void)setM_itemArray:(id)arg1;
- (void).cxx_destruct;
@end
