@interface ShakeTvActionList : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _type; // +0x8
    NSString * _title; // +0x10
    NSMutableArray * _actions; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_actions;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (void).cxx_destruct;
@end
