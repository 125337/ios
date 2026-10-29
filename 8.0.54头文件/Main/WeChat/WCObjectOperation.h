@interface WCObjectOperation : NSObject <NSCoding, PBCoding>
{
    int _snsOperateFlag; // +0x8
}
+ (void)PBArrayAdd_snsOperateFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (int)snsOperateFlag;
- (void)setSnsOperateFlag:(int)arg1;
@end

