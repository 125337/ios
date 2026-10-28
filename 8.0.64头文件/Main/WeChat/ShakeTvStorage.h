@interface ShakeTvStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _newCount; // +0x8
    NSMutableArray * _items; // +0x10
}
+ (void)PBArrayAdd_items;
+ (void)PBArrayAdd_newCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (int)newCount;
- (void)setNewCount:(int)arg1;
- (void).cxx_destruct;
@end
