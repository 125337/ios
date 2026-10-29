@interface ShakeWeAppItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    unsigned int _version; // +0x8
    NSString * _title; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _weAppUsername; // +0x20
    NSString * _path; // +0x28
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_weAppUsername;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_version;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)weAppUsername;
- (void)setWeAppUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

