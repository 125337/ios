@interface MJTemplateFinderUserInfo : NSObject <PBCoding, NSCopying>
{
    NSString * _nickName; // +0x8
    NSString * _headImgUrl; // +0x10
    NSString * _signature; // +0x18
}
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_signature;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFinderUserInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (void).cxx_destruct;
@end

