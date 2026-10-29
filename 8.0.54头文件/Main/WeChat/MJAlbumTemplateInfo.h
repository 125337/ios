@interface MJAlbumTemplateInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _materialNumMin; // +0x8
    unsigned long long _materialNumMax; // +0x10
    NSString * _materialNumSuggest; // +0x18
}
+ (void)PBArrayAdd_materialNumMin;
+ (void)PBArrayAdd_materialNumMax;
+ (void)PBArrayAdd_materialNumSuggest;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithAlbumTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)materialNumMin;
- (void)setMaterialNumMin:(unsigned long long)arg1;
- (unsigned long long)materialNumMax;
- (void)setMaterialNumMax:(unsigned long long)arg1;
- (id)materialNumSuggest;
- (void)setMaterialNumSuggest:(id)arg1;
- (void).cxx_destruct;
@end

