@interface MJTemplateDynamicInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _postCount; // +0x8
    unsigned long long _favFlag; // +0x10
}
+ (void)PBArrayAdd_postCount;
+ (void)PBArrayAdd_favFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithDycamicInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)postCount;
- (void)setPostCount:(unsigned long long)arg1;
- (unsigned long long)favFlag;
- (void)setFavFlag:(unsigned long long)arg1;
@end

