@interface MJCameraTemplateInfo : NSObject <PBCoding, NSCopying>
{
    NSString * _resourcePackUrl; // +0x8
}
+ (void)PBArrayAdd_resourcePackUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCameraTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)resourcePackUrl;
- (void)setResourcePackUrl:(id)arg1;
- (void).cxx_destruct;
@end

