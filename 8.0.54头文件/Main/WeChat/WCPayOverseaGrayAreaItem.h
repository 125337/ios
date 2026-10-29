@interface WCPayOverseaGrayAreaItem : NSObject <PBCoding>
{
    NSData * _name; // +0x8
    NSData * _logoUrl; // +0x10
    NSData * _clickUrl; // +0x18
    NSData * _extraInfo; // +0x20
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_clickUrl;
+ (void)PBArrayAdd_extraInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)name;
- (void)setName:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)clickUrl;
- (void)setClickUrl:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

