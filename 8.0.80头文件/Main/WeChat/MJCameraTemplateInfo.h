@interface MJCameraTemplateInfo : NSObject <PBCoding, NSCopying>
{
    NSString * _resourcePackUrl; // +0x8
    unsigned long long _cameraPosition; // +0x10
}
+ (void)PBArrayAdd_resourcePackUrl;
+ (void)PBArrayAdd_cameraPosition;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithCameraTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)resourcePackUrl;
- (void)setResourcePackUrl:(id)arg1;
- (unsigned long long)cameraPosition;
- (void)setCameraPosition:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
