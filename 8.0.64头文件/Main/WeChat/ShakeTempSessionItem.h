@interface ShakeTempSessionItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * _brandUserName; // +0x8
    NSString * _deeplinkUrl; // +0x10
}
+ (void)PBArrayAdd_brandUserName;
+ (void)PBArrayAdd_deeplinkUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)brandUserName;
- (void)setBrandUserName:(id)arg1;
- (id)deeplinkUrl;
- (void)setDeeplinkUrl:(id)arg1;
- (void).cxx_destruct;
@end
