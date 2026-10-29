@interface WCBGAuthor : NSObject <NSCoding, PBCoding>
{
    NSString * _name; // +0x8
    NSString * _title; // +0x10
    NSString * _quote; // +0x18
    NSString * _desc; // +0x20
    WCMediaItem * _icon; // +0x28
}
+ (id)bgAuthorFromServerObject:(id)arg1;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_quote;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_icon;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)quote;
- (void)setQuote:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end
