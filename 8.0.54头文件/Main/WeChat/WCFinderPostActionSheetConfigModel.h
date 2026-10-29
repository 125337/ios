@interface WCFinderPostActionSheetConfigModel : NSObject <PBCoding>
{
    NSString * _title; // +0x8
    NSString * _icon; // +0x10
    NSString * _desc; // +0x18
    unsigned long long _type; // +0x20
    NSString * _value; // +0x28
    NSString * _universalLink; // +0x30
    NSString * _appstoreScheme; // +0x38
    NSString * _extInfo; // +0x40
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_universalLink;
+ (void)PBArrayAdd_appstoreScheme;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithPostActionSheetConfig:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)universalLink;
- (void)setUniversalLink:(id)arg1;
- (id)appstoreScheme;
- (void)setAppstoreScheme:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

