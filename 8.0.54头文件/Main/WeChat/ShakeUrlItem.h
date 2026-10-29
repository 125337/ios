@interface ShakeUrlItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * _title; // +0x8
    NSString * _link; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _username; // +0x20
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_username;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end

