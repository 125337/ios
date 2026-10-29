@interface MJFaceIDNumberGroup : NSObject <PBCoding, NSCopying>
{
    NSArray * _numbers; // +0x8
}
+ (void)PBArrayAdd_numbers;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithNumberGroup:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)numbers;
- (void)setNumbers:(id)arg1;
- (void).cxx_destruct;
@end
